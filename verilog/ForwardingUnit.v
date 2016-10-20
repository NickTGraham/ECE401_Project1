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
    input reg_write,
    output [1:0] EXE_A_Select, //data select lines
    output [1:0] EXE_B_Select,
    //output [31:0] Alt_RegA, //Forwarded data
    //output [31:0] Alt_RegB,
    output [1:0] MEM_Data_select, //Forward from WB to Mem data
    //output [31:0] Alt_MEM_Data, //forwarded wb data
    output stall //Need to stall because of branch or jr conflicts
    );

    reg [4:0] EXE_RegA, EXE_RegB, EXE_WriteReg;
    reg EXE_Valid_Write;
    reg [4:0] MEM_RegA, MEM_RegB, MEM_WriteReg;
    reg MEM_Valid_Write;
    reg [4:0] WB_RegA, WB_RegB, WB_WriteReg;
    reg WB_Valid_Write;

    wire [4:0] rs = ID_Instruction[25:21];
    wire [4:0] rt;// = ID_Instruction[20:16];
    wire [4:0] rd;// = ID_Instruction[15:11];

    assign rt = immediate?0:ID_Instruction[15:11];
    assign rd = immediate?ID_Instruction[20:16]:ID_Instruction[15:11];
    //Not gaurenteed to be true.
    //assign EXE_RegA = ID_Instruction[25:21];
    //assign EXE_RegB = ID_Instruction[20:16];
    //assign EXE_WriteReg = ID_Instruction[15:11];
    //to ignore warnings
    wire fu_load = load;
    wire [4:0] fu_wb_rega = WB_RegA;
    wire [4:0] fu_wb_regb = WB_RegB;

    assign stall = (((jump & jump_register) | branch) & (rs == EXE_WriteReg | rs == MEM_WriteReg | rs == WB_WriteReg));

    assign EXE_A_Select = (rs == EXE_WriteReg & rs != 0 & EXE_Valid_Write)?2'd1:((rs == MEM_WriteReg & rs != 0 & MEM_Valid_Write)?2'd2:((rs == WB_WriteReg & rs != 0 & WB_Valid_Write)?2'd3:2'd0));
    assign EXE_B_Select = (rt == EXE_WriteReg & rt != 0 & EXE_Valid_Write)?2'd1:((rt == MEM_WriteReg & rt != 0 & MEM_Valid_Write)?2'd2:((rt == WB_WriteReg & rt != 0 & WB_Valid_Write)?2'd3:2'd0));
    assign MEM_Data_select  = (rt == EXE_WriteReg & store & EXE_Valid_Write & rt != 0)?2'd1:((rt == MEM_WriteReg & store & MEM_Valid_Write & rt != 0)?2'd2:((rt == WB_WriteReg & store & WB_Valid_Write & rt != 0)?2'd3:2'd0));
    always @(posedge CLK) begin
        if (0) begin
            $display("%x %x %x", fu_load, fu_wb_regb, fu_wb_rega);
        end

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
        $display("rs [%d] EXEWriteReg [%d] EXE_Valid_Write [%d] immediate[%d]", rs, EXE_WriteReg, EXE_Valid_Write, immediate);
        // if (rs == EXE_WriteReg & rs != 0 & EXE_Valid_Write) begin
        //     EXE_A_Select <= 2'd1;
        // end
        // else if (rs == MEM_WriteReg & rs != 0 & MEM_Valid_Write) begin
        //     EXE_A_Select <= 2'd2;
        // end
        // else if (rs == WB_WriteReg & rs != 0 & WB_Valid_Write) begin
        //     EXE_A_Select <= 2'd3;
        // end
        // else begin
        //     EXE_A_Select <= 2'd0;
        // end

        //Forward to EXE Reg B
        // if (rt == EXE_WriteReg & !immediate & rt != 0 & EXE_Valid_Write) begin
        //     EXE_B_Select <= 2'd1;
        // end
        // else if (rt == MEM_WriteReg & !immediate & rt != 0 & MEM_Valid_Write) begin
        //     EXE_B_Select <= 2'd2;
        // end
        // else if (rt == WB_WriteReg & !immediate & rt != 0 & WB_Valid_Write) begin
        //     EXE_B_Select <= 2'd3;
        // end
        // else begin
        //     EXE_B_Select <= 2'd0;
        // end
        //Forward data to Mem statements
        // if (rt == EXE_WriteReg & store & EXE_Valid_Write) begin
        //     MEM_Data_select <= 2'd1;
        // end
        // else if (rt == MEM_WriteReg & store & MEM_Valid_Write) begin
        //     MEM_Data_select <= 2'd2;
        // end
        // else if (rt == WB_WriteReg & store & WB_Valid_Write) begin
        //     MEM_Data_select <= 2'd3;
        // end
        // else begin
        //     MEM_Data_select <= 2'd0;
        // end
        $display("A_Select [%b] B_Select [%b] MEM_Data_select[%b]", EXE_A_Select, EXE_B_Select, MEM_Data_select);
        //Shift data forward in the pipeline
        /* verilator lint_off BLKSEQ */
        WB_RegA = MEM_RegA;
        WB_RegB = MEM_RegB;
        WB_WriteReg = MEM_WriteReg;
        WB_Valid_Write = MEM_Valid_Write;

        MEM_RegA = EXE_RegA;
        MEM_RegB = EXE_RegB;
        MEM_WriteReg = EXE_WriteReg;
        MEM_Valid_Write = EXE_Valid_Write;

        EXE_RegA = rs;
        EXE_RegB = rt;
        EXE_WriteReg = rd;
        EXE_Valid_Write = reg_write;
        /* verilator lint_on BLKSEQ */

    end
endmodule