`include "config.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    12:17:07 10/18/2013
// Design Name:
// Module Name:    MEM2
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// Notes:
//      - For Continutity in Comments, I wrote this from the bottom
//        up, so read in that order if you want it to make any sense...
//      - If you are ever wondering what it is like to be a complete idiot, send
//        me an email. I have gained a lot of insight into that by working on this
//        file...
// SWL and SWR store as many bits as they can before the
// word terminates, so between one and 4 bytes. SWL takes the most significant,
// and SWR takes the least significant
//
//////////////////////////////////////////////////////////////////////////////////
module MEM(
    input CLK,
    input RESET,
    //Currently executing instruction [debug only]
    input [31:0] Instr1_IN,
    //PC of executing instruction [debug only]
    input [31:0] Instr1_PC_IN,
    //Output of ALU (contains address to access, or data enroute to writeback)
    input [31:0] ALU_result1_IN,
    //What register will get our ultimate outputs
    input [4:0] WriteRegister1_IN,
    //What data gets written to memory
    input [31:0] MemWriteData1_IN,
    //This instruction is a register write?
    input RegWrite1_IN,
    //ALU control value (used to also specify the type of memory operation)
    input [5:0] ALU_Control1_IN,
    //The instruction requests a load
    input MemRead1_IN,
    //The instruction requests a store
    input MemWrite1_IN,
    //What register we are writing to
    output reg [4:0] WriteRegister1_OUT,
    //Actually do the write
    output reg RegWrite1_OUT,
    //And what data
    output reg [31:0] WriteData1_OUT,

    //What the hell is this? I assume this is what verilator uses, I can't find where this stuff is connected either
    output reg [31:0] data_write_2DM,
    output [31:0] data_address_2DM,
     output reg [1:0] data_write_size_2DM,
    input [31:0] data_read_fDM,
     output MemRead_2DM,
     output MemWrite_2DM


    );

     //Variables for Memory Module Inputs/Outputs:
     //ALU_result == Memory Address to access
     //MemRead (obvious)
     //MemWrite (obvious)
     //ALU_control (obvious)
     wire [31:0] MemoryData1;	//Used for LWL, LWR (existing content in register) and for writing (data to write)
     wire [31:0] MemoryData;
     //wire [31:0] MemoryReadData;	//Data read in from memory (and merged appropriate if LWL, LWR)
     reg [31:0]	 data_read_aligned;

     //Word-aligned address for reads
     wire [31:0] MemReadAddress;
     //Not always word-aligned address for writes (SWR has issues with this)
     reg [31:0] MemWriteAddress;

     wire MemWrite;
     wire MemRead;

     wire [31:0] ALU_result;

     wire [5:0] ALU_Control;

    assign MemWrite = MemWrite1_IN;
    assign MemRead = MemRead1_IN;
    assign ALU_result = ALU_result1_IN;
    assign ALU_Control = ALU_Control1_IN;
    assign MemoryData = MemoryData1;

    assign MemReadAddress = {ALU_result[31:2],2'b00};

    assign data_address_2DM = MemWrite?MemWriteAddress:MemReadAddress;	//Reads are always aligned; writes may be unaligned

    assign MemRead_2DM = MemRead;
    assign MemWrite_2DM = MemWrite;


    reg [31:0]WriteData1;

    wire comment1;
    assign comment1 = 1;


always @(data_read_fDM) begin
    //$display("MEM Received:data_read_fDM=%x",data_read_fDM);
    data_read_aligned = MemoryData;
    //$display("Updated DRA");
    MemWriteAddress = ALU_result;
    case(ALU_Control)
        6'b101101: begin //LWL
            /* Alright, this comment chunk is mostly for my planning, so feel free
               to skip over most of it, unless it doesn't work, then please read
               it and give me pity points.

               So, LWL takes the given address and fill in the most significant
               bits up the data up until the end of the word in memory. There are
               probably some pretty clever ways to do this, but I don't care and
               will just brute force a bunch of if statements. so in other words
               if mem starts out as 0000, and reg dest start as 9999 and you lwl
               1234 into mem loc 1 you would get 9123.
            */
            data_write_size_2DM=0;
            if (ALU_result[1:0] == 2'b00) begin //You're just loading a word, son
                data_read_aligned = data_read_fDM;
            end
            if (ALU_result[1:0] == 2'b01) begin //the fun begins
                //From what I can divine from above, MemoryData holds the contents
                //of the Register that will be overwriten (???)
                data_read_aligned = {data_read_fDM[23:0], MemoryData[7:0]};
            end
            else if (ALU_result[1:0] == 2'b10) begin
                data_read_aligned = {data_read_fDM[15:0], MemoryData[15:0]};
            end
            else begin
                data_read_aligned = {data_read_fDM[7:0], MemoryData[23:0]};
            end
        end
        6'b101110: begin
            /* Oh Boy! I'm having fun! Are you having fun, cause I'm having fun! */

            data_write_size_2DM=0;
            if (ALU_result[1:0] == 2'b00) begin //Just snag that first byte
                data_read_aligned = {MemoryData[31:8], data_read_fDM[31:24]};
            end
            else if (ALU_result[1:0] == 2'b01) begin // half & half
                data_read_aligned = {MemoryData[31:16], data_read_fDM[31:16]};
            end
            else if (ALU_result[1:0] == 2'b10) begin // keep only the first bit of the original
                data_read_aligned = {MemoryData[31:24], data_read_fDM[31:8]};
            end
            else begin //You are again, just copying the word, so...
                data_read_aligned = data_read_fDM;
            end
        end
        6'b100001: begin //LB
            //Like before with sign extentions
            data_write_size_2DM=0; // I guess (?)
            if (ALU_result[1:0] == 2'b00) begin //loading first byte of the word
                data_read_aligned = {{24{data_read_fDM[31]}}, data_read_fDM[31:24]};
            end
            else if (ALU_result[1:0] == 2'b01) begin //second byte of the word
                data_read_aligned = {{24{data_read_fDM[23]}}, data_read_fDM[23:16]};
            end
            else if (ALU_result[1:0] == 2'b10) begin //third byte of the word
                data_read_aligned = {{24{data_read_fDM[15]}}, data_read_fDM[15:8]};
            end
            else begin //fourth byte of the word
                data_read_aligned = {{24{data_read_fDM[7]}}, data_read_fDM[7:0]};
            end
        end
        6'b101011: begin //LH
            data_write_size_2DM=0; // I guess (?)
            //This time it sign extends, Woo!
            if (ALU_result[1:0] == 2'b00) begin //loading first half of the word
                data_read_aligned = {{16{data_read_fDM[31]}}, data_read_fDM[31:16]};
            end
            else begin //second half of the word
                data_read_aligned = {{16{data_read_fDM[15]}}, data_read_fDM[15:0]};
            end
        end
        6'b101010: begin //LBU
            data_write_size_2DM=0; // I guess (?)
            if (ALU_result[1:0] == 2'b00) begin //loading first byte of the word
                data_read_aligned = {{24{1'b0}}, data_read_fDM[31:24]};
            end
            else if (ALU_result[1:0] == 2'b01) begin //second byte of the word
                data_read_aligned = {{24{1'b0}}, data_read_fDM[23:16]};
            end
            else if (ALU_result[1:0] == 2'b10) begin //third byte of the word
                data_read_aligned = {{24{1'b0}}, data_read_fDM[15:8]};
            end
            else begin //fourth byte of the word
                data_read_aligned = {{24{1'b0}}, data_read_fDM[7:0]};
            end
        end
        6'b101100: begin //lhu
            data_write_size_2DM=0; // I guess (?)
            if (ALU_result[1:0] == 2'b00) begin //loading first half of the word
                data_read_aligned = {{16{1'b0}}, data_read_fDM[31:16]};
            end
            else begin //second half of the word
                data_read_aligned = {{16{1'b0}}, data_read_fDM[15:0]};
            end
        end
        6'b111101, 6'b101000, 6'd0, 6'b110101: begin	//LW, LL, NOP, LWC1
            data_read_aligned = data_read_fDM;
            data_write_size_2DM=0;
        end
        6'b101111: begin	//SB
            data_write_size_2DM=1;
            //Again assuming that I must provide a whole word, not just the byte
            //So you can store to any old byte, so I must handle them all.
            if (MemWriteAddress[1:0] == 2'b00) begin //First Byte
                data_write_2DM = {MemWriteData1_IN[7:0], data_read_fDM[23:0]}; //Totally did not need a calculator to find out what 31 - 8 was, nope, not at all
            end
            else if (MemWriteAddress[1:0] == 2'b01) begin //Second Byte
                data_write_2DM = {data_read_fDM[31:24], MemWriteData1_IN[7:0], data_read_fDM[15:0]};
            end
            else if (MemWriteAddress[1:0] == 2'b10) begin //Third Byte
                data_write_2DM = {data_read_fDM[31:16], MemWriteData1_IN[7:0], data_read_fDM[7:0]};
            end
            else begin //Did you guess it? Fourth Byte
                data_write_2DM = {data_read_fDM[31:8], MemWriteData1_IN[7:0]};
            end
            // I Don't like having that fourth byte catch all else statement, but what you gonna do? <- real question, would like an answer
        end
        6'b110000: begin	//SH
            data_write_size_2DM=2;
            //So I assume I have to provide a whole word, not just the byte
            //so I am pulling the data read, and splicing in the part I want (?)
            if (MemWriteAddress[1:0] == 2'b00) begin //put at start of given word
                data_write_2DM = {MemWriteData1_IN[15:0], data_read_fDM[15:0]};
            end
            else if (MemWriteAddress[1:0] == 2'b10) begin //put at end of given word
                data_write_2DM = {data_read_fDM[31:16], MemWriteData1_IN[15:0]};
            end

            //what it it lies in the middle of a word (2'b01)? do I handle that too?
        end
        6'b110001, 6'b110110: begin	//SW/SC
            data_write_size_2DM=0;
            //Should just take the whole word
            data_write_2DM = MemWriteData1_IN;
        end
        6'b110010: begin //SWL
            //So, I think I might have done the above stores wrong... oops...
            /* Okay so lets get to this, Fill the memory from the stating location
               to the end of the word with the most significant bits.

               I would like to thank the MIPS ISA Documentation for there nice
               graphical representation of what was going on. While I understood
               it from the LWLandLWR.pdf provided, it was nice to see it again in
               a different format.
            */
            if (ALU_result[1:0] == 2'b00) begin //You are writing a word
                data_write_size_2DM=0;
                data_write_2DM = MemWriteData1_IN;
            end
            else if (ALU_result[1:0] == 2'b01) begin //everthing but the first byte gets overwriten
                data_write_size_2DM=3;
                data_write_2DM = {data_read_fDM[31:24], MemWriteData1_IN[23:0]};
            end
            else if (ALU_result[1:0] == 2'b10) begin //half and half
                data_write_size_2DM=2;
                data_write_2DM = {data_read_fDM[31:16], MemWriteData1_IN[15:0]};
            end
            else begin //only the last bit
                data_write_size_2DM=1;
                data_write_2DM = {data_read_fDM[31:8], MemWriteData1_IN[7:0]};
            end
            //TODO:SWL
            //Set MemWriteAddress, data_write_2DM and data_write_size_2DM appropriately
            //Yeah... I Did not do this correctly at all...
        end
        6'b110011: begin //SWR
            /* I would like to thank the MIPS ISA Documentation for there nice
            graphical representation of what was going on. While I understood
            it from the LWLandLWR.pdf provided, it was nice to see it again in
            a different format.
            */
            if (ALU_result[1:0] == 2'b00) begin //Just the first byte "bytes the dust" <- I am sorry, it is late
                data_write_size_2DM=1;
                data_write_2DM = {MemWriteData1_IN[7:0], data_read_fDM[23:0]};
            end
            else if (ALU_result[1:0] == 2'b01) begin //half & half
                data_write_size_2DM=2;
                data_write_2DM = {MemWriteData1_IN[15:0], data_read_fDM[15:0]};
            end
            else if (ALU_result[1:0] == 2'b10) begin //all but the first byte get overwritten
                data_write_size_2DM=3;
                data_write_2DM = {MemWriteData1_IN[23:0], data_read_fDM[7:0]};
            end
            else begin //you just stored a word
                data_write_size_2DM=0;
                data_write_2DM =  MemWriteData1_IN;
            end
           //TODO:SWR
           //Set MemWriteAddress, data_write_2DM and data_write_size_2DM appropriately
        end
        default: begin
          //If it's not a real memory istruction, do something somewhat related?
            data_read_aligned = data_read_fDM;
            data_write_size_2DM=0;
        end
    endcase
    WriteData1 = MemRead1_IN?data_read_aligned:ALU_result1_IN;
    //Since it's not set elsewhere (that's your job), we'll set a dummy value here:
    //data_write_2DM=32'hCAFEDEAD;
    data_write_2DM = data_read_aligned;
end

assign MemoryData1 = MemWriteData1_IN;

     /* verilator lint_off UNUSED */
     reg [31:0] Instr1_OUT;
     reg [31:0] Instr1_PC_OUT;
     /* verilator lint_on UNUSED */

always @(posedge CLK or negedge RESET) begin
    if(!RESET) begin
        Instr1_OUT <= 0;
        Instr1_PC_OUT <= 0;
        WriteRegister1_OUT <= 0;
        RegWrite1_OUT <= 0;
        WriteData1_OUT <= 0;
        $display("MEM:RESET");
    end else if(CLK) begin
            Instr1_OUT <= Instr1_IN;
            Instr1_PC_OUT <= Instr1_PC_IN;
            WriteRegister1_OUT <= WriteRegister1_IN;
            RegWrite1_OUT <= RegWrite1_IN;
            WriteData1_OUT <= WriteData1;
            if(comment1) begin
                $display("MEM:Instr1_OUT=%x,Instr1_PC_OUT=%x,WriteData1=%x; Write?%d to %d",Instr1_IN,Instr1_PC_IN,WriteData1, RegWrite1_IN, WriteRegister1_IN);
                $display("MEM:data_address_2DM=%x; data_write_2DM(%d)=%x(%d); data_read_fDM(%d)=%x",data_address_2DM,MemWrite_2DM,data_write_2DM,data_write_size_2DM,MemRead_2DM,data_read_fDM);
            end
    end
end

endmodule
