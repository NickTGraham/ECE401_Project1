`include "config.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    16:35:30 10/20/2013
// Design Name:
// Module Name:    NextInstructionCalculator
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
//
//////////////////////////////////////////////////////////////////////////////////
module NextInstructionCalculator(
    /* PC of the current instruction + 4*/
    input [31:0] Instr_PC_Plus4,
    /* The bits of the instruction (needed to extract the jump destination)*/
    input [31:0] Instruction,
    /* Whether this instruction is a jump */
    input Jump,
    /* Whether this is a jump register instruction */
    input JumpRegister,
    /* If this is a jump register instruction, the value of the register (jump destination)*/
    input [31:0] RegisterValue,
    /* Where we need to jump to */
    output [31:0] NextInstructionAddress,
    /* The register for the jr/jalr (used for debugging Jump Register) */
     input [4:0] Register
    );

    /* A version of the immediate suitable for feeding to 32bit addition*/
    wire [31:0] signExtended_shifted_immediate;
    /* Where the jump would go (if this were a jump) */
    wire [31:0] jumpDestination_immediate;
    /* Where the branch would go (if this were a branch) */
    wire [31:0] branchDestination_immediate;


    /* Take lower 16 bits of instruction shift right 2 bits, then sign extend 14 bits */
    assign signExtended_shifted_immediate = {{14{Instruction[15]}},Instruction[15:0],2'b00};

     /* This one is actually correct. */
    assign jumpDestination_immediate = {Instr_PC_Plus4[31:28],Instruction[25:0],2'b00};

    /* Branch Destination is immediate + PC+4 */
    assign branchDestination_immediate = signExtended_shifted_immediate + Instr_PC_Plus4;

    /* This is wrong; the assignments are here to avoid "Signal is not used" compile warnings. */
    //assign NextInstructionAddress = signExtended_shifted_immediate+jumpDestination_immediate+branchDestination_immediate;

always @(Jump or JumpRegister or RegisterValue or Instr_PC_Plus4 or Instruction) begin
    if(Jump) begin
       /* Jump Destination is calculated above, this just sets it */
       NextInstructionAddress = jumpDestination_immediate;
    end
    else if(JumpRegister) begin
        /* Jumping to register value, assigned here */
        NextInstructionAddress = RegisterValue;
    end
    else begin
        NextInstructionAddress = branchDestination_immediate;
    end
    $display("Jump Analysis:jr=%d[%d]=%x; jd_imm=%x; branchd=%x => %x",JumpRegister, Register, RegisterValue, jumpDestination_immediate, branchDestination_immediate, NextInstructionAddress);
end


endmodule
