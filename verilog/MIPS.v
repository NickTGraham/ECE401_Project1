`include "config.v"
//-----------------------------------------
//            Pipelined MIPS
//-----------------------------------------
module MIPS (

    input RESET,
    input CLK,

    //The physical memory address we want to interact with
    output [31:0] data_address_2DM,
    //We want to perform a read?
    output MemRead_2DM,
    //We want to perform a write?
    output MemWrite_2DM,

    //Data being read
    input [31:0] data_read_fDM,
    //Data being written
    output [31:0] data_write_2DM,
    //How many bytes to write:
        // 1 byte: 1
        // 2 bytes: 2
        // 3 bytes: 3
        // 4 bytes: 0
    output [1:0] data_write_size_2DM,

    //Data being read
    input [255:0] block_read_fDM,
    //Data being written
    output [255:0] block_write_2DM,
    //Request a block read
    output dBlkRead,
    //Request a block write
    output dBlkWrite,
    //Block read is successful (meets timing requirements)
    input block_read_fDM_valid,
    //Block write is successful
    input block_write_fDM_valid,

    //Instruction to fetch
    output [31:0] Instr_address_2IM,
    //Instruction fetched at Instr_address_2IM
    input [31:0] Instr1_fIM,
    //Instruction fetched at Instr_address_2IM+4 (if you want superscalar)
    input [31:0] Instr2_fIM,

    //Cache block of instructions fetched
    input [255:0] block_read_fIM,
    //Block read is successfull
    input block_read_fIM_valid,
    //Request a block read
    output iBlkRead,

    //Tell the simulator that everything's ready to go to process a syscall.
    //Make sure that all register data is flushed to the register file, and that
    //all data cache lines are flushed and invalidated.
    output SYS
    );


//Connecting wires between IF and ID
    wire [31:0] Instr1_IFID;
    wire [31:0] Instr_PC_IFID;
    wire [31:0] Instr_PC_Plus4_IFID;
    wire        STALL_IDIF;
    wire        Request_Alt_PC_IDIF;
    wire [31:0] Alt_PC_IDIF;


//Connecting wires between IC and IF
    wire [31:0] Instr_address_2IC/*verilator public*/;
    //Instr_address_2IC is verilator public so that sim_main can give accurate
    //displays.
    //We could use Instr_address_2IM, but this way sim_main doesn't have to
    //worry about whether or not a cache is present.
    wire [31:0] Instr1_fIC;
    wire [31:0] Instr2_fIC;
    assign Instr_address_2IM = Instr_address_2IC;
    assign Instr1_fIC = Instr1_fIM;
    assign Instr2_fIC = Instr2_fIM;
    assign iBlkRead = 1'b0;
    /*verilator lint_off UNUSED*/
    wire [255:0] unused_i1;
    wire unused_i2;
    /*verilator lint_on UNUSED*/
    assign unused_i1 = block_read_fIM;
    assign unused_i2 = block_read_fIM_valid;
`ifdef SUPERSCALAR
`else
    /*verilator lint_off UNUSED*/
    wire [31:0] unused_i3;
    /*verilator lint_on UNUSED*/
    assign unused_i3 = Instr2_fIC;
`endif

    IF IF(
        .CLK(CLK),
        .RESET(RESET),
        .Instr1_OUT(Instr1_IFID),
        .Instr_PC_OUT(Instr_PC_IFID),
        .Instr_PC_Plus4(Instr_PC_Plus4_IFID),
        .STALL(STALL_IDIF),
        .Request_Alt_PC(Request_Alt_PC_IDIF),
        .Alt_PC(Alt_PC_IDIF),
        .Instr_address_2IM(Instr_address_2IC),
        .Instr1_fIM(Instr1_fIC)
    );


    wire [4:0]  WriteRegister1_MEMWB;
    wire [31:0] WriteData1_MEMWB;
    wire        RegWrite1_MEMWB;

    wire [31:0] Instr1_IDEXE;
    wire [31:0] Instr1_PC_IDEXE;
    wire [31:0] OperandA1_IDEXE;
    wire [31:0] OperandB1_IDEXE;
    wire [4:0]  WriteRegister1_IDEXE;
    wire [31:0] MemWriteData1_IDEXE;
    wire        RegWrite1_IDEXE;
    wire [5:0]  ALU_Control1_IDEXE;
    wire        MemRead1_IDEXE;
    wire        MemWrite1_IDEXE;
    wire [4:0]  ShiftAmount1_IDEXE;
    wire reg_write_IDFU;
    wire link_IDFU;
    wire branch_IDFU;
    wire jump_IDFU;
    wire jump_reg_IDFU;
    wire immediate_IDFU;
    wire store_IDFU;
    wire [31:0] FWD_ALU_Result_Wire;
    wire [31:0] FWD_MEM_Result_Wire;
    wire [31:0] FWD_WB_Result_Wire;
    ID ID(
        .CLK(CLK),
        .RESET(RESET),
        .Instr1_IN(Instr1_IFID),
        .Instr_PC_IN(Instr_PC_IFID),
        .Instr_PC_Plus4_IN(Instr_PC_Plus4_IFID),
        .WriteRegister1_IN(WriteRegister1_MEMWB),
        .WriteData1_IN(WriteData1_MEMWB),
        .RegWrite1_IN(RegWrite1_MEMWB),
        .Alt_PC(Alt_PC_IDIF),
        .Request_Alt_PC(Request_Alt_PC_IDIF),
        .Instr1_OUT(Instr1_IDEXE),
        .Instr1_PC_OUT(Instr1_PC_IDEXE),
        .OperandA1_OUT(OperandA1_IDEXE),
        .OperandB1_OUT(OperandB1_IDEXE),
/* verilator lint_off PINCONNECTEMPTY */
        .ReadRegisterA1_OUT(),
        .ReadRegisterB1_OUT(),
/* verilator lint_on PINCONNECTEMPTY */
        .WriteRegister1_OUT(WriteRegister1_IDEXE),
        .MemWriteData1_OUT(MemWriteData1_IDEXE),
        .RegWrite1_OUT(RegWrite1_IDEXE),
        .ALU_Control1_OUT(ALU_Control1_IDEXE),
        .MemRead1_OUT(MemRead1_IDEXE),
        .MemWrite1_OUT(MemWrite1_IDEXE),
        .ShiftAmount1_OUT(ShiftAmount1_IDEXE),
        .Branch_JR_select_A_FU(Branch_JR_select_A_FU),
        .Branch_JR_select_B_FU(Branch_JR_select_B_FU),
        .reg_write(reg_write_IDFU),
        .link_out(link_IDFU),
        .branch_out(branch_IDFU),
        .jump_out(jump_IDFU),
        .jump_reg_out(jump_reg_IDFU),
        .use_rd(immediate_IDFU),
        .store_fu(store_IDFU),
        .Fwd_ALU_Result(FWD_ALU_Result_Wire),
        .Fwd_Mem_result(FWD_MEM_Result_Wire),
        .Fwd_Wb_result(FWD_WB_Result_Wire),
        .SYS(SYS),
        .WANT_FREEZE(STALL_IDIF)
    );

    //ForwardingUnit output wires
    wire [1:0] EXE_A_Select_FU;
    wire [1:0] EXE_B_Select_FU;
    wire [1:0] MEM_Data_select_FU;
    wire [1:0] Branch_JR_select_A_FU;
    wire [1:0] Branch_JR_select_B_FU;
    //wire stall;
    ForwardingUnit FwrdUnit (
        .CLK(CLK),
        .ID_Instruction(Instr1_IFID),
        .branch(branch_IDFU),
        .jump(jump_IDFU),
        .jump_register(jump_reg_IDFU),
        .link(link_IDFU), //get from ID
        .immediate(immediate_IDFU),
        .load(MemRead1_IDEXE),
        .store(store_IDFU),
        .reg_write(reg_write_IDFU),
        .EXE_A_Select(EXE_A_Select_FU), //data select lines
        .EXE_B_Select(EXE_B_Select_FU),
        .Branch_JR_select_A(Branch_JR_select_A_FU),
        .Branch_JR_select_B(Branch_JR_select_B_FU),
        .MEM_Data_select(MEM_Data_select_FU),
        .stall(STALL_IDIF) //this is probably bad...
    );


    wire [31:0] Instr1_EXEMEM;
    wire [31:0] Instr1_PC_EXEMEM;
    wire [31:0] ALU_result1_EXEMEM;
    wire [4:0]  WriteRegister1_EXEMEM;
    wire [31:0] MemWriteData1_EXEMEM;
    wire        RegWrite1_EXEMEM;
    wire [5:0]  ALU_Control1_EXEMEM;
    wire        MemRead1_EXEMEM;
    wire        MemWrite1_EXEMEM;

    wire [1:0] MEM_Data_select_EXEMEM;

    EXE EXE(
        .CLK(CLK),
        .RESET(RESET),
        .Instr1_IN(Instr1_IDEXE),
        .Instr1_PC_IN(Instr1_PC_IDEXE),
        .OperandA1_IN(OperandA1_IDEXE),
        .OperandB1_IN(OperandB1_IDEXE),
        .WriteRegister1_IN(WriteRegister1_IDEXE),
        .MemWriteData1_IN(MemWriteData1_IDEXE),
        .RegWrite1_IN(RegWrite1_IDEXE),
        .ALU_Control1_IN(ALU_Control1_IDEXE),
        .MemRead1_IN(MemRead1_IDEXE),
        .MemWrite1_IN(MemWrite1_IDEXE),
        .ShiftAmount1_IN(ShiftAmount1_IDEXE),
        .Instr1_OUT(Instr1_EXEMEM),
        .Instr1_PC_OUT(Instr1_PC_EXEMEM),
        .ALU_result1_OUT(ALU_result1_EXEMEM),
        .WriteRegister1_OUT(WriteRegister1_EXEMEM),
        .MemWriteData1_OUT(MemWriteData1_EXEMEM),
        .RegWrite1_OUT(RegWrite1_EXEMEM),
        .ALU_Control1_OUT(ALU_Control1_EXEMEM),
        .MemRead1_OUT(MemRead1_EXEMEM),
        .MemWrite1_OUT(MemWrite1_EXEMEM),
        //Forwarding stuff
        .RegA_Select(EXE_A_Select_FU),
        .RegB_Select(EXE_B_Select_FU),
        .MEM_Data_select(MEM_Data_select_FU),
        .ALU_result_forward(FWD_ALU_Result_Wire),
        .Mem_result_forward(FWD_MEM_Result_Wire),
        .WB_result_forward(FWD_WB_Result_Wire),

        .MEM_Data_select_out(MEM_Data_select_EXEMEM)
    );


    wire [31:0] data_write_2DC/*verilator public*/;
    wire [31:0] data_address_2DC/*verilator public*/;
    wire [1:0]  data_write_size_2DC/*verilator public*/;
    wire [31:0] data_read_fDC/*verilator public*/;
    wire        read_2DC/*verilator public*/;
    wire        write_2DC/*verilator public*/;
    //No caches, so:
    /* verilator lint_off UNUSED */
    wire        flush_2DC/*verilator public*/;
    /* verilator lint_on UNUSED */
    wire        data_valid_fDC /*verilator public*/;
    assign data_write_2DM = data_write_2DC;
    assign data_address_2DM = data_address_2DC;
    assign data_write_size_2DM = data_write_size_2DC;
    assign data_read_fDC = data_read_fDM;
    assign MemRead_2DM = read_2DC;
    assign MemWrite_2DM = write_2DC;
    assign data_valid_fDC = 1'b1;

    assign dBlkRead = 1'b0;
    assign dBlkWrite = 1'b0;
    assign block_write_2DM = block_read_fDM;
    /*verilator lint_off UNUSED*/
    wire unused_d1;
    wire unused_d2;
    /*verilator lint_on UNUSED*/
    assign unused_d1 = block_read_fDM_valid;
    assign unused_d2 = block_write_fDM_valid;

    MEM MEM(
        .CLK(CLK),
        .RESET(RESET),
        .Instr1_IN(Instr1_EXEMEM),
        .Instr1_PC_IN(Instr1_PC_EXEMEM),
        .ALU_result1_IN(ALU_result1_EXEMEM),
        .WriteRegister1_IN(WriteRegister1_EXEMEM),
        .MemWriteData1_IN(MemWriteData1_EXEMEM),
        .RegWrite1_IN(RegWrite1_EXEMEM),
        .ALU_Control1_IN(ALU_Control1_EXEMEM),
        .MemRead1_IN(MemRead1_EXEMEM),
        .MemWrite1_IN(MemWrite1_EXEMEM),
        .WriteRegister1_OUT(WriteRegister1_MEMWB),
        .RegWrite1_OUT(RegWrite1_MEMWB),
        .WriteData1_OUT(WriteData1_MEMWB),
        .data_write_2DM(data_write_2DC),
        .data_address_2DM(data_address_2DC),
        .data_write_size_2DM(data_write_size_2DC),
        .data_read_fDM(data_read_fDC),
        .MemRead_2DM(read_2DC),
        .MemWrite_2DM(write_2DC),
        .MEM_Data_select(MEM_Data_select_EXEMEM),
        .MEM_Data_Forward(FWD_MEM_Result_Wire)
    );


endmodule
