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
    input link, //need to know, handles reg's differently
    input immediate,
    input load,
    input store,
    input reg_write,
    output [1:0] EXE_A_Select, //data select lines
    output [1:0] EXE_B_Select,
    //output [31:0] Alt_RegA, //Forwarded data
    //output [31:0] Alt_RegB,
    output [1:0] MEM_Data_select, //Forward from WB to Mem data
    output [1:0] Branch_JR_select_A, //forward to the Branch and jump (Needs 2 inputs for compare, so 2 possible forwards)
    output [1:0] Branch_JR_select_B, //forward to the Branch and jump
    //output [31:0] Alt_MEM_Data, //forwarded wb data
    output stall //Need to stall because of branch or jr conflicts
    );

    /* I don't like these names, they aren't accurate, also, don't need to keep al this info
    reg [4:0] EXE_RegA, EXE_RegB, EXE_WriteReg; //previous inst
    reg EXE_Valid_Write;
    reg [4:0] MEM_RegA, MEM_RegB, MEM_WriteReg; //The one before that
    reg MEM_Valid_Write;
    reg [4:0] WB_RegA, WB_RegB, WB_WriteReg; //and the one before that
    reg WB_Valid_Write;
    */
    /* In Reality we have the last 3 instructions (I don't like how it was done
       above because I found it hard to keep track of what corrisponded to what).
    */

    //For someone complaining that the old method was inacurate, I actually think this is worse
    //I am very proud of myself...
    reg [4:0] PC_4_WriteReg, PC_8_WriteReg, PC_12_WriteReg;
    //reg PC-4_Write, PC-8_Write, PC-12_Write; //can store there valid write // !! Had a better idea, I can just set to 0 if it isn't a write

    wire [4:0] rs = ID_Instruction[25:21];
    wire [4:0] rt;// = ID_Instruction[20:16];
    wire [4:0] rd;// = ID_Instruction[15:11];

    assign rt = immediate?ID_Instruction[20:16]:(store?(ID_Instruction[20:16]):0);
    assign rd = immediate?ID_Instruction[15:11]:ID_Instruction[20:16];
    //Not gaurenteed to be true.
    //assign EXE_RegA = ID_Instruction[25:21];
    //assign EXE_RegB = ID_Instruction[20:16];
    //assign EXE_WriteReg = ID_Instruction[15:11];
    //to ignore warnings
    wire fu_load = load;
    //wire [4:0] fu_wb_rega = WB_RegA;
    //wire [4:0] fu_wb_regb = WB_RegB;

    //You know, I have no idea about this....
    assign stall = (((jump & jump_register) | branch) & ((rs == PC_4_WriteReg & rs !=0) | (rs == PC_8_WriteReg & rs !=0) | (rs == PC_12_WriteReg & rs !=0)));

    /* Again I find this approach confusing. Now exucuse me as I rewrite it in worse manor
    assign EXE_A_Select = (rs == EXE_WriteReg & rs != 0 & EXE_Valid_Write)?2'd1:((rs == MEM_WriteReg & rs != 0 & MEM_Valid_Write)?2'd2:((rs == WB_WriteReg & rs != 0 & WB_Valid_Write)?2'd3:2'd0));
    assign EXE_B_Select = (rt == EXE_WriteReg & rt != 0 & EXE_Valid_Write)?2'd1:((rt == MEM_WriteReg & rt != 0 & MEM_Valid_Write)?2'd2:((rt == WB_WriteReg & rt != 0 & WB_Valid_Write)?2'd3:2'd0));
    assign MEM_Data_select  = (rt == EXE_WriteReg & store & EXE_Valid_Write & rt != 0)?2'd1:((rt == MEM_WriteReg & store & MEM_Valid_Write & rt != 0)?2'd2:((rt == WB_WriteReg & store & WB_Valid_Write & rt != 0)?2'd3:2'd0));
    */

    //Actually in the end, I could not rewrite it, and they are the same...
    wire [1:0] EXE_A_Select_Wire, EXE_B_Select_Wire, MEM_Data_select_Wire;

    //If 1 pull value in from PC-4, if 2 pull from PC-8 if 3 pull from PC-12 otherwise use regular value. This is done in the EXE Stage
    assign EXE_A_Select_Wire = (PC_4_WriteReg != 0 & !link & PC_4_WriteReg == rs)?2'd1:(!link & PC_8_WriteReg != 0 & PC_8_WriteReg == rs)?2'd2:(!link & PC_12_WriteReg !=0 & PC_12_WriteReg == rs)?2'd3:2'd0;
    assign EXE_B_Select_Wire = (PC_4_WriteReg != 0 & !link & PC_4_WriteReg == rt)?2'd1:(!link & PC_8_WriteReg != 0 & PC_8_WriteReg == rt)?2'd2:(!link & PC_12_WriteReg !=0 & PC_12_WriteReg == rt)?2'd3:2'd0;
    //If 1 pull value in from PC-4, if 2 pull from PC-8 if 3 pull from PC-12 otherwise use regular value. This is done in EXE to replace data passed in, and possibly later in mem (I am unsure if that condition could be met...?)
    assign MEM_Data_select_Wire = (PC_4_WriteReg != 0 & store & PC_4_WriteReg == rt)?2'd1:(store & PC_8_WriteReg != 0 & PC_8_WriteReg == rt)?2'd2:(store & PC_12_WriteReg !=0 & PC_12_WriteReg == rt)?2'd3:2'd0;

    //Now to forward for branches or for jump registers, to be handled in decode stage. I think this can happed even if a link too...
    assign Branch_JR_select_A = (PC_4_WriteReg != 0 & PC_4_WriteReg == rs)?2'd1:(PC_8_WriteReg != 0 & PC_8_WriteReg == rs)?2'd2:(PC_12_WriteReg !=0 & PC_12_WriteReg == rs)?2'd3:2'd0;
    assign Branch_JR_select_B = (PC_4_WriteReg != 0 &  PC_4_WriteReg == rt)?2'd1:(PC_8_WriteReg != 0 & PC_8_WriteReg == rt)?2'd2:(PC_12_WriteReg !=0 & PC_12_WriteReg == rt)?2'd3:2'd0;

    //I am unsure if this is needed, I don't know. I am tired.
    // -- So after a short, unplanned nap, I now remember what this was for, forwardinding the data for a store
    //assign MEM_Data_select = 2'b0;

    always @(posedge CLK) begin
        if (0) begin
            $display("%x", fu_load);
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
        //$display("rs [%d] EXEWriteReg [%d] EXE_Valid_Write [%d] immediate[%d]", rs, EXE_WriteReg, EXE_Valid_Write, immediate);
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

        //Shift data forward in the pipeline
        /* verilator lint_off BLKSEQ */
        /* Old Implementation, rewriting
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
        */

        EXE_A_Select <= EXE_A_Select_Wire;
        EXE_B_Select <= EXE_B_Select_Wire;
        MEM_Data_select <= MEM_Data_select_Wire;

        $display("A_Select [%b] B_Select [%b] MEM_Data_select[%b]", EXE_A_Select, EXE_B_Select, MEM_Data_select);
        $display("rs [%d] rt [%d] PC_4 [%d] PC_8 [%d] PC_12 [%d]", rs, rt, PC_4_WriteReg, PC_8_WriteReg, PC_12_WriteReg);
        $display("Wires A_Select [%b] B_Select [%b] MEM_Data_select [%d]  store[%b]", EXE_A_Select_Wire, EXE_B_Select_Wire, MEM_Data_select, store);
        PC_12_WriteReg <= PC_8_WriteReg;
        PC_8_WriteReg <= PC_4_WriteReg;
        if (reg_write) begin
            PC_4_WriteReg <= rd;
        end
        else begin
            PC_4_WriteReg <= 0;
        end
        /* verilator lint_on BLKSEQ */

    end
endmodule
