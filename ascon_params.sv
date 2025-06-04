// ascon_params.sv
package ascon_params;

    // === Main parameters ===
    parameter int d          = 10;
    parameter int PAR        = 6;
    parameter int COL_SIZE   = 5;
    parameter int WORD_SIZE  = 64;
    parameter int STATE_WIDTH = 320;

    // === Derived parameters ===
    parameter int num_shares = d + 1;
    parameter int SHIFT_PAR  = PAR;
    parameter int SHIFT_PAR_D_PLUS_1 = ((num_shares * PAR) > 64) ? 64 : (num_shares * PAR);

    parameter int SHIFT_PAR_LAST = (64 % SHIFT_PAR == 0) ? SHIFT_PAR : (64 % SHIFT_PAR);
    parameter int SHIFT_PAR_D_PLUS_1_LAST = (64 % SHIFT_PAR_D_PLUS_1 == 0) ? SHIFT_PAR_D_PLUS_1 : (64 % SHIFT_PAR_D_PLUS_1);

    parameter int NUMBER_BIT_MASK = ((64 + PAR - 1) / PAR) + 1;

    // NOTE: Fixed the ? : for NUMBER_BIT_NOMASK
    parameter int NUMBER_BIT_NOMASK = (64 % (PAR * num_shares) == 0) ? 
                                               ((64 + PAR * num_shares) / (PAR * num_shares) - 1) :
                                               ((64 + PAR * num_shares) / (PAR * num_shares));

    parameter int SHIFT_WIDTH = num_shares * PAR;
    parameter int PADDED_WIDTH = ((WORD_SIZE + SHIFT_WIDTH - 1) / SHIFT_WIDTH) * SHIFT_WIDTH;

endpackage
