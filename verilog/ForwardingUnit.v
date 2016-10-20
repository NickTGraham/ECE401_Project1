`include "config.v"

module ForwardingUnit(
    input [31:0] ID_Instruction, //input info from other stages
    //input [31:0] MEM_Input,
    //input [31:0] WB_input,
    input branch,
    input jump,
    input jump_register,
    input immediate,
    input load_store,
    output [1:0] EXE_A_Select, //data select lines
    output [1:0] EXE_B_Select,
    //output [31:0] Alt_RegA, //Forwarded data
    //output [31:0] Alt_RegB,
    output MEM_Data_select, //Forward from WB to Mem data
    //output [31:0] Alt_MEM_Data, //forwarded wb data
    output stall //Need to stall because of branch or jr conflicts
    );

    reg [4:0] EXE_RegA, EXE_RegB, EXE_WriteReg;
    reg [4:0] MEM_RegA, MEM_RegB, MEM_WriteReg;
    reg [4:0] WB_RegA, WB_RegB, WB_WriteReg;

    wire rs = ID_Instruction[25:21];
    wire rt = ID_Instruction[20:16];
    wire rd = ID_Instruction[15:11];
    always @(posedge CLK) begin
        //Stall if there is a conflict with a jump or a branch
        if (jump_register | branch) begin
            if (rs == EXE_WriteReg | rs == MEM_WriteReg | rs == WB_WriteReg) begin
                stall <= 1;
            end
            else begin
                stall <= 0;
            end
        end

        //Forward to EXE Reg A
        if (rs == EXE_WriteReg) begin
            EXE_A_Select <= 2'b1;
        end
        else if (rs == MEM_WriteReg) begin
            EXE_A_Select <= 2'b2;
        end
        else if (rs == WB_WriteReg) begin
            EXE_A_Select <= 2'b3;
        end
        else
            EXE_A_Select <= 2'b0;
        end

        //Forward to EXE Reg B
        if (rt == EXE_WriteReg & !immediate) begin
            EXE_B_Select <= 2'b1;
        end
        else if (rt == MEM_WriteReg & !immediate) begin
            EXE_B_Select <= 2'b2;
        end
        else if (rt == WB_WriteReg & !immediate) begin
            EXE_B_Select <= 2'b3;
        end
        else

        //Forward data to Mem statements
        if (rt == EXE_WriteReg & load_store) begin
            MEM_Data_select <= 2'b1;
        end
        else if (rt == MEM_WriteReg &load_store) begin
            MEM_Data_select <= 2'b2;
        end
        else if (rt == WB_WriteReg &load_store) begin
            MEM_Data_select <= 2'b3;
        end
        else begin
            MEM_Data_select <= 2'b0;
        end
    end
endmodule
