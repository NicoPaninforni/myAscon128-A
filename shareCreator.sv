// ============================================================================
// Module: shareCreator
// Descrizione:
//   Questo modulo genera le condivisioni (shares) mascherate di un dato input
//   secondo uno schema di mascheramento a d-ordine (utilizzando d maschere 
//   casuali), producendo in totale (d+1) shares.
//
//   L'output è formato dalle d maschere casuali più una share "corretta" 
//   calcolata come XOR tra il dato originale e tutte le maschere. Questo schema
//   garantisce che la somma XOR di tutte le shares restituisca il dato originale.
//
//   Parametri:
//     - d: ordine del mascheramento (es. 2 implica 3 shares),
//     - COL_SIZE: dimensione di un blocco di dati (es. 5 bit),
//     - PAR: parallelismo (numero di blocchi elaborati in parallelo).
//
//   Utilizzato tipicamente come fase iniziale nel mascheramento di dati sensibili.
// ============================================================================
module shareCreator #(
    parameter int d = 2,
    parameter int COL_SIZE = 5,
    parameter int PAR = 1
)
(
    input  logic [COL_SIZE*PAR-1:0] data_in,
    input  logic [d*COL_SIZE*PAR-1:0] random_masks,  // d maschere
    output logic [(d+1)*COL_SIZE*PAR-1:0] shares_out // (d+1) shares
);
    //Il blocco da in uscita {shares A[4:0], shares B[9:5], shares C}
    logic [COL_SIZE*PAR-1:0] temp;
    always_comb begin
        temp = data_in;
        for (int i = 0; i < d; i++) begin
            shares_out[(i+1)*COL_SIZE*PAR +: COL_SIZE*PAR] = random_masks[i*COL_SIZE*PAR +: COL_SIZE*PAR];
            temp ^= random_masks[i*COL_SIZE*PAR +: COL_SIZE*PAR];
        end
        shares_out[0 +: COL_SIZE*PAR] = temp;
    end
endmodule
