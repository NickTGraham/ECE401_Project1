// DESCRIPTION: Verilator: Verilog Test module
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2008 by Wilson Snyder.

module t (/*AUTOARG*/
   // Outputs
   state,
   // Inputs
   clk
   );
   input clk;

   // Gave "Internal Error: V3Broken.cpp:: Broken link in node"
   output [1:0] state;
   reg [1:0] 	state = 2'b11;
   always @ (posedge clk) begin
      state <= state;
   end

   initial begin
      $write("*-* All Finished *-*\n");
      $finish;
   end

endmodule
