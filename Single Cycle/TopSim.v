`timescale 1ns / 1ps
module TopSim;
	reg clock;
	reg reset;
	Top uut (
		.clock(clock), 
		.reset(reset)
	);
	initial begin
		clock=0;
		reset=1;
		#6;
		reset = 0;
	end
   always
	#2 clock=!clock;
endmodule

