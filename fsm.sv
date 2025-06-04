// ============================================================================
// FSM Controller for ASCON-SCA Cipher Core
// ----------------------------------------------------------------------------
// This is a Mealy-type FSM controller responsible for sequencing the ASCON
// encryption algorithm operations. Outputs depend both on the state and input
// signals, allowing faster transitions and control reactivity.
//
// Key features:
// - Manages all ASCON processing stages: initialization, absorb (AD and MSG),
//   diffusion, padding, and finalization.
// - Handles conditional paths for masked/unmasked permutation rounds.
// - Supports data-dependent control: padding, last block handling, and EOT.
//
// Author: [Nico]
// ============================================================================
module fsm #(
    parameter int d = 2,
    parameter int WORD_SIZE = 64,
    parameter int PAR = 22,
    parameter int NUMBER_BIT_MASK = ((64+PAR-1)/PAR) + 1,
    //NOTA: qua non c'era il caso con il ?
    parameter int NUMBER_BIT_NOMASK = (64 % PAR*(d+1) == 0) ? 
                                ((64 + PAR*(d+1)) / (PAR*(d+1)) - 1) :
                                ((64 + PAR*(d+1)) / (PAR*(d+1))) 

)(
    input  logic clk,
    input  logic reset_n,
    input  logic start,

    input logic key_valid,
    input logic valid_data_in,
    input logic last_block,
    input logic [$clog2(2*WORD_SIZE/8):0] valid_bytes,
    input logic EOT,

    output logic done, //se il processo è finito
    output logic ready_tag,
    output logic shift_en,
    output logic write_en,
    output logic shift_type,
    output logic last_cycle,

    output logic reg_key1_load,
    output logic reg_key2_load,

    output logic sel_mux_linear_diffusion_out_x3,
    output logic sel_mux_linear_diffusion_out_x4,
    output logic sel_init_load,  // a 1 se devo fare il load di inizializzazione
    output logic sel_masked_round, // a 1 se devo fare una permutazione mascherata
    output logic sel_padding, // a 1 se devo fare l'absorb di dati padded
    output logic extra_padding,
    output logic sel_xor_signal,
    output logic sel_absorb_data,

    output logic ciphertext_valid,
    output logic ready_for_data,

    //DEBUG:
    output logic extra_padding_ff,
    output logic [4:0]  debug_state,
    output logic [$clog2(NUMBER_BIT_MASK+1)-1:0] bit_counter, //conta il numero di blocchi di bit processati 
    output logic [3:0] round_counter, //conta i round da 0 a 12
    output logic shift_enable_sipo,
    output logic last_cycle_sipo
);

assign debug_state = current_state;

typedef enum logic [4:0] {
    IDLE, //0
    INIT_LOAD, //01
    INIT_ROUND_SHIFT, //02
    INIT_ROUND_SHIFT_LAST, //03
    INIT_ROUND_DIFFUSE, //04
    INIT_ROUND_DIFFUSE_LAST, //05
    //PADDING_AD_DATA, //06
    //PADDING_EXTRA_AD_DATA,  //07
    ABSORB_AD_DATA, //06
    PROCESS_AD_SHIFT,//07 
    PROCESS_AD_SHIFT_LAST, //08 
    PROCESS_AD_DIFFUSE, //09
    PROCESS_AD_DIFFUSE_LAST, //0A
    //PADDING_MSG_DATA, //0B
    //PADDING_EXTRA_MSG_DATA, //0C 
    ABSORB_MSG_DATA, //0B
    PROCESS_MSG_SHIFT, //0C
    PROCESS_MSG_SHIFT_LAST, //0D
    PROCESS_MSG_DIFFUSE, //0E
    PROCESS_MSG_DIFFUSE_LAST, //0F
    FINALIZATION_SHIFT, //10
    FINALIZATION_SHIFT_LAST, //11
    FINALIZATION_DIFFUSE, //12
    SQUEEZE_TAG,
    DONE
} state_t;

state_t current_state, next_state;


logic [$clog2(NUMBER_BIT_MASK+1)-1:0] number_bits;
logic [3:0] number_round;

logic last_block_process, last_block_process_ff, last_block_process_load;
logic extra_padding_load;
logic round_counter_enable, rst_counter_round;

//Rete sequenziale per aggiornamento dello stato e contatori
always_ff @(posedge clk or negedge reset_n) begin
    if (!reset_n) begin
        current_state <= IDLE;
        round_counter <= 0;
        bit_counter <= 0;
        last_block_process_ff <= 0;
        extra_padding_ff <= 0;
    end else begin
        current_state <= next_state;

        if (shift_en) begin
            if (bit_counter == number_bits) //dovrei fare -1 se non avessi stadi di pipe, ma ho due stadi di flip flop
                bit_counter <= 0;
            else
                bit_counter <= bit_counter + 1;
        end

        if (rst_counter_round == 1) begin
            round_counter <= 0;
        end else if (round_counter_enable) begin
            if (round_counter == number_round - 1) begin
                if (sel_masked_round == 0)
                    round_counter <= 4; //Le permutazioni non mascherate (sel_maskered_round = 0) richiedono 8 round (da 4 a 11)
                else
                    round_counter <= 0; //Le permutazioni mascherate (sel_maskered_round = 1) richiedono 12 round (da 0 a 11)
            end else begin
                round_counter <= round_counter + 1;
            end
        end
        if (extra_padding_load == 1) begin
            extra_padding_ff <= extra_padding;
        end
        if (last_block_process_load == 1) begin
            last_block_process_ff <= last_block_process;
        end
    end
end

// Rete combinatoria di transizione stato:
always_comb begin
    next_state = current_state; // default

    case (current_state)
        IDLE: begin
            if (start) next_state = INIT_LOAD;
        end

        INIT_LOAD: begin
            if (key_valid) next_state = INIT_ROUND_SHIFT;
        end

        INIT_ROUND_SHIFT: begin
            //Numero di shift da fare - 1: Nel caso PAR = 1  per esempio devo fare 66 shift (64 per processare tutto il dato + 2 per gli stadi di FF)
            //PAR = 1, BIT_COUNTER_MAX = 64 (poi faccio ancora uno shift nel prossimo stadio, arrivando a 66)
            localparam int BIT_COUNTER_MAX_FULL = (64 + PAR - 1) / PAR; 
            localparam [$clog2(NUMBER_BIT_MASK+1)-1:0]  BIT_COUNTER_MAX = BIT_COUNTER_MAX_FULL[$clog2(NUMBER_BIT_MASK+1)-1:0];
            if (bit_counter == BIT_COUNTER_MAX)
                next_state = INIT_ROUND_SHIFT_LAST;
        end

        INIT_ROUND_SHIFT_LAST: begin
            if (round_counter == number_round - 1) next_state = INIT_ROUND_DIFFUSE_LAST;
            else next_state = INIT_ROUND_DIFFUSE;
        end

        INIT_ROUND_DIFFUSE: begin
            next_state = INIT_ROUND_SHIFT;
        end

        INIT_ROUND_DIFFUSE_LAST: begin
            next_state = ABSORB_AD_DATA;
        end

        ABSORB_AD_DATA: begin
            if (valid_data_in || extra_padding_ff == 1) begin
                next_state = PROCESS_AD_SHIFT;
            end
        end

        PROCESS_AD_SHIFT: begin
            if (bit_counter == NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] - 1)
                next_state = PROCESS_AD_SHIFT_LAST;
        end

        PROCESS_AD_SHIFT_LAST: begin
            if ((round_counter == number_round - 1)) next_state = PROCESS_AD_DIFFUSE_LAST;
            else next_state = PROCESS_AD_DIFFUSE;
        end

        PROCESS_AD_DIFFUSE: begin
            next_state = PROCESS_AD_SHIFT;
        end

        PROCESS_AD_DIFFUSE_LAST: begin
            if (last_block_process_ff == 1 && extra_padding_ff == 0) begin   //last_block_process_ff mi dice se ho già processato l'ultimo blocco di AD
                next_state = ABSORB_MSG_DATA;
            end else begin // Se ho già processato tutto AD ed EXTRA PADDING
                next_state = ABSORB_AD_DATA;      // Ci sono ancora blocchi MSG li assorbo
            end
        end

        ABSORB_MSG_DATA: begin
            if (valid_data_in == 1) begin //se ho un dato valido
                next_state = PROCESS_MSG_SHIFT;
                if (EOT && !extra_padding) begin
                    next_state = FINALIZATION_SHIFT;
                end
            end else begin
                if (last_block_process_ff == 1 && extra_padding == 0) begin
                    next_state = FINALIZATION_SHIFT;
                end
            end
        end


        PROCESS_MSG_SHIFT: begin
            if (bit_counter == NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] - 1)
                next_state = PROCESS_MSG_SHIFT_LAST;
        end

        PROCESS_MSG_SHIFT_LAST: begin
            if (round_counter == number_round - 1)
                next_state = PROCESS_MSG_DIFFUSE_LAST;
            else next_state = PROCESS_MSG_DIFFUSE;
        end

        PROCESS_MSG_DIFFUSE: begin
            next_state = PROCESS_MSG_SHIFT;
        end

        PROCESS_MSG_DIFFUSE_LAST: begin
            next_state = ABSORB_MSG_DATA;
        end

        FINALIZATION_SHIFT: begin
            localparam int BIT_COUNTER_MAX_FULL = (64 + PAR - 1) / PAR;
            localparam [$clog2(NUMBER_BIT_MASK+1)-1:0]  BIT_COUNTER_MAX = BIT_COUNTER_MAX_FULL[$clog2(NUMBER_BIT_MASK+1)-1:0] ;
            if (bit_counter == BIT_COUNTER_MAX)
                next_state = FINALIZATION_SHIFT_LAST;
        end

        FINALIZATION_SHIFT_LAST: begin
            next_state = FINALIZATION_DIFFUSE;
        end

        FINALIZATION_DIFFUSE: begin
            if (round_counter == number_round - 1)
                next_state = SQUEEZE_TAG;
            else
                next_state = FINALIZATION_SHIFT;
        end

        SQUEEZE_TAG: begin
            next_state = DONE;
        end

        DONE: begin
            if (!start)
                next_state = IDLE;
        end

        default: next_state = IDLE;
    endcase
end

localparam int BYTE_W = 2*WORD_SIZE / 8;

// Rete combinatoria di calcolo delle uscite
always_comb begin

    ciphertext_valid = 0;
    done = 0;
    ready_for_data = 0;
    
    round_counter_enable = 0;
    shift_enable_sipo = 0; //segnale per DEBUG
    last_cycle_sipo = 0; //segnale per DEBUG 

    //segnali di controllo per la gestione della transizione degli stati:
    extra_padding = 0;
    extra_padding_load = 0;

    //segnali per il registro di stato:
    write_en = 0;
    shift_en = 0;
    shift_type = 0; //shift_type: 0 -> shifto PAR*(d+1) bits;  1 -> shifto PAR bits
    last_cycle = 0; //segnale per segnalare l'ultimo ciclo (possibile shift ridotto)

    //selettori dei MUX:
    sel_init_load = 0;
    sel_mux_linear_diffusion_out_x3 = 0;
    sel_mux_linear_diffusion_out_x4 = 0;
    sel_masked_round = 1;
    sel_padding = 0; //se ho fatto il padding, salvo l'info in un FF e al prossimo ABSORB devo leggere i dati dal registro, non direttanente dall'interfaccia
    sel_xor_signal = 0; //Mi dice se devo fare l'xor con (0) -> 0*1 oppure con (1) -> key1 e key2
    sel_absorb_data = 0; //se è a 1 mi dice se devo caricare nello state register state^(AD oppure MSG)
    
    ready_tag = 0;
    
    //Load per i registri che contengono la chiave:
    reg_key1_load = 0;
    reg_key2_load = 0;

    number_round = 12;
    number_bits = 0;
    rst_counter_round = 0;

    last_block_process = 0;
    last_block_process_load = 0;

    case (current_state)
        IDLE: begin
            // niente
        end

        INIT_LOAD: begin
                // carico IV, nonce e chiave:
                //enable dei registri per salvare la chiave
                reg_key1_load = 1;  
                reg_key2_load = 1;  

                sel_init_load = 1; //Mi dice che devo caricare in state_reg i dati di inizializzazione
                write_en = 1;  //abilito lo state_reg a fare il parallel load
        end

        INIT_ROUND_SHIFT: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ;  //salvo il numero di blocchi di bit da processare

            shift_en = 1; //abilito lo shift di state_reg
            shift_type = 1; // shift di PAR bit
            shift_enable_sipo = 1;  //abilito gli shift per i registri di DEBUG
            if (bit_counter == (NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] - 2)) begin
                last_cycle_sipo = 1; //Se ho effettuato il numero totale di shift, ossia uguali ai blocchi di bit sono a l'ultimo ciclo per i sipo debug
                                     //Nota: per completare gli shift dello state_reg mi mancano 2 shift (2 stadi di FF)
            end
        end

        INIT_ROUND_SHIFT_LAST: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ;
            last_cycle = 1;  //sono all'ultimo ciclo di shift
            shift_en = 1;  
            shift_enable_sipo = 1;  //abilito lo shift del sipo
            shift_type = 1; // shift di PAR bit
        end

        INIT_ROUND_DIFFUSE: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ;
            write_en = 1;
            round_counter_enable = 1;  //ho eseguito un round di permutazione
        end

        INIT_ROUND_DIFFUSE_LAST: begin
            round_counter_enable = 1; //ho eseguito un altro round di permutazione
            //MUX per selezionare S ^ (0*|Key1|Key2):
            sel_mux_linear_diffusion_out_x3 = 1; 
            sel_mux_linear_diffusion_out_x4 = 1;
            
            sel_xor_signal = 1; //selezione xor fra x3 e key2
            write_en = 1; //abilito il parallel load in state_reg
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0];
            sel_masked_round = 0;
        end

        ABSORB_AD_DATA: begin
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0]; // numero shift per processare tutti i bit
            if (valid_data_in == 0 && extra_padding_ff == 0 ) begin
                ready_for_data = 1;
            end else if (extra_padding_ff == 1) begin
                extra_padding_load = 1; //Metto a 0 il flag ho fatto il padding extra
                sel_padding = 1;
                sel_absorb_data = 1;
                write_en = 1;
            end else begin //solo se il dato è valido
                if (last_block == 1) begin
                    last_block_process = 1;
                    last_block_process_load  = 1;
                    if (int'(valid_bytes) < BYTE_W) begin
                        sel_padding = 1;
                    end else begin
                        extra_padding_load = 1;
                        extra_padding = 1;
                    end
                end
                write_en = 1;
                sel_absorb_data = 1;
            end
            sel_masked_round = 0;
        end

        PROCESS_AD_SHIFT: begin
            sel_masked_round = 0;
            shift_enable_sipo = 1;
            number_bits = NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0]; // numero shift per processare tutti i bit
            shift_en = 1; //ad ogni ciclo processo PAR*(d+1) bit (shift_type = 0)
            if (bit_counter == (NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] - 1)) begin
                last_cycle_sipo = 1; //se sono all'ultimo ciclo di shift
            end
        end

        PROCESS_AD_SHIFT_LAST: begin
            sel_masked_round = 0;
            shift_enable_sipo = 1;
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            last_cycle = 1;
            shift_en = 1; //ad ogni ciclo processo PAR*(d+1) bit (shift_type = 0)
        end

        PROCESS_AD_DIFFUSE: begin
            sel_masked_round = 0;
            write_en = 1;
            round_counter_enable = 1;
        end

        PROCESS_AD_DIFFUSE_LAST: begin
            if (last_block == 1) begin //Modifica a questa linea: aggiunta && last_block
                if (extra_padding_ff == 0 && last_block_process_ff == 1) begin
                    sel_mux_linear_diffusion_out_x4 = 1; //carico x4 ^ 0*1
                    last_block_process_load = 1;
                end
            end
            write_en = 1;
            round_counter_enable = 1;
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            sel_masked_round = 0;
        end

        ABSORB_MSG_DATA: begin
            sel_masked_round = 0;
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            sel_absorb_data = 1;
            if (valid_data_in == 0 && extra_padding_ff == 0) begin
                ready_for_data = 1;
            end else if (extra_padding_ff == 1) begin 
                ciphertext_valid = 1;
                write_en = 1;
                sel_absorb_data = 1;

                extra_padding_load = 1; //Metto a 0 il flag ho fatto il padding extra
                sel_padding = 1;
                sel_init_load = 1;
                rst_counter_round = 1; //resetto il contatore dei round

            end else begin
                ciphertext_valid = 1;
                write_en = 1;
                sel_absorb_data = 1;
                last_block_process_load  = 1; //0 se non è l'ultimo blocco 1 altrimenti

                if (EOT == 1) begin
                    last_block_process = 1;
                    if (int'(valid_bytes) < BYTE_W) begin
                        sel_padding = 1;
                        sel_init_load = 1;
                        rst_counter_round = 1; //resetto il contatore dei round
                    end else begin
                        extra_padding_load = 1;
                        extra_padding = 1;
                    end
                end
            end
        end

        PROCESS_MSG_SHIFT: begin
            sel_masked_round = 0;
            number_bits = NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            shift_en = 1; //ad ogni ciclo processo PAR*(d+1) bit (shift_type = 0)
            shift_enable_sipo = 1;
            if (bit_counter == (NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] -1)) begin
                last_cycle_sipo = 1; //se sono all'ultimo ciclo di shift
            end
        end

        PROCESS_MSG_SHIFT_LAST: begin
            sel_masked_round = 0;
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            last_cycle = 1;
            shift_enable_sipo = 1;
            shift_en = 1; //ad ogni ciclo processo PAR*(d+1) bit (shift_type = 0)
        end

        PROCESS_MSG_DIFFUSE: begin
            sel_masked_round = 0;
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            write_en = 1;
            round_counter_enable = 1;
        end

        PROCESS_MSG_DIFFUSE_LAST: begin
            write_en = 1;
            round_counter_enable = 1;
            if (extra_padding_ff == 1) begin
                sel_masked_round = 1; //devo resettare round counter a 0
            end else begin
                sel_masked_round = 0; //devo resettare round counter a 6
            end
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0]; // numero shift per processare tutti i bit
        end

        FINALIZATION_SHIFT: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0];
            shift_en = 1;
            shift_type = 1; // shift 1
            shift_enable_sipo = 1;
            if (bit_counter == (NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] - 2)) begin
                last_cycle_sipo = 1; //se sono all'ultimo ciclo di shift
            end
        end

        FINALIZATION_SHIFT_LAST: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0];
            last_cycle = 1;
            shift_en = 1;
            shift_type = 1; // shift 1
            shift_enable_sipo = 1;

            sel_mux_linear_diffusion_out_x3 = 1;
            sel_mux_linear_diffusion_out_x4 = 1;
        end

        FINALIZATION_DIFFUSE: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0];
            //if (round_counter == number_round - 1) begin
            //    xor_signal = reg_key2_out;
            //    sel_mux_linear_diffusion_out_x4 = 1;
            //    sel_mux_linear_diffusion_out_x3 = 1;
            //end
            write_en = 1;
            round_counter_enable = 1;
            if (round_counter == number_round - 1)
                ready_tag = 1;
        end

        SQUEEZE_TAG: begin
            
        end

        DONE: begin
            done = 1;
        end

        default: begin
            // niente
        end
    endcase
end
endmodule
