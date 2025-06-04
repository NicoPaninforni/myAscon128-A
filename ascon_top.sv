/*
Il modulo ascon_top implementa l’intero datapath di un cifratore ASCON resistente ad attacchi side-channel, con mascheramento a d+1 condivisioni (per d=2) e supporto al parallelismo bit-level su PAR bit. La progettazione segue la logica dell’algoritmo ASCON-SCA, ma ne estende la configurabilità e il controllo hardware.

Componenti principali e funzionamento:
State Register (320 bit)
Il registro di stato gestisce l’evoluzione della cifratura. 
Supporta operazioni di shift configurabili (shift_type) e aggiornamento parallelo/multiplo (shift_en, write_en), 
sia per l’assorbimento dei dati sia per le permutazioni.

FSM di controllo (Mealy)
La macchina a stati controlla la sequenza operativa: inizializzazione, assorbimento del messaggio, padding, round permutativi, e generazione dell’output. Gestisce segnali di sincronizzazione e selezione (sel_*, reg_key*_load, ecc.).

Mascheramento e S-Box DOM
I dati vengono mascherati in d+1 domini indipendenti tramite un modulo shareCreator e trattati tramite una S-box resistiva agli attacchi di potenza (DOM – Domain-Oriented Masking). L’input alla S-box è trasformato da un primo layer affine; l’output subisce un secondo layer affine e viene poi ricombinato tramite uno XOR tree bit-wise.

Gestione round e costante RC
Ogni round applica una costante (round_constant) XORata a x2, con padding condizionato su tutti i registri se (d+1)*PAR > 64. 
L'interfaccia è progettata per adattarsi dinamicamente alle dimensioni di parallelismo.

Linear Diffusion Layer
Implementato secondo lo standard ASCON (rotazioni a, b), applica diffusione su ciascun word da 64 bit. È anche usato per la generazione del tag finale.

Padding e reversibilità dei dati
In fase di assorbimento, i messaggi sono sottoposti a padding standard (con 0x01) e sono gestiti byte-wise.
I dati sono invertiti nei byte prima di essere assorbiti, come da specifica ASCON.

Output e Tag
Il ciphertext è ottenuto da x0 e x1, mentre tag1 e tag2 sono derivati da x3 e x4 dopo diffusione lineare e XOR con le chiavi, secondo lo schema AEAD.

Debug e tracciamento
Il modulo espone numerosi segnali di debug (debug_state, roundcounter, bitcounter, contenuti dello stato, ecc.) per verifiche e simulazione,
particolarmente utili in fase di test SCA.

Il modulo è progettato per garantire robustezza contro attacchi di tipo DPA e flessibilità hardware,
risultando adatto a implementazioni ASIC o FPGA dove la sicurezza fisica è cruciale. (DPA) è critica.
*/
module ascon_top #(
    parameter int d = 10,
    parameter int WORD_SIZE = 64,
    parameter int COL_SIZE = 5,
    parameter int STATE_WIDTH = 320,
    parameter int PAR = 6,

    parameter int SHIFT_PAR_D_PLUS_1 = (((d+1)*PAR) > 64) ? 64 : ((d+1)*PAR),
    parameter int NUMBER_BIT_MASK = ((64+PAR-1)/PAR) + 1
)(
    input  logic clk,
    input  logic reset_n,
    input  logic start,

    input  logic [WORD_SIZE-1:0] key1,
    input  logic [WORD_SIZE-1:0] key2,
    input  logic key_valid, //se la chiave è valida 

    //in hardware ascon-sca c'è anche key_ready e key_update

    input  logic [WORD_SIZE-1:0] nonce1,
    input  logic [WORD_SIZE-1:0] nonce2,
    input  logic [WORD_SIZE-1:0] initialVector,

    input  logic [2*WORD_SIZE-1:0] data_in, //input del messaggio
    input  logic valid_data_in, //se il messaggio in input è valido
    input logic last_block,
    input logic [$clog2(2*WORD_SIZE/8):0] valid_bytes,
    input  logic EOT, //fine del messaggio in input
    //In Hardware ascon-sca c'è anche bdi_pad_loc e bdi_valid_bytes per gestire il padding
    input  logic [d*COL_SIZE*PAR-1:0] random_masks, //per la creazione delle shares poi vedremo bene come crearle
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [(d+1)*d/2-1:0] random_masks_sbox, //per la s-box
    /* verilator lint_on UNUSEDSIGNAL */
    output logic ciphertext_valid, //se il messaggio in output è valido
    output logic [2*WORD_SIZE-1:0] ciphertext,
    output logic done, //se il processo è finito
    output logic ready_tag,
    output logic [WORD_SIZE-1:0] tag1,
    output logic [WORD_SIZE-1:0] tag2,
    output logic ready_for_data,

    //DEBUG SIGNAL:
    output logic debug_extra_padding_ff,
    output logic [$clog2(NUMBER_BIT_MASK+1)-1:0] debug_bitcounter,
    output logic [3:0] debug_roundcounter,
    output logic [4:0] debug_state,
    output logic [63:0] debug_state_0,
    output logic [63:0] debug_state_1,
    output logic [63:0] debug_state_2,
    output logic [63:0] debug_state_3,
    output logic [63:0] debug_state_4,
    output logic [63:0] debug_round_state_0,
    output logic [63:0] debug_round_state_1,
    output logic [63:0] debug_round_state_2,
    output logic [63:0] debug_round_state_3,
    output logic [63:0] debug_round_state_4,
    output logic [63:0] debug_linear_diffusion_state3,
    output logic [63:0] debug_linear_diffusion_state4
);
    //Associazione segnali di debug:
    assign debug_bitcounter = bit_counter;
    assign debug_state_0 = state_reg_out[0*64 +: 64];
    assign debug_state_1 = state_reg_out[1*64 +: 64];
    assign debug_state_2 = state_reg_out[2*64 +: 64];
    assign debug_state_3 = state_reg_out[3*64 +: 64];
    assign debug_state_4 = state_reg_out[4*64 +: 64];
    assign debug_roundcounter = round_counter;
    assign debug_round_state_0 = round_x0_debug;
    assign debug_round_state_1 = round_x1_debug;
    assign debug_round_state_2 = round_x2_debug;
    assign debug_round_state_3 = round_x3_debug;
    assign debug_round_state_4 = round_x4_debug;
    assign debug_linear_diffusion_state3 = linear_diffusion_debug[3];
    assign debug_linear_diffusion_state4 = linear_diffusion_debug[4]; 

    //segnali per fsm:
    logic shift_en, shift_type, write_en;
    logic last_cycle;
    logic reg_key1_load, reg_key2_load;
    logic sel_mux_linear_diffusion_out_x3, sel_mux_linear_diffusion_out_x4;
    logic sel_init_load, sel_masked_round, sel_padding, sel_xor_signal, sel_absorb_data;
    /* verilator lint_off UNUSEDSIGNAL */
    logic extra_padding;
    /* verilator lint_on UNUSEDSIGNAL */
    logic shift_enable_sipo, last_cycle_sipo;
    logic [3:0] round_counter;
    logic [$clog2(NUMBER_BIT_MASK+1)-1:0] bit_counter;
    
    //Istanzio fsm:
    fsm #(
        .PAR(PAR),
        .d(d),
        .WORD_SIZE(WORD_SIZE)
    ) mealy_fsm (
        //Input:
        .clk(clk),
        .reset_n(reset_n),
        .start(start),

        .key_valid(key_valid),
        .valid_data_in(valid_data_in),
        .last_block(last_block),
        .valid_bytes(valid_bytes),
        .EOT(EOT),

        //Output dell'interfaccia:
        .done(done),
        .ready_tag(ready_tag),
        .ready_for_data(ready_for_data),
        .ciphertext_valid(ciphertext_valid),

        //Output esclusivi della fsm:
        .shift_en(shift_en),
        .write_en(write_en),
        .shift_type(shift_type),
        .last_cycle(last_cycle),
        .reg_key1_load(reg_key1_load),
        .reg_key2_load(reg_key2_load),

        .extra_padding(extra_padding),
        .sel_mux_linear_diffusion_out_x3(sel_mux_linear_diffusion_out_x3),
        .sel_mux_linear_diffusion_out_x4(sel_mux_linear_diffusion_out_x4),
        .sel_init_load(sel_init_load),
        .sel_masked_round(sel_masked_round),
        .sel_padding(sel_padding),
        .sel_xor_signal(sel_xor_signal),
        .sel_absorb_data(sel_absorb_data),

        //DEBUG SIGNAL:
        .extra_padding_ff(debug_extra_padding_ff),
        .debug_state(debug_state),
        .round_counter(round_counter),
        .bit_counter(bit_counter),
        .shift_enable_sipo(shift_enable_sipo),    
        .last_cycle_sipo(last_cycle_sipo)
    );
    
    //Segnali per lo state_register:
    logic [STATE_WIDTH-1:0] state_reg_out; //uscita del registro di stato
    logic [STATE_WIDTH-1:0] state_reg_in; //input del registro di stato
    logic [SHIFT_PAR_D_PLUS_1*COL_SIZE-1:0] state_reg_out_shiftdplus1;  //uscita shift = parallelismo*(d+1)
    logic [SHIFT_PAR_D_PLUS_1*COL_SIZE-1:0] state_reg_in_shiftdplus1;
    logic [PAR*COL_SIZE-1:0] state_reg_in_shift1;

    state_register #(
        .WORDS(COL_SIZE),
        .PAR(PAR),
        .d(d),
        .WORD_SIZE(WORD_SIZE)
    ) state_reg (
        .clk(clk),
        .write_en(write_en),
        .shift_en(shift_en),
        .shift_type(shift_type),
        .last_cycle(last_cycle),
        .data_in(state_reg_in),
        .in_shifted_dplus1(state_reg_in_shiftdplus1),
        .in_shifted_1bit(state_reg_in_shift1),
        .out_shifted_dplus1(state_reg_out_shiftdplus1),
        .data_out(state_reg_out)
    );

    //Register per la chiave (key1):
    logic [WORD_SIZE-1:0] reg_key1_out;

    register #(
        .WIDTH(WORD_SIZE)
    ) key1_reg (
        .clk(clk),
        .reset_n(reset_n),
        .load(reg_key1_load),
        .data_in(key1),
        .data_out(reg_key1_out)
    );

    //Register per la chiave (key2):
    logic [WORD_SIZE-1:0] reg_key2_out;
    register #(
        .WIDTH(WORD_SIZE)
    ) key2_reg (
        .clk(clk),
        .reset_n(reset_n),
        .load(reg_key2_load),
        .data_in(key2),
        .data_out(reg_key2_out)
    );

/* verilator lint_off UNUSEDSIGNAL */
    logic [WORD_SIZE-1:0] round_x0_debug, round_x1_debug, round_x2_debug, round_x3_debug, round_x4_debug;
/* verilator lint_on UNUSEDSIGNAL */

    //5 shift register d'uscita per leggere i dati in maniera comoda (solo per DEBUG):
    sipo_debug #(
        .WORD_SIZE(WORD_SIZE),
        .d(d),
        .PAR(PAR)
    ) sipo_reg_x0_debug (
        .clk(clk),
        .reset_n(reset_n),
        .shift_en(shift_enable_sipo),
        .in_shifted_dplus1(mux_1st_x0),
        .in_shifted_1bit(mux_1st_x0[0+:PAR]),
        .shift_type(shift_type),
        .last_cycle(last_cycle_sipo),
        .data_out(round_x0_debug)
    );

    sipo_debug #(
        .WORD_SIZE(WORD_SIZE),
        .d(d),
        .PAR(PAR)
    ) sipo_reg_x1_debug (
        .clk(clk),
        .reset_n(reset_n),
        .shift_en(shift_enable_sipo),
        .in_shifted_dplus1(mux_1st_x1),
        .in_shifted_1bit(mux_1st_x1[0+:PAR]),
        .last_cycle(last_cycle_sipo),
        .shift_type(shift_type),
        .data_out(round_x1_debug)
    );
    
    sipo_debug #(
        .WORD_SIZE(WORD_SIZE),
        .d(d),
        .PAR(PAR)
    ) sipo_reg_x2_debug (
        .clk(clk),
        .reset_n(reset_n),
        .shift_en(shift_enable_sipo),
        .in_shifted_dplus1(mux_1st_x2),
        .in_shifted_1bit(mux_1st_x2[0+:PAR]),
        .last_cycle(last_cycle_sipo),
        .shift_type(shift_type),
        .data_out(round_x2_debug)
    );

    sipo_debug #(
        .WORD_SIZE(WORD_SIZE),
        .d(d),
        .PAR(PAR)
    ) sipo_reg_x3_debug (
        .clk(clk),
        .reset_n(reset_n),
        .shift_en(shift_enable_sipo),
        .in_shifted_dplus1(mux_1st_x3),
        .in_shifted_1bit(mux_1st_x3[0+:PAR]),
        .last_cycle(last_cycle_sipo),
        .shift_type(shift_type),
        .data_out(round_x3_debug)
    );

    sipo_debug #(
        .WORD_SIZE(WORD_SIZE),
        .d(d),
        .PAR(PAR)
    ) sipo_reg_x4_debug (
        .clk(clk),
        .reset_n(reset_n),
        .shift_en(shift_enable_sipo),
        .in_shifted_dplus1(mux_1st_x4),
        .in_shifted_1bit(mux_1st_x4[0+:PAR]),
        .last_cycle(last_cycle_sipo),
        .shift_type(shift_type),
        .data_out(round_x4_debug)
    );

    // Input Network : divido i segnali nelle 5 componenti: x0,x1,x2,x3,x4
    // state_reg_out_xi è un array di PAR*(d+1) bit
    logic [SHIFT_PAR_D_PLUS_1-1:0] state_reg_out_x0; //uscita shift = parallelismo
    logic [SHIFT_PAR_D_PLUS_1-1:0] state_reg_out_x1; //uscita shift = parallelismo
    logic [SHIFT_PAR_D_PLUS_1-1:0] state_reg_out_x2; //uscita shift = parallelismo
    logic [SHIFT_PAR_D_PLUS_1-1:0] state_reg_out_x3; //uscita shift = parallelismo
    logic [SHIFT_PAR_D_PLUS_1-1:0] state_reg_out_x4; //uscita shift = parallelismo

    assign state_reg_out_x0 = state_reg_out_shiftdplus1[0+:SHIFT_PAR_D_PLUS_1];
    assign state_reg_out_x1 = state_reg_out_shiftdplus1[SHIFT_PAR_D_PLUS_1+:SHIFT_PAR_D_PLUS_1];
    assign state_reg_out_x2 = state_reg_out_shiftdplus1[2*SHIFT_PAR_D_PLUS_1+:SHIFT_PAR_D_PLUS_1];
    assign state_reg_out_x3 = state_reg_out_shiftdplus1[3*SHIFT_PAR_D_PLUS_1+:SHIFT_PAR_D_PLUS_1];
    assign state_reg_out_x4 = state_reg_out_shiftdplus1[4*SHIFT_PAR_D_PLUS_1+:SHIFT_PAR_D_PLUS_1];

    //b) applico ai vari segnali la RC:
    // In teoria basterebbe solo per x2 ma se PAR*(d+1) > 64 faccio anche il padding di 00 sugli altri segnali
    logic [(d+1)*PAR-1:0] mux_1st_x0;
    logic [(d+1)*PAR-1:0] mux_1st_x1;
    logic [(d+1)*PAR-1:0] mux_1st_x2;
    logic [(d+1)*PAR-1:0] mux_1st_x3;
    logic [(d+1)*PAR-1:0] mux_1st_x4;

    //Gestione della RC:
    logic [63:0] round_constant_full;

    assign round_constant_full = 64'hF0 - (64'h0F * round_counter);

    localparam int RC_PADDED_WIDTH = ((64 + PAR - 1) / PAR) * PAR;
    logic [RC_PADDED_WIDTH-1:0] round_constant_padded;
    assign round_constant_padded = { {(RC_PADDED_WIDTH - 64){1'b0}}, round_constant_full };
    
    logic [PAR-1:0] rc_block[d:0];
    genvar i_input_net;
    generate
    for (i_input_net = 0; i_input_net < d+1; i_input_net++) begin : mux_logic

        assign rc_block[i_input_net] = (sel_masked_round) 
        ? round_constant_padded[bit_counter*PAR +: PAR]
        : round_constant_padded[((d+1)*bit_counter*PAR + i_input_net*PAR )+:PAR];

        if (PAR*(d+1) <= 64) begin : gen_normal
            assign mux_1st_x0[i_input_net*PAR+:PAR] = state_reg_out_x0[i_input_net*PAR+:PAR];
            assign mux_1st_x1[i_input_net*PAR+:PAR] = state_reg_out_x1[i_input_net*PAR+:PAR];
            assign mux_1st_x2[i_input_net*PAR+:PAR] = state_reg_out_x2[i_input_net*PAR+:PAR] ^ rc_block[i_input_net];
            assign mux_1st_x3[i_input_net*PAR+:PAR] = state_reg_out_x3[i_input_net*PAR+:PAR];
            assign mux_1st_x4[i_input_net*PAR+:PAR] = state_reg_out_x4[i_input_net*PAR+:PAR];
        end else begin : gen_padded
            if (i_input_net < d) begin : gen_body
                assign mux_1st_x0[i_input_net*PAR+:PAR] = state_reg_out_x0[i_input_net*PAR+:PAR];
                assign mux_1st_x1[i_input_net*PAR+:PAR] = state_reg_out_x1[i_input_net*PAR+:PAR];
                assign mux_1st_x2[i_input_net*PAR+:PAR] = state_reg_out_x2[i_input_net*PAR+:PAR] ^ rc_block[i_input_net];
                assign mux_1st_x3[i_input_net*PAR+:PAR] = state_reg_out_x3[i_input_net*PAR+:PAR];
                assign mux_1st_x4[i_input_net*PAR+:PAR] = state_reg_out_x4[i_input_net*PAR+:PAR];
            end else begin : gen_last
                localparam int LAST_PAR_USED = 64 - (d * PAR); // quanti bit effettivi prendere
                assign mux_1st_x0[i_input_net*PAR+:PAR] = { {(PAR - LAST_PAR_USED){1'b0}}, state_reg_out_x0[i_input_net*PAR+:LAST_PAR_USED] };
                assign mux_1st_x1[i_input_net*PAR+:PAR] = { {(PAR - LAST_PAR_USED){1'b0}}, state_reg_out_x1[i_input_net*PAR+:LAST_PAR_USED] };
                assign mux_1st_x2[i_input_net*PAR+:PAR] = { {(PAR - LAST_PAR_USED){1'b0}}, state_reg_out_x2[i_input_net*PAR+:LAST_PAR_USED] } ^ rc_block[i_input_net];
                assign mux_1st_x3[i_input_net*PAR+:PAR] = { {(PAR - LAST_PAR_USED){1'b0}}, state_reg_out_x3[i_input_net*PAR+:LAST_PAR_USED] };
                assign mux_1st_x4[i_input_net*PAR+:PAR] = { {(PAR - LAST_PAR_USED){1'b0}}, state_reg_out_x4[i_input_net*PAR+:LAST_PAR_USED] };
            end
        end
    end
    endgenerate

    //c) creazione delle shares:
    logic [(d+1)*PAR*COL_SIZE-1:0] shares_out; //output delle shares
    logic [PAR*COL_SIZE-1:0] shares_in; 
    //Ho bisogno di selezionare i 5*PAR bit della prima input network, quindi i primi PAR di ogni componente:
    assign shares_in = {mux_1st_x4[0+:PAR], mux_1st_x3[0+:PAR], mux_1st_x2[0+:PAR], mux_1st_x1[0+:PAR], mux_1st_x0[0+:PAR]}; //concateno i segnali che vanno mascherati
    shareCreator #(
        .d(d),
        .COL_SIZE(COL_SIZE),
        .PAR(PAR)
    )share_creator(
        .data_in(shares_in),
        .random_masks(random_masks),
        .shares_out(shares_out)
    );

    //multiplexer per gestire l'ingresso della S-Box (prendo le shares oppure le d+1 colonne diverse):
    logic [PAR*COL_SIZE-1:0]affine_layer_in [d:0];

    genvar i_affine;
    generate
        //Assegnazione dei vari domini (devo dividere i dati sui vari domini, ognuno dei quali avrà 5*PAR bit)
        // i_affine è il dominio (A,B,C)
        for (i_affine = 0; i_affine < d+1; i_affine++) begin : gen_affine_assign
            assign affine_layer_in[i_affine] = (sel_masked_round) 
            //Devo selezionare le shares: x0_sharesA, x1_sharesA, x2_sharesA, x3_sharesA, x4_sharesA e poi x0_sharesB etc.
            ? {shares_out[i_affine*PAR*COL_SIZE+:PAR*COL_SIZE]} 
            //Devo selezionare le d+1 colonne diverse in uscita dalle input network:
            : {mux_1st_x4[i_affine*PAR+:PAR], mux_1st_x3[i_affine*PAR+:PAR], mux_1st_x2[i_affine*PAR+:PAR], mux_1st_x1[i_affine*PAR+:PAR], mux_1st_x0[i_affine*PAR+:PAR]};
        end
    endgenerate
    //devo applicare il first affine layer su ogni dominio [i]:
    //1st affine layer -> x0 = x0 ^ x4, x2 = x2 ^ x1, x4 = x4 ^ x3
    logic [PAR*COL_SIZE-1:0] affine_layer_out [d:0];

    genvar i_affine_out;
    generate
        for (i_affine_out = 0; i_affine_out< d+1; i_affine_out++) begin : affine_layer_1st
            assign affine_layer_out[i_affine_out] = {
                affine_layer_in[i_affine_out][4*PAR+:PAR] ^ affine_layer_in[i_affine_out][3*PAR+:PAR], 
                affine_layer_in[i_affine_out][3*PAR+:PAR],
                affine_layer_in[i_affine_out][2*PAR+:PAR] ^ affine_layer_in[i_affine_out][PAR+:PAR], 
                affine_layer_in[i_affine_out][PAR+:PAR], 
                affine_layer_in[i_affine_out][0+:PAR] ^ affine_layer_in[i_affine_out][4*PAR+:PAR]
            };
        end
    endgenerate

    //Mi serve input s-box diviso in PAR array da 5*d+1 bit:
    logic [(d+1)*COL_SIZE-1:0] next_sbox_input [PAR-1:0]; // ho un layer di FF in ingresso alla s-box
    genvar i_sbox, p_sbox;
    generate
        for (p_sbox=0; p_sbox < PAR; p_sbox++) begin : sbox_input_gen
            for (i_sbox=0; i_sbox < d+1; i_sbox++) begin
                //assegno i valori di x0 divisi su 1 bit (da PAR -> 1 bit), mettendo in maniera consecutiva x0_A, x0_B, etc.
                assign next_sbox_input[p_sbox][i_sbox] = affine_layer_out[i_sbox][p_sbox]; 
                //stessa cosa per x1:
                assign next_sbox_input[p_sbox][(d+1)+i_sbox] = affine_layer_out[i_sbox][PAR+p_sbox];
                //stessa cosa per x2:
                assign next_sbox_input[p_sbox][2*(d+1)+i_sbox] = affine_layer_out[i_sbox][2*PAR+p_sbox];
                //stessa cosa per x3:
                assign next_sbox_input[p_sbox][3*(d+1)+i_sbox] = affine_layer_out[i_sbox][3*PAR+p_sbox];
                //stessa cosa per x4:
                assign next_sbox_input[p_sbox][4*(d+1)+i_sbox] = affine_layer_out[i_sbox][4*PAR+p_sbox];
            end
        end
    endgenerate

    //creazione dei segnali per s-box:
    logic [(d+1)*COL_SIZE-1:0] sbox_input[PAR-1:0]; //input della s-box
    logic [(d+1)*COL_SIZE-1:0] sbox_output[PAR-1:0];//output della s-box
    logic [(d+1)*COL_SIZE-1:0] sbox_output_unmasked[PAR-1:0];//output della s-box non mascherato
    // flip flop per garantire l'indipendenza degli ingressi della DOM-AND:
    always_ff @(posedge clk) begin
        for (int p = 0; p < PAR; p++) begin
            sbox_input[p] <= next_sbox_input[p];
        end
    end
   

    //collego gli input alla s-box, vorrei usare il changing of the guards:
    //NOTA IL CHANGING OF THE GUARDS E' SUPPORTATO SOLO PER IL GRADO 2 (in questo codice)
    logic [(d+1)*d/2-1:0] fresh_r;
    genvar p;
    generate
        if (d == 2) begin : gen_cog
            
            for (p = 0; p < PAR; p++) begin : gen_sbox
                //Funziona perchè ad ogni nuova permutazione i bit sono già shiftati dentro lo state_reg
                assign fresh_r = { state_reg_out[(35+p)%64], state_reg_out[(37+p)%64], state_reg_out[(11+p)%64]  };
                ascon_sbox_d2 #(
                    .d(d),
                    .num_shares(d+1)
                ) u_sbox (
                    .clk(clk),
                    .x_in(sbox_input[p]),
                    .fresh_r(fresh_r),
                    .sel_masked_round(sel_masked_round),
                    .x_out(sbox_output[p]),
                    .x_out_noMask(sbox_output_unmasked[p])
                );
            end
        end else begin : gen_unsupported
            for (p = 0; p < PAR; p++) begin : gen_sbox
                //Funziona perchè ad ogni nuova permutazione i bit sono già shiftati dentro lo state_reg
                assign fresh_r = random_masks_sbox;
                ascon_sbox_d2 #(
                    .d(d),
                    .num_shares(d+1)
                ) u_sbox (
                    .clk(clk),
                    .x_in(sbox_input[p]),
                    .fresh_r(fresh_r),
                    .sel_masked_round(sel_masked_round),
                    .x_out(sbox_output[p]),
                    .x_out_noMask(sbox_output_unmasked[p])
                );
            end
        end
    endgenerate

    //mux selezione fra output mascherato e non mascherato dalla S-BOX:
    logic [(d+1)*COL_SIZE-1:0] mux_sbox_out [PAR-1:0];
    assign mux_sbox_out = (sel_masked_round) ? sbox_output : sbox_output_unmasked;

    //devo riconvertire i segnali per l'affine layer (separazione sui domini A,B, C etc.):
    logic [PAR*COL_SIZE-1:0] affine_layer2nd_in [d:0]; // 
    genvar i_2ndAffine, p_2ndAffine;

    generate
        for (i_2ndAffine = 0; i_2ndAffine < d+1; i_2ndAffine++) begin : gen_affine2nd
            for (p_2ndAffine = 0; p_2ndAffine < PAR; p_2ndAffine++) begin : gen_bit
                assign affine_layer2nd_in[i_2ndAffine][p_2ndAffine]           = mux_sbox_out[p_2ndAffine][i_2ndAffine];                 // x0_i[p]
                assign affine_layer2nd_in[i_2ndAffine][PAR + p_2ndAffine]     = mux_sbox_out[p_2ndAffine][(d+1) + i_2ndAffine];         // x1_i[p]
                assign affine_layer2nd_in[i_2ndAffine][2*PAR + p_2ndAffine]   = mux_sbox_out[p_2ndAffine][2*(d+1) + i_2ndAffine];       // x2_i[p]
                assign affine_layer2nd_in[i_2ndAffine][3*PAR + p_2ndAffine]   = mux_sbox_out[p_2ndAffine][3*(d+1) + i_2ndAffine];       // x3_i[p]
                assign affine_layer2nd_in[i_2ndAffine][4*PAR + p_2ndAffine]   = mux_sbox_out[p_2ndAffine][4*(d+1) + i_2ndAffine];       // x4_i[p]
            end
        end
    endgenerate

    //applico il second affine layer:
    logic [PAR*COL_SIZE-1:0] affine_layer2nd_out[d:0];
    genvar i_2ndAff_out; //i: sono i diversi domini
    generate

        
        for (i_2ndAff_out = 0; i_2ndAff_out < d+1; i_2ndAff_out++) begin : affine_layer
            
            logic [PAR-1:0] affine_layer2nd_in_temp;
            //Se ho un numero di shares pari devo invertire solo x2 del primo share, altrimenti l'effetto si annulla
            always_comb begin
                if ((d % 2) == 1 && i_2ndAff_out > 0 && sel_masked_round == 1)
                    affine_layer2nd_in_temp = affine_layer2nd_in[i_2ndAff_out][2*PAR+:PAR];
                else
                    affine_layer2nd_in_temp = ~affine_layer2nd_in[i_2ndAff_out][2*PAR+:PAR];
            end

            assign affine_layer2nd_out[i_2ndAff_out] = {
                affine_layer2nd_in[i_2ndAff_out][4*PAR+:PAR],
                affine_layer2nd_in[i_2ndAff_out][3*PAR+:PAR] ^ affine_layer2nd_in[i_2ndAff_out][2*PAR+:PAR],
                affine_layer2nd_in_temp,
                affine_layer2nd_in[i_2ndAff_out][PAR+:PAR] ^ affine_layer2nd_in[i_2ndAff_out][0+:PAR],
                affine_layer2nd_in[i_2ndAff_out][0+:PAR] ^ affine_layer2nd_in[i_2ndAff_out][4*PAR+:PAR]
            };
        end
    endgenerate
    
    //Ora ho due possibilità: in ogni caso faccio tornare al registro (d+1)*PAR*COL_SIZE bit, poi sarà lui a sapere se li deve campionare tutti o solo PAR*COL_SIZE
    //Funzione per l'xor tree:
    function automatic logic xor_tree (
        input logic [d:0] in,  // vettore di bit da ridurre
        input int N                      // numero effettivo di bit (uguale a num_shares)
    );
        // Calcola il numero massimo di livelli: serve $clog2(N) + 1
        localparam int MAX_STAGE = $clog2(d+1) + 1;

        // Ogni livello dello XOR tree ha al più num_shares elementi
        logic [(d+1)-1:0] stage [0:MAX_STAGE-1];

        int level = 0;
        int num = N;

        // === Inizializzazione del primo livello con gli input ===
        
        for (int i = 0; i < N; i++) begin
            stage[0][i] = in[i];
        end
        
        // === Costruzione dell'albero XOR ===
        while (num > 1) begin
            // Somma a coppie
            for (int i = 0; i < num / 2; i++) begin
                stage[level + 1][i] = stage[level][2*i] ^ stage[level][2*i + 1];
            end
            // Se numero dispari, porta avanti l'ultimo elemento
            if (num % 2 == 1) begin
                stage[level + 1][num / 2] = stage[level][num - 1];
                num = num / 2 + 1;
            end else begin
                num = num / 2;
            end

            level++;
        end

        // Il risultato finale è il primo elemento dell'ultimo livello
        return stage[level][0];
    endfunction

    //Ora devo ricombinare le shares:
    logic [COL_SIZE*PAR-1:0] recombine_shares;
    // Ricombinazione delle share bit a bit:
    generate
        for (genvar bit_idx = 0; bit_idx < PAR*COL_SIZE; bit_idx++) begin : recombine
            // Per ogni bit (posizione) ricombina il valore proveniente da tutti i domini (d+1)
            logic [d:0] temp_bits;
            
            always_comb begin
                for (int s = 0; s <= d; s++) begin
                    temp_bits[s] = affine_layer2nd_out[s][bit_idx];
                end
                recombine_shares[bit_idx] = xor_tree(temp_bits, d+1);
            end
        end
    endgenerate

    //Assegno le entrate seriali dello state register: 
    // PAR*COL_SIZE bit 
    assign state_reg_in_shift1 = recombine_shares;

    // (d+1)*PAR*COL_SIZE bit
    generate
        if ((PAR * (d + 1)) <= 64) begin : gen_normal
            for (genvar idx = 0; idx < COL_SIZE; idx++) begin : pack_affine
                for (genvar d_idx = 0; d_idx < d+1; d_idx++) begin : pack_affine_int
                    assign state_reg_in_shiftdplus1[idx*PAR*(d+1)+PAR*d_idx +: PAR] =
                        affine_layer2nd_out[d_idx][idx*PAR +: PAR];
                end
            end
        end else begin : gen_truncate
            for (genvar idx = 0; idx < COL_SIZE; idx++) begin : pack_affine_trunc
                for (genvar d_idx = 0; d_idx < d+1; d_idx++) begin : pack_affine_trunc_int
                    if (PAR * d_idx < 64) begin : active_bits
                        localparam int USED_BITS = ((PAR * (d_idx + 1)) <= 64) ? PAR : (64 - PAR * d_idx);
                        assign state_reg_in_shiftdplus1[idx*64 + PAR*d_idx +: USED_BITS] =
                            affine_layer2nd_out[d_idx][idx*PAR +: USED_BITS];
                    end
                    // Altrimenti non assegno nulla → padding implicito a 0
                end
            end
        end
    endgenerate

    //Definizione dei possibili state_in (su 320 bit) del registro di stato:
    logic [WORD_SIZE-1:0] state_reg_in_absorb[4:0]; //bypass per il registro di stato
    logic [STATE_WIDTH-1:0] init_data; //concatenazione input
    logic [STATE_WIDTH-1:0] linear_diffusion_out; //uscita del layer di diffusione lineare

    logic [2*WORD_SIZE-1:0] data_in_padded;

    //Gestione del padding:
    always_comb begin
        if (debug_extra_padding_ff) begin
            data_in_padded = '0;
            data_in_padded = {8'h01, {(2*WORD_SIZE-8){1'b0}}};
        end
        else if (sel_padding) begin
            data_in_padded = '0;
            // Copia i byte validi nei primi byte:
            for (int i = 0; i < valid_bytes; i++) begin
                data_in_padded[(127 - i*8) -: 8] = data_in[(127 - i*8) -: 8];
            end
            // Inserisci il padding (0x01) subito dopo l'ultimo byte valido
            data_in_padded[(127 - valid_bytes*8) -: 8] = 8'h01;
        end else begin
            data_in_padded = data_in;
        end
    end

    logic [2*WORD_SIZE-1:0] reverse_reg_data_out; //bypass per il registro di stato

    function automatic logic [2*WORD_SIZE-1:0] reverse_bytes(input logic [2*WORD_SIZE-1:0] x);
        logic [2*WORD_SIZE-1:0] y;
        for (int i = 0; i < 8; i++) begin
            y[i*8 +: 8] = x[(7-i)*8 +: 8];
            y[i*8 + WORD_SIZE +: 8] = x[(7-i)*8 + WORD_SIZE +: 8];
        end
        return y;
    endfunction

    assign reverse_reg_data_out = (sel_padding) ? reverse_bytes(data_in_padded) : reverse_bytes(data_in);
    //Absorb di MSG o AD:
    assign state_reg_in_absorb[0] = state_reg_out[0+:WORD_SIZE] ^ reverse_reg_data_out[WORD_SIZE+:WORD_SIZE];
    assign state_reg_in_absorb[1] = state_reg_out[WORD_SIZE+:WORD_SIZE] ^ reverse_reg_data_out[0+:WORD_SIZE];
    assign state_reg_in_absorb[2] = state_reg_out[2*WORD_SIZE+:WORD_SIZE];
    assign state_reg_in_absorb[3] = state_reg_out[3*WORD_SIZE+:WORD_SIZE];
    assign state_reg_in_absorb[4] = state_reg_out[4*WORD_SIZE+:WORD_SIZE];

    assign init_data = {
    nonce2,    // 64 bit
    nonce1,             // 64 bit
    key2,             // 64 bit
    key1,          // 64 bit
    initialVector            // 64 bit
    }; // Totale = 320 bit (STATE_WIDTH)

    //Assegnazione del ciphertext:
    assign ciphertext = {state_reg_in_absorb[1], state_reg_in_absorb[0]};

    always_comb begin //questo devo modificarlo per ottenere solo 2 MUX a 64 e poi 2 MUX a 320 bit guarda pag 14 Generalizzazione metodo matematico tablet!
        unique case ({sel_absorb_data, sel_init_load})
            2'b10: state_reg_in = {state_reg_in_absorb[4], state_reg_in_absorb[3], state_reg_in_absorb[2], state_reg_in_absorb[1], state_reg_in_absorb[0]};
            2'b01: state_reg_in = init_data;
            2'b00: state_reg_in = input_state;
            //Nota l'xor con la chiave dipende dal rate:
            2'b11: state_reg_in = {state_reg_in_absorb[4], state_reg_in_absorb[3] ^ reg_key2_out, state_reg_in_absorb[2] ^ reg_key1_out, state_reg_in_absorb[1] , state_reg_in_absorb[0]};  
        endcase
    end

    //Devo gestire ancora il linear diffusion layer:
    //leggo tutti i bit dei output del registro di stato e applico il linear diffusion layer:
    // Parametri di rotazione
    localparam int rotations_a[0:4] = '{19, 61, 1, 10, 7};
    localparam int rotations_b[0:4] = '{28, 39, 6, 17, 41};

    // Funzione di rotazione circolare destra su 64 bit
    function automatic logic [63:0] rotr64(input logic [63:0] x, input int n);
        return (x >> n) | (x << (64 - n));
    endfunction

    // Debug e assegnazione
    logic [63:0] linear_diffusion_debug [0:4];

    generate
        for (genvar i = 0; i < 5; i++) begin : linear_diffusion_layer
            assign linear_diffusion_debug[i] = state_reg_out[i*64 +: 64]
                                            ^ rotr64(state_reg_out[i*64 +: 64], rotations_a[i])
                                            ^ rotr64(state_reg_out[i*64 +: 64], rotations_b[i]);

            assign linear_diffusion_out[i*64 +: 64] = linear_diffusion_debug[i];
        end
    endgenerate

    //In alcuni casi devo fare l'xor con la chiave per x3 e x4 oppure con 00000...01 solo per x4:
    logic [WORD_SIZE-1:0] mux_linear_diffusion_out_x4;
    logic [WORD_SIZE-1:0] mux_linear_diffusion_out_x3;
    logic [63:0] xor_signal;

   // Linear diffusion layer già calcolato qui sopra
    assign xor_signal = (sel_xor_signal) ? reg_key2_out : {1'b1, {(WORD_SIZE-1){1'b0}}};

    // Output corretto per x4
    assign mux_linear_diffusion_out_x4 = (sel_mux_linear_diffusion_out_x4)
                                        ? (linear_diffusion_debug[4] ^ xor_signal)
                                        : linear_diffusion_debug[4];

    assign mux_linear_diffusion_out_x3 = (sel_mux_linear_diffusion_out_x3)
                                        ? (linear_diffusion_debug[3] ^ reg_key1_out)
                                        : linear_diffusion_debug[3];


    logic [STATE_WIDTH-1:0] input_state;
    assign input_state = {
        mux_linear_diffusion_out_x4,               // MSB
        mux_linear_diffusion_out_x3,
        linear_diffusion_out[2*WORD_SIZE +: WORD_SIZE],
        linear_diffusion_out[1*WORD_SIZE +: WORD_SIZE],
        linear_diffusion_out[0*WORD_SIZE +: WORD_SIZE]  // LSB
    };

    
    //Ora devo gestire l'output del tag:
    assign tag1 = linear_diffusion_out[3*WORD_SIZE+:WORD_SIZE] ^ reg_key1_out;
    assign tag2 = linear_diffusion_out[4*WORD_SIZE+:WORD_SIZE] ^ reg_key2_out;

endmodule

