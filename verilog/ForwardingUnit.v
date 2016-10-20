`include "config.v"

module ForwardingUnit(
    input CLK,
    /* verilator lint_off UNUSED */
    input [31:0] ID_Instruction, //input info from other stages
    /* verilator lint_on UNUSED */
    //input [31:0] MEM_Input,
    //input [31:0] WB_input,
    input branch,
    input jump,
    input jump_register,
    input immediate,
    input load,
    input store,
    output [1:0] EXE_A_Select, //data select lines
    output [1:0] EXE_B_Select,
    //output [31:0] Alt_RegA, //Forwarded data
    //output [31:0] Alt_RegB,
    output [1:0] MEM_Data_select, //Forward from WB to Mem data
    //output [31:0] Alt_MEM_Data, //forwarded wb data
    output stall //Need to stall because of branch or jr conflicts
    );

    reg [4:0] EXE_RegA, EXE_RegB, EXE_WriteReg;
    reg [4:0] MEM_RegA, MEM_RegB, MEM_WriteReg;
    reg [4:0] WB_RegA, WB_RegB, WB_WriteReg;

    wire [4:0] rs = ID_Instruction[25:21];
    wire [4:0] rt = ID_Instruction[20:16];
    wire [4:0] rd = ID_Instruction[15:11];

    //to ignore warnings
    wire fu_load = load;
    wire [4:0] fu_wb_rega = WB_RegA;
    wire [4:0] fu_wb_regb = WB_RegB;

    assign stall = (((jump & jump_register) | branch) & (rs == EXE_WriteReg | rs == MEM_WriteReg | rs == WB_WriteReg));
    always @(posedge CLK) begin
        $display("%x %x %x", fu_load, fu_wb_regb, fu_wb_rega);
        //Stall if there is a conflict with a jump or a branch
        // if ((jump & jump_register) | branch) begin
        //     if (rs == EXE_WriteReg | rs == MEM_WriteReg | rs == WB_WriteReg) begin
        //         stall <= 1;
        //     end
        //     else begin
        //         stall <= 0;
        //     end
        // end

        //Forward to EXE Reg A
        if (rs == EXE_WriteReg) begin
            EXE_A_Select <= 2'd1;
        end
        else if (rs == MEM_WriteReg) begin
            EXE_A_Select <= 2'd2;
        end
        else if (rs == WB_WriteReg) begin
            EXE_A_Select <= 2'd3;
        end
        else begin
            EXE_A_Select <= 2'd0;
        end

        //Forward to EXE Reg B
        if (rt == EXE_WriteReg & !immediate) begin
            EXE_B_Select <= 2'd1;
        end
        else if (rt == MEM_WriteReg & !immediate) begin
            EXE_B_Select <= 2'd2;
        end
        else if (rt == WB_WriteReg & !immediate) begin
            EXE_B_Select <= 2'd3;
        end
        else begin
            EXE_B_Select <= 2'd0;
        end
        //Forward data to Mem statements
        if (rt == EXE_WriteReg & store) begin
            MEM_Data_select <= 2'd1;
        end
        else if (rt == MEM_WriteReg & store) begin
            MEM_Data_select <= 2'd2;
        end
        else if (rt == WB_WriteReg & store) begin
            MEM_Data_select <= 2'd3;
        end
        else begin
            MEM_Data_select <= 2'd0;
        end

        //Shift data forward in the pipeline
        /* verilator lint_off BLKSEQ */
        WB_RegA = MEM_RegA;
        WB_RegB = MEM_RegB;
        WB_WriteReg = MEM_WriteReg;

        MEM_RegA = EXE_RegA;
        MEM_RegB = EXE_RegB;
        MEM_WriteReg = EXE_WriteReg;

        EXE_RegA = rs;
        EXE_RegB = rt;
        EXE_WriteReg = rd;
        /* verilator lint_on BLKSEQ */

    end
endmodule
