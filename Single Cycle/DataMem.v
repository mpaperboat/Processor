`timescale 1ns/1ps
module DataMem(
	input clock,
	input [31:0]address,
	input [31:0]writeData,
	input memWrite,
	input memRead,
	output reg[31:0]readData
	);
	reg[31:0]memFile[0:127];
	initial
	begin
		$readmemh("./data_mem.txt",memFile,10'h0);
	end
	always@(address or memRead)
	begin
		if(memRead==1)
		begin
			readData=memFile[address>>2];
		end
	end
	always@(negedge clock)
	begin
		if(memWrite==1)
		begin
			memFile[address>>2]=writeData;
		end
	end
endmodule