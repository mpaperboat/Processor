`timescale 1ns/1ps
module InstMem(
	input [31:0]address,
	output reg[31:0]readData
	);
	reg[31:0]instFile[0:127];
	initial 
	begin
		$readmemb("./inst_mem.txt",instFile,8'h0);
	end
	always@(address)
	begin
			readData=instFile[address>>2];
	end
endmodule