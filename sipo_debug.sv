module sipo_debug #(
    parameter int WORD_SIZE = 64,
    parameter int PAR = 7,
    parameter int d = 2,
    parameter int SHIFT_PAR = PAR,
    parameter int SHIFT_PAR_D_PLUS_1 = (d+1)*PAR,
    parameter int SHIFT_PAR_LAST = (64 % SHIFT_PAR == 0) ? SHIFT_PAR : (64 % SHIFT_PAR),
    parameter int SHIFT_PAR_D_PLUS_1_LAST = (64 % SHIFT_PAR_D_PLUS_1 == 0) ? SHIFT_PAR_D_PLUS_1 : (64 % SHIFT_PAR_D_PLUS_1)
)(
    input  logic clk,
    input  logic reset_n,
    input  logic shift_en,
    input  logic shift_type,     // 1 = shift PAR, 0 = shift d+1
    input  logic last_cycle,     // indica se è l’ultimo shift da fare

    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [SHIFT_PAR_D_PLUS_1-1:0] in_shifted_dplus1,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic [SHIFT_PAR-1:0]         in_shifted_1bit,
    output logic [WORD_SIZE-1:0] data_out
);

    logic [WORD_SIZE-1:0] state, next_state;

    // === Logica combinatoria per next_state
    generate 
        if (SHIFT_PAR_D_PLUS_1_LAST < WORD_SIZE) begin : gen_case1
            always_comb begin
                next_state = state;

                if (shift_en) begin
                    if (shift_type) begin
                        if (last_cycle)
                            next_state = {in_shifted_1bit[SHIFT_PAR_LAST-1:0], state[WORD_SIZE-1:SHIFT_PAR_LAST]};
                        else
                            next_state = {in_shifted_1bit, state[WORD_SIZE-1:SHIFT_PAR]};
                    end else begin
                        if (last_cycle)
                            next_state = {in_shifted_dplus1[SHIFT_PAR_D_PLUS_1_LAST-1:0], state[WORD_SIZE-1:SHIFT_PAR_D_PLUS_1_LAST]};
                        else
                            next_state = {in_shifted_dplus1, state[WORD_SIZE-1:SHIFT_PAR_D_PLUS_1]};
                    end
                end
            end
        end
        else begin : gen_case2
            always_comb begin
                next_state = state;

                if (shift_en) begin
                    if (shift_type) begin
                        if (last_cycle)
                            next_state = {in_shifted_1bit[SHIFT_PAR_LAST-1:0], state[WORD_SIZE-1:SHIFT_PAR_LAST]};
                        else
                            next_state = {in_shifted_1bit, state[WORD_SIZE-1:SHIFT_PAR]};
                    end else begin
                        next_state = in_shifted_dplus1[WORD_SIZE-1:0];
                    end
                end
            end
        end
    endgenerate
    // === Blocco sequenziale
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            state <= '0;
        end else begin
            if (shift_en) begin
                state <= next_state;
            end
        end
    end

    assign data_out = state;
endmodule
