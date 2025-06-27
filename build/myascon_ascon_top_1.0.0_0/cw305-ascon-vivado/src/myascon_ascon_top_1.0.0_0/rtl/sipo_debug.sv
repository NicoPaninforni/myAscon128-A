// ============================================================================
// Module: sipo_debug
// Descrizione:
//   Questo modulo implementa uno shift register serial-in/parallel-out (SIPO)
//   utilizzato esclusivamente a scopo di **debug** per tracciare e registrare
//   i risultati delle costanti di round nel contesto di implementazioni
//   mascherate (ad esempio ASCON).
//
//   Il modulo può operare in due modalità:
//     - Shift di PAR bit (non mascherato),
//     - Shift di (d+1)*PAR bit (mascherato).
//
//   L'accumulo dei bit avviene all'interno del registro `state`, che viene
//   aggiornato a ogni ciclo abilitato da `shift_en`, con supporto per shift
//   finali parziali tramite `last_cycle`.
//
//   Parametri:
//     - WORD_SIZE: dimensione del registro di accumulo,
//     - PAR: grado di parallelismo,
//     - d: ordine del mascheramento.
//
//   ⚠️ **Nota**: questo modulo non è utilizzato nel funzionamento critico del
//   circuito, ma solo per ispezionare valori interni a fini di verifica e debug.
// ============================================================================
import ascon_params::WORD_SIZE;
import ascon_params::PAR;
import ascon_params::d;
import ascon_params::SHIFT_PAR;
import ascon_params::SHIFT_PAR_D_PLUS_1;
import ascon_params::SHIFT_PAR_LAST;
import ascon_params::SHIFT_PAR_D_PLUS_1_LAST;

module sipo_debug (
    input  logic clk,
    input  logic reset_n,
    input  logic shift_en,
    input  logic shift_type,     // 1 = shift PAR, 0 = shift d+1
    input  logic last_cycle,     // indica se è l’ultimo shift da fare

    /* verilator lint_off UNUSED */
    input  logic [SHIFT_PAR_D_PLUS_1-1:0] in_shifted_dplus1,
    /* verilator lint_on UNUSED */
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
