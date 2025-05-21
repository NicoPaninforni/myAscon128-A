module ascon_top #(
    parameter int d = 2,
    parameter int WORD_SIZE = 64,
    parameter int COL_SIZE = 5,
    parameter int STATE_WIDTH = 320,
    parameter int PAR = 22,
    parameter int SHIFT_PAR_D_PLUS_1 = (((d+1)*PAR) > 64) ? 64 : ((d+1)*PAR),
    parameter int NUMBER_BIT_MASK = ((64+PAR-1)/PAR) + 1,
    parameter int NUMBER_BIT_NOMASK = ((64 + PAR*(d+1)) / (PAR*(d+1)))
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
    input logic [$clog2(WORD_SIZE/8):0] valid_bytes,
    input  logic EOT, //fine del messaggio in input
    //In Hardware ascon-sca c'è anche bdi_pad_loc e bdi_valid_bytes per gestire il padding
    input  logic [d*COL_SIZE*PAR-1:0] random_masks, //per la creazione delle shares poi vedremo bene come crearle

    output logic ciphertext_valid, //se il messaggio in output è valido
    output logic [2*WORD_SIZE-1:0] ciphertext,
    output logic done, //se il processo è finito
    output logic ready_tag,
    output logic [WORD_SIZE-1:0] tag1,
    output logic [WORD_SIZE-1:0] tag2,
    output logic ready_for_data,

    //DEBUG SIGNAL:
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
    output logic [63:0] debug_linear_diffusion_state4,
    output logic debug_extra_padding_ff
);
    //Associazione segnali di debug:
    assign debug_bitcounter = bit_counter;
    assign debug_state = current_state;
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
    assign debug_extra_padding_ff = extra_padding_ff;

    //Creazione dei segnali per il registro di stato:
    
    //segnali da 320 bit
    logic [STATE_WIDTH-1:0] state_reg_out; //uscita del registro di stato
    logic [STATE_WIDTH-1:0] state_reg_in; //input del registro di stato
    logic [STATE_WIDTH-1:0] iv_nonce_key; //concatenazione input
    logic [STATE_WIDTH-1:0] linear_diffusion_out; //uscita del layer di diffusione lineare

    //segnali da 1 bit
    logic sel_load_iv_nonce_key; //selettore del mux per cosa caricare nello state reg
    logic write_en;
    logic shift_en;
    logic shift_type;
    logic last_cycle;
    
    //Mux selezione per cosa caricare in stateReg fra inizializzazione o output linear diffusion layer:

    assign iv_nonce_key = {
    nonce2,    // 64 bit
    nonce1,             // 64 bit
    key2,             // 64 bit
    key1,          // 64 bit
    initialVector            // 64 bit
    }; // Totale = 320 bit (STATE_WIDTH)

    //Segnali dipendendi da parallelismo
    
    logic [SHIFT_PAR_D_PLUS_1*COL_SIZE-1:0] state_reg_out_shiftdplus1;  //uscita shift = parallelismo*(d+1)

    // State register -> salvo i dati
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

    // Input Network :

    //a) divido i segnali nelle 5 componenti: x0,x1,x2,x3,x4
    //segnali uscita del registro di stato quando faccio shift di (d+1)*PAR:
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


    
    //Creazione shift-register per gestire operazioni di XOR:

    //Shift register per il messaggio:
    logic load_reg_data_in;
    logic [2*WORD_SIZE-1:0] reg_data_out;
    logic [2*WORD_SIZE-1:0] reg_data_in;
    register #( //Per Associated Data e Messaggio
        .WIDTH(2*WORD_SIZE)
    ) data_in_shifter (
        .clk(clk),
        .reset_n(reset_n),
        .load(load_reg_data_in),
        .data_in(reg_data_in),
        .data_out(reg_data_out)
    );

    logic reg_key1_load;
    /* verilator lint_off UNUSED */
    logic [PAR-1:0] reg_key1_serial_out;
    /* verilator lint_on UNUSED */
    logic [WORD_SIZE-1:0] reg_key1_out;

    //shift register per la chiave (key1):
    register #(
        .WIDTH(WORD_SIZE)
    ) key1_reg (
        .clk(clk),
        .reset_n(reset_n),
        .load(reg_key1_load),
        .data_in(key1),
        .data_out(reg_key1_out)
    );

    logic reg_key2_load;
    logic [WORD_SIZE-1:0] reg_key2_out;

    //shift register per la chiave (key2):
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

    logic shift_enable_x0, last_cycle_x0;
    //shift register d'uscita per leggere i dati in maniera comoda:
    sipo_debug #(
        .WORD_SIZE(WORD_SIZE),
        .d(d),
        .PAR(PAR)
    ) sipo_reg_x0_debug (
        .clk(clk),
        .reset_n(reset_n),
        .shift_en(shift_enable_x0),
        .in_shifted_dplus1(mux_1st_x0),
        .in_shifted_1bit(mux_1st_x0[0+:PAR]),
        .shift_type(shift_type),
        .last_cycle(last_cycle_x0),
        .data_out(round_x0_debug)
    );

    //shift register d'uscita per leggere i dati in maniera comoda:
    sipo_debug #(
        .WORD_SIZE(WORD_SIZE),
        .d(d),
        .PAR(PAR)
    ) sipo_reg_x1_debug (
        .clk(clk),
        .reset_n(reset_n),
        .shift_en(shift_enable_x0),
        .in_shifted_dplus1(mux_1st_x1),
        .in_shifted_1bit(mux_1st_x1[0+:PAR]),
        .last_cycle(last_cycle_x0),
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
        .shift_en(shift_enable_x0),
        .in_shifted_dplus1(mux_1st_x2),
        .in_shifted_1bit(mux_1st_x2[0+:PAR]),
        .last_cycle(last_cycle_x0),
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
        .shift_en(shift_enable_x0),
        .in_shifted_dplus1(mux_1st_x3),
        .in_shifted_1bit(mux_1st_x3[0+:PAR]),
        .last_cycle(last_cycle_x0),
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
        .shift_en(shift_enable_x0),
        .in_shifted_dplus1(mux_1st_x4),
        .in_shifted_1bit(mux_1st_x4[0+:PAR]),
        .last_cycle(last_cycle_x0),
        .shift_type(shift_type),
        .data_out(round_x4_debug)
    );

    //b) applico ai vari segnali l'input network o la RC
    //segnali di uscita dei mux dell'input network:
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
    //devo selezionare i primi PAR bit dell'uscita combinata delle input network (cioè solo input network 0):
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

    //multiplexer per gestire l'ingresso della S-Box (shares oppure d+1 colonne diverse):
    logic sel_masked_round;
    logic [PAR*COL_SIZE-1:0]affine_layer_in [d:0];
    genvar i_affine;
    generate
        //Assegnazione dei vari domini (devo dividere i dati sui vari domini, ognuno dei quali avrà 5*PAR bit)
        for (i_affine = 0; i_affine < d+1; i_affine++) begin : gen_affine_assign
            // i -> dominio A, B or C
            assign affine_layer_in[i_affine] = (sel_masked_round) 
            //Devo selezionare o x0_sharesA, x1_sharesA, x2_sharesA, x3_sharesA, x4_sharesA e poi x0_sharesB etc.
            ? {shares_out[i_affine*PAR*COL_SIZE+:PAR*COL_SIZE]} 
            //oppure le d+1 colonne diverse in uscita dalle input network:
            : {mux_1st_x4[i_affine*PAR+:PAR], mux_1st_x3[i_affine*PAR+:PAR], mux_1st_x2[i_affine*PAR+:PAR], mux_1st_x1[i_affine*PAR+:PAR], mux_1st_x0[i_affine*PAR+:PAR]};
;
        end
    endgenerate
    //devo applicare il fireset_n affine layer su ogni dominio [i]:
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
    // flip flop per garantire l'indipendenza degli ingressi
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
                assign fresh_r = { state_reg_out[(35+p)%64], state_reg_out[(37+p)%64], state_reg_out[(11+p)%64]  };
                ascon_sbox_d2 #(
                    .d(d),
                    .num_shares(d+1)
                ) u_sbox (
                    .clk(clk),
                    .x_in(sbox_input[p]),
                    .fresh_r(fresh_r),
                    .x_out(sbox_output[p]),
                    .x_out_noMask(sbox_output_unmasked[p])
                );
            end
        end else begin : gen_unsupported
            // Questo causerà errore di sintesi volontario
            initial begin
                $fatal("ERROR: fresh_r_CoG not supported for d > 2.");
            end
        end
    endgenerate
    //mux selezione fra output mascherato e non mascherato:
    logic [(d+1)*COL_SIZE-1:0] mux_sbox_out [PAR-1:0];
    assign mux_sbox_out = (sel_masked_round) ? sbox_output : sbox_output_unmasked;

    //devo riconvertire i segnali per l'affine layer:
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
    // x0 = x0 ^ x4
    // x1 = x1 ^ x0
    // x2 = x2 ^ 1
    // x3 = x3 ^ x2
    // x4 = x4
    logic [PAR*COL_SIZE-1:0] affine_layer2nd_out[d:0];
    genvar i_2ndAff_out; //i: sono i diversi domini
    generate
        for (i_2ndAff_out = 0; i_2ndAff_out < d+1; i_2ndAff_out++) begin : affine_layer
            assign affine_layer2nd_out[i_2ndAff_out] = {
                affine_layer2nd_in[i_2ndAff_out][4*PAR+:PAR],                        // y₄
                affine_layer2nd_in[i_2ndAff_out][3*PAR+:PAR] ^ affine_layer2nd_in[i_2ndAff_out][2*PAR+:PAR],  // y₃
                ~affine_layer2nd_in[i_2ndAff_out][2*PAR+:PAR],                      // y₂
                affine_layer2nd_in[i_2ndAff_out][PAR+:PAR] ^ affine_layer2nd_in[i_2ndAff_out][0+:PAR],        // y₁
                affine_layer2nd_in[i_2ndAff_out][0+:PAR] ^ affine_layer2nd_in[i_2ndAff_out][4*PAR+:PAR]       // y₀
            };
        end
    endgenerate
    
    //Ora ho due possibilità: in ogni caso faccio tornare al registro (d+1)*PAR*COL_SIZE bit:
    //Gli LSB possono essere: colonna meno significativa quando procedo NoMask oppure ricombinazione delle shares:
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
    // Ricombinazione delle share bit a bit
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

    //Ora devo andare  a scrivere i dati nel registro di stato:
    //Do in input sempre (d+1)*PAR*COL_SIZE bit anche se in alcuni casi ne servono solo PAR*COL_SIZE
    // se procede noMask uso affine_layer2nd_out se no recombine_shares:
    logic [SHIFT_PAR_D_PLUS_1*COL_SIZE-1:0] state_reg_in_shiftdplus1;
    logic [PAR*COL_SIZE-1:0] state_reg_in_shift1;
    logic sel_bypass;

    logic [WORD_SIZE-1:0] state_reg_in_bypass[4:0]; //bypass per il registro di stato
    logic [2*WORD_SIZE-1:0] reverse_reg_data_out; //bypass per il registro di stato

    function automatic logic [2*WORD_SIZE-1:0] reverse_bytes(input logic [2*WORD_SIZE-1:0] x);
        logic [2*WORD_SIZE-1:0] y;
        for (int i = 0; i < 8; i++) begin
            y[i*8 +: 8] = x[(7-i)*8 +: 8];
            y[i*8 + WORD_SIZE +: 8] = x[(7-i)*8 + WORD_SIZE +: 8];
        end
        return y;
    endfunction

    assign reverse_reg_data_out = reverse_bytes(reg_data_out);

    assign state_reg_in_bypass[0] = state_reg_out[0+:WORD_SIZE] ^ reverse_reg_data_out[WORD_SIZE+:WORD_SIZE];
    assign state_reg_in_bypass[1] = state_reg_out[WORD_SIZE+:WORD_SIZE] ^ reverse_reg_data_out[0+:WORD_SIZE];
    assign state_reg_in_bypass[2] = state_reg_out[2*WORD_SIZE+:WORD_SIZE];
    assign state_reg_in_bypass[3] = state_reg_out[3*WORD_SIZE+:WORD_SIZE];
    assign state_reg_in_bypass[4] = state_reg_out[4*WORD_SIZE+:WORD_SIZE];

    assign state_reg_in_shift1 = recombine_shares;
    assign ciphertext = {state_reg_in_bypass[1], state_reg_in_bypass[0]};

    always_comb begin //questo devo modificarlo per ottenere solo 2 MUX a 64 e poi 2 MUX a 320 bit guarda pag 14 Generalizzazione metodo matematico tablet!
        unique case ({sel_bypass, sel_load_iv_nonce_key})
            2'b10: state_reg_in = {state_reg_in_bypass[4], state_reg_in_bypass[3], state_reg_in_bypass[2], state_reg_in_bypass[1], state_reg_in_bypass[0]};
            2'b01: state_reg_in = iv_nonce_key;
            2'b00: state_reg_in = input_state;
            //Nota l'xor con la chiave dipende dal rate:
            2'b11: state_reg_in = {state_reg_in_bypass[4], state_reg_in_bypass[3] ^ reg_key2_out, state_reg_in_bypass[2] ^ reg_key1_out, state_reg_in_bypass[1] , state_reg_in_bypass[0]};  
        endcase
    end
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

    logic sel_mux_linear_diffusion_out_x3;
    logic sel_mux_linear_diffusion_out_x4;
   // Linear diffusion layer già calcolato qui sopra

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

    //FSM:
typedef enum logic [4:0] {
    IDLE, //0
    LOAD_IV_KEY_NONCE, //01
    INIT_ROUND_SHIFT, //02
    INIT_ROUND_SHIFT_LAST, //03
    INIT_ROUND_DIFFUSE, //04
    INIT_ROUND_DIFFUSE_LAST, //05
    WAIT_AD_DATA, //06
    PADDING_AD_DATA, //07
    PADDING_EXTRA_AD_DATA,  //08
    ABSORB_AD_DATA, //09
    PROCESS_AD_SHIFT,//0A
    PROCESS_AD_SHIFT_LAST, //0B
    PROCESS_AD_DIFFUSE, //0C
    PROCESS_AD_DIFFUSE_LAST, //0D
    WAIT_MSG_DATA, //0E
    PADDING_MSG_DATA, //0F
    PADDING_EXTRA_MSG_DATA, //10
    ABSORB_MSG_DATA, //11
    PROCESS_MSG_SHIFT, //12
    PROCESS_MSG_SHIFT_LAST, //13
    PROCESS_MSG_DIFFUSE, //14
    PROCESS_MSG_DIFFUSE_LAST, //15
    FINALIZATION_SHIFT, //16
    FINALIZATION_SHIFT_LAST, //17
    FINALIZATION_DIFFUSE, //18
    SQUEEZE_TAG,
    DONE
} state_t;


// Stato
state_t current_state, next_state;

// Contatori
logic [$clog2(NUMBER_BIT_MASK+1)-1:0] bit_counter;
logic [$clog2(NUMBER_BIT_MASK+1)-1:0] number_bits;
logic [3:0] round_counter;
logic [3:0] number_round;
logic last_block_process, last_block_process_ff, last_block_process_load;

// Rete sequenziale aggiornamento stato e contatori:

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
                    round_counter <= 4;
                else
                    round_counter <= 0;
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

// Rete combinatoria di transizione stato
always_comb begin
    next_state = current_state; // default

    case (current_state)
        IDLE: begin
            if (start) next_state = LOAD_IV_KEY_NONCE;
        end

        LOAD_IV_KEY_NONCE: begin
            if (key_valid) next_state = INIT_ROUND_SHIFT;
        end

        INIT_ROUND_SHIFT: begin
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
            if (valid_data_in)
                if (last_block)
                    next_state = PADDING_AD_DATA;
                else 
                    next_state = ABSORB_AD_DATA;
            else
                next_state = WAIT_AD_DATA;
        end

        WAIT_AD_DATA: begin
            if (valid_data_in)
                if (last_block)
                    next_state = PADDING_AD_DATA;
                else
                    next_state = ABSORB_AD_DATA;
        end

        PADDING_AD_DATA: begin
            next_state = ABSORB_AD_DATA;
        end

        PADDING_EXTRA_AD_DATA: begin
            next_state = ABSORB_AD_DATA;
        end

        ABSORB_AD_DATA: begin
            next_state = PROCESS_AD_SHIFT;
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
            if (last_block) begin
                // È usato per segnalare la fine di AD, ma non della trasmissione!!!
                if (last_block_process_ff == 0) begin
                    next_state = PADDING_AD_DATA;
                end else if (extra_padding_ff == 1) begin
                    // Ho bisogno di un ciclo aggiuntivo
                    next_state = PADDING_EXTRA_AD_DATA;
                end else begin
                    if (valid_data_in) begin
                        if (EOT)
                            next_state = PADDING_MSG_DATA;     // Ultimo blocco messaggio
                        else
                            next_state = ABSORB_MSG_DATA;      // Ci sono ancora blocchi MSG
                    end else begin
                        next_state = WAIT_MSG_DATA;            // Aspetto dato valido
                    end
                end
            end else begin
                // Se non era l'ultimo blocco di AD torno a processarli
                if (valid_data_in)
                    next_state = ABSORB_AD_DATA;
                else
                    next_state = WAIT_AD_DATA;
            end
        end


        WAIT_MSG_DATA: begin
            if (valid_data_in)
                if (EOT)
                    next_state = PADDING_MSG_DATA;
                else
                    next_state = ABSORB_MSG_DATA;
        end

        PADDING_MSG_DATA: begin
            next_state = ABSORB_MSG_DATA;
        end

        PADDING_EXTRA_MSG_DATA: begin
            next_state = ABSORB_MSG_DATA;
        end

        ABSORB_MSG_DATA: begin
            next_state = PROCESS_MSG_SHIFT;
            if (EOT && !extra_padding_ff)
                next_state = FINALIZATION_SHIFT;
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
            if (extra_padding_ff == 1) begin
                next_state = PADDING_EXTRA_MSG_DATA;
            end else begin
                if (valid_data_in)
                    if (EOT) begin
                        next_state = PADDING_MSG_DATA;
                    end else begin
                        next_state = ABSORB_MSG_DATA;
                    end
                else
                    next_state = WAIT_MSG_DATA;
            end
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
logic round_counter_enable;
logic extra_padding, extra_padding_ff, extra_padding_load; //per la gestione del padding extra
logic rst_counter_round;

// Rete combinatoria di calcolo delle uscite
always_comb begin
    // Default: segnali spenti
    ciphertext_valid = 0;
    done = 0;
    shift_enable_x0 = 0;
    round_counter_enable = 0;
    //segnali dello state_register 
    extra_padding = 0;
    extra_padding_load = 0;
    write_en = 0;
    shift_en = 0;
    shift_type = 0; //shift d+1 se shift_en = 1
    last_cycle = 0;

    sel_load_iv_nonce_key = 0;
    sel_mux_linear_diffusion_out_x3 = 0;
    sel_mux_linear_diffusion_out_x4 = 0;
    sel_masked_round = 1;
    ready_tag = 0;
    //shift register data in:
    load_reg_data_in = 0;
    ready_for_data = 0;
    last_cycle_x0 = 0;
    //shift registers per le chiavi:
    reg_key1_load = 0;
    reg_key2_load = 0;
    number_round = 12;
    number_bits = 0;
    reg_data_in = data_in;
    xor_signal = 64'b0; //xor con 0000...01
    sel_bypass = 0;
    rst_counter_round = 0;
    last_block_process = 0;
    last_block_process_load = 0;
    case (current_state)
        IDLE: begin
            // niente
        end

        LOAD_IV_KEY_NONCE: begin
                // carico IV, nonce e chiave:
                reg_key1_load = 1;
                reg_key2_load = 1;
                sel_load_iv_nonce_key = 1;
                write_en = 1;
        end

        INIT_ROUND_SHIFT: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ;  // troncamento esplicito

            shift_en = 1;
            shift_type = 1; // shift di PAR bit in inizializzazione
            shift_enable_x0 = 1;
            if (bit_counter == (NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] - 2)) begin
                last_cycle_x0 = 1; //se sono all'ultimo ciclo di shift
            end
        end

        INIT_ROUND_SHIFT_LAST: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ;
            last_cycle = 1;
            shift_en = 1;
            shift_enable_x0 = 1;
            shift_type = 1; // shift di PAR bit in inizializzazione
        end

        INIT_ROUND_DIFFUSE: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ;
            write_en = 1;
            round_counter_enable = 1;
        end

        INIT_ROUND_DIFFUSE_LAST: begin
            ready_for_data = 1;
            if (valid_data_in) begin
                // carico i dati nel registro reg_data_in
                load_reg_data_in = 1;
            end
            round_counter_enable = 1;
            sel_mux_linear_diffusion_out_x3 = 1;
            sel_mux_linear_diffusion_out_x4 = 1;
            xor_signal = reg_key2_out; //xor con la chiave non con 0000...01
            write_en = 1;
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0];
            sel_masked_round = 0;
        end

        WAIT_AD_DATA: begin
            ready_for_data = 1;
            if (valid_data_in) begin
                // carico i dati nel registro reg_data_in
                load_reg_data_in = 1;
            end
            sel_masked_round = 0;
        end

        PADDING_AD_DATA: begin
            load_reg_data_in = 1;
            sel_masked_round = 0;

            if (last_block) begin
                    last_block_process = 1;
                    last_block_process_load = 1;
            end

            if (int'(valid_bytes) < BYTE_W) begin
                // pulizia iniziale
                reg_data_in = '0;

                // Copia i byte validi nei primi byte (MSB → reg_data_in[127:0])
                for (int i = 0; i < valid_bytes; i++) begin
                    reg_data_in[(127 - i*8) -: 8] = data_in[(127 - i*8) -: 8];
                end

                // Inserisci il padding (0x01) subito dopo l'ultimo byte valido
                reg_data_in[(127 - valid_bytes*8) -: 8] = 8'h01;

                // i byte successivi sono già a zero
            end else begin
                reg_data_in = data_in;
                extra_padding_load = 1;
                extra_padding = 1;
            end
        end

        PADDING_EXTRA_AD_DATA: begin
            extra_padding_load = 1;
            load_reg_data_in = 1;
            sel_masked_round = 0;
            // carico blocco solo padding 0x80 seguito da zeri nei LSB
            reg_data_in = {8'h01, {(2*WORD_SIZE-8){1'b0}}};
        end

        ABSORB_AD_DATA: begin
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0]; // numero shift per processare tutti i bit
            sel_bypass = 1;
            sel_masked_round = 0;
            write_en = 1;
        end

        PROCESS_AD_SHIFT: begin
            sel_masked_round = 0;
            shift_enable_x0 = 1;
            number_bits = NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0]; // numero shift per processare tutti i bit
            shift_en = 1; //ad ogni ciclo processo PAR*(d+1) bit (shift_type = 0)
            if (bit_counter == (NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] - 1)) begin
                last_cycle_x0 = 1; //se sono all'ultimo ciclo di shift
            end
        end

        PROCESS_AD_SHIFT_LAST: begin
            sel_masked_round = 0;
            shift_enable_x0 = 1;
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
            ready_for_data = 1;
            if (valid_data_in) begin
                // carico i dati nel registro reg_data_in
                load_reg_data_in = 1;
            end

            if (last_block == 1) begin //Modifica a questa linea: aggiunta && last_block
                if (extra_padding_ff == 0 && last_block_process_ff == 1) begin
                    sel_mux_linear_diffusion_out_x4 = 1;
                    xor_signal = {1'b1, {(WORD_SIZE-1){1'b0}}};
                end
            end
            write_en = 1;
            round_counter_enable = 1;
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            sel_masked_round = 0;
        end

        WAIT_MSG_DATA: begin
            ready_for_data = 1;
            if (valid_data_in) begin
                // carico i dati nel registro reg_data_in
                load_reg_data_in = 1;
            end
            sel_masked_round = 0;
            last_block_process_load = 1;
        end

        PADDING_MSG_DATA: begin
            load_reg_data_in = 1;
            sel_masked_round = 0;

            if (int'(valid_bytes) < BYTE_W) begin
                // pulizia iniziale
                reg_data_in = '0;

                // Copia i byte validi nei primi byte (MSB → reg_data_in[127:0])
                for (int i = 0; i < valid_bytes; i++) begin
                    reg_data_in[(127 - i*8) -: 8] = data_in[(127 - i*8) -: 8];
                end

                // Inserisci il padding (0x01) subito dopo l'ultimo byte valido
                reg_data_in[(127 - valid_bytes*8) -: 8] = 8'h01;

                // i byte successivi sono già a zero
            end else begin
                reg_data_in = data_in;
                extra_padding_load = 1;
                extra_padding = 1;
            end
        end

        PADDING_EXTRA_MSG_DATA: begin
            extra_padding_load = 1;
            load_reg_data_in = 1;
            sel_masked_round = 0; 
            // carico blocco solo padding 0x80 seguito da zeri nei LSB
            reg_data_in = {8'h01, {(2*WORD_SIZE-8){1'b0}}};
        end

        ABSORB_MSG_DATA: begin
            sel_masked_round = 0;
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            sel_bypass = 1;
            write_en = 1;
            if (!EOT || (EOT && (extra_padding_ff || int'(valid_bytes) != (2*WORD_SIZE)/8)))
                ciphertext_valid = 1;
            if (EOT && !extra_padding_ff) begin //se ho finito la trasmissione e non devo fare l'extra padding posso andare avanti
                sel_load_iv_nonce_key = 1; //sel_bypass = 1 && sel_load_iv_nonce_key = 1 -> carico in state_reg : state_reg_out ^ data_in ^ 0*|K1|K2|0*|0*
                rst_counter_round = 1; //resetto il contatore dei round
            end
        end

        PROCESS_MSG_SHIFT: begin
            sel_masked_round = 0;
            number_bits = NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            shift_en = 1; //ad ogni ciclo processo PAR*(d+1) bit (shift_type = 0)
            shift_enable_x0 = 1;
            if (bit_counter == (NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] -1)) begin
                last_cycle_x0 = 1; //se sono all'ultimo ciclo di shift
            end
        end

        PROCESS_MSG_SHIFT_LAST: begin
            sel_masked_round = 0;
            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0] ; // numero shift per processare tutti i bit
            last_cycle = 1;
            shift_enable_x0 = 1;
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
                ready_for_data = 1;
                if (valid_data_in) begin
                    // carico i dati nel registro reg_data_in
                    load_reg_data_in = 1;
                end
            end
            

            number_bits =  NUMBER_BIT_NOMASK[$clog2(NUMBER_BIT_MASK+1)-1:0]; // numero shift per processare tutti i bit
            
        end

        FINALIZATION_SHIFT: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0];
            shift_en = 1;
            shift_type = 1; // shift 1
            shift_enable_x0 = 1;
            if (bit_counter == (NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0] - 2)) begin
                last_cycle_x0 = 1; //se sono all'ultimo ciclo di shift
            end
        end

        FINALIZATION_SHIFT_LAST: begin
            number_bits = NUMBER_BIT_MASK[$clog2(NUMBER_BIT_MASK+1)-1:0];
            last_cycle = 1;
            shift_en = 1;
            shift_type = 1; // shift 1
            shift_enable_x0 = 1;

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
            ciphertext_valid = 0;
            done = 0;
            write_en = 0;
            shift_en = 0;
            shift_type = 0; //shift d+1 se shift_en = 1
            last_cycle = 0;

            sel_load_iv_nonce_key = 0;
            sel_masked_round = 1;

            //shift register data in:
            load_reg_data_in = 0;

            //shift registers per le chiavi:
            reg_key1_load = 0;
            reg_key2_load = 0;
            number_round = 12;
        end
    endcase
end
endmodule
