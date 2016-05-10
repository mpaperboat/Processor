`timescale 1ns / 1ps
module Add(
	input[31:0]in0,
	input[31:0]in1,
	output reg[31:0]out
   );
	always@(in0 or in1)
		out=in1+in0;
endmodule
