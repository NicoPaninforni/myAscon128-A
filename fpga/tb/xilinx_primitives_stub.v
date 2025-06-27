module USR_ACCESSE2 (
    output CFGCLK,
    output [31:0] DATA,
    output DATAVALID
);
    assign CFGCLK = 0;
    assign DATA = 32'h00000000;
    assign DATAVALID = 1'b1;
endmodule


module BUFGMUX_CTRL(input I0, input I1, input S, output O);
    assign O = I0;
endmodule

module ODDR(input C, input D1, input D2, input CE, input R, input S, output Q);
    assign Q = D1;
endmodule

module IBUFG(input I, output O);
    assign O = I;
endmodule

module BUFG(input I, output O);
    assign O = I;
endmodule
