module state_register 
#(
    parameter int WORDS = 5,
    parameter int PAR = 1,
    parameter int d = 2,
    parameter int WORD_SIZE = 64,
    parameter int SHIFT_PAR = PAR,
    parameter int SHIFT_PAR_D_PLUS_1 = (((d+1)*PAR) > 64) ? 64 : ((d+1)*PAR),
    parameter int SHIFT_PAR_LAST = (64 % SHIFT_PAR == 0) ? SHIFT_PAR : (64 % SHIFT_PAR),
    parameter int SHIFT_PAR_D_PLUS_1_LAST = (64 % SHIFT_PAR_D_PLUS_1 == 0) ? SHIFT_PAR_D_PLUS_1 : (64 % SHIFT_PAR_D_PLUS_1)

)(
    input  logic clk,
    input  logic write_en,
    input  logic shift_en,
    input  logic shift_type, // 1 = shift 1, 0 = shift d+1
    input  logic last_cycle, 

    input  logic [WORDS*WORD_SIZE-1:0] data_in,
    input  logic [WORDS*SHIFT_PAR_D_PLUS_1-1:0] in_shifted_dplus1,
    input  logic [WORDS*SHIFT_PAR-1:0]          in_shifted_1bit,
    
    output logic [WORDS*SHIFT_PAR_D_PLUS_1-1:0] out_shifted_dplus1,
    output logic [WORDS*WORD_SIZE-1:0] data_out
);

    logic [WORD_SIZE-1:0] state [0:WORDS-1];
    logic [WORD_SIZE-1:0] next_state [0:WORDS-1];

    generate 
    if (SHIFT_PAR_D_PLUS_1_LAST < WORD_SIZE) begin : gen_case1
        always_comb begin
            for (int i = 0; i < WORDS; i++) begin
                next_state[i] = state[i]; // Default

                if (shift_en) begin
                    if (shift_type) begin
                        if (last_cycle) begin
                            // Ultimo ciclo con PAR_LAST
                            next_state[i] = {in_shifted_1bit[i*SHIFT_PAR +: SHIFT_PAR_LAST], state[i][WORD_SIZE-1:SHIFT_PAR_LAST]};
                        end else begin
                            // Cicli normali
                            next_state[i] = {in_shifted_1bit[i*SHIFT_PAR +: SHIFT_PAR], state[i][WORD_SIZE-1:SHIFT_PAR]};
                        end
                    end else begin
                        if (last_cycle) begin
                            next_state[i] = {in_shifted_dplus1[i*SHIFT_PAR_D_PLUS_1 +: SHIFT_PAR_D_PLUS_1_LAST], state[i][WORD_SIZE-1:SHIFT_PAR_D_PLUS_1_LAST]};
                        end else begin
                            next_state[i] = {in_shifted_dplus1[i*SHIFT_PAR_D_PLUS_1 +: SHIFT_PAR_D_PLUS_1], state[i][WORD_SIZE-1:SHIFT_PAR_D_PLUS_1]};
                        end
                    end
                end else if (write_en) begin
                    next_state[i] = data_in[i*WORD_SIZE +: WORD_SIZE];
                end
            end
        end

    end else begin : gen_case2
        always_comb begin
            for (int i = 0; i < WORDS; i++) begin
                next_state[i] = state[i]; // Default

                if (shift_en) begin
                    if (shift_type) begin
                        if (last_cycle) begin
                            // Ultimo ciclo con PAR_LAST
                            next_state[i] = {in_shifted_1bit[i*SHIFT_PAR +: SHIFT_PAR_LAST], state[i][WORD_SIZE-1:SHIFT_PAR_LAST]};
                        end else begin
                            // Cicli normali
                            next_state[i] = {in_shifted_1bit[i*SHIFT_PAR +: SHIFT_PAR], state[i][WORD_SIZE-1:SHIFT_PAR]};
                        end
                    end else begin
                        // Ultimo ciclo con PAR_LAST
                        next_state[i] = in_shifted_dplus1[i*SHIFT_PAR_D_PLUS_1 +: WORD_SIZE];
                    end
                end else if (write_en) begin
                    next_state[i] = data_in[i*WORD_SIZE +: WORD_SIZE];
                end
            end
        end
    end
    endgenerate

    // === Blocco sequenziale
    always_ff @(posedge clk) begin
        for (int i = 0; i < WORDS; i++) begin
            state[i] <= next_state[i];
        end
    end

    // === Output combinatorio
    generate
    if (SHIFT_PAR_D_PLUS_1_LAST < WORD_SIZE) begin : gen_caseNoPArMAx
        always_comb begin
            for (int i = 0; i < WORDS; i++) begin
                out_shifted_dplus1[i*SHIFT_PAR_D_PLUS_1 +: SHIFT_PAR_D_PLUS_1] =
                state[i][SHIFT_PAR_D_PLUS_1-1:0];
                data_out[i*WORD_SIZE +: WORD_SIZE] = state[i];
            end
        end
    end
    else begin : gen_caseNoPArMAx
        always_comb begin
            for (int i = 0; i < WORDS; i++) begin
                out_shifted_dplus1[i*WORD_SIZE +: WORD_SIZE] =
                state[i][WORD_SIZE-1:0];
                data_out[i*WORD_SIZE +: WORD_SIZE] = state[i];
            end
        end
    end
    endgenerate

endmodule
