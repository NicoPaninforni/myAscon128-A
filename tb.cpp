#include "Vascon_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cstdint>

//definizione dei parameter:
const int d = 2;
const int WORD_SIZE = 64;
const int COL_SIZE = 5;
const int STATE_WIDTH = 320;
const int PAR = 1;
const int NUMBER_BIT_MASK = 64/PAR + 1;
const int NUMBER_BIT_NOMASK = ((64 + PAR*(d+1)) / (PAR*(d+1)));
const int WIDTH_RAND = d*COL_SIZE*PAR;
const int WORDS_RAND = (WIDTH_RAND + WORD_SIZE - 1) / WORD_SIZE;

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void print_hex(std::string label, uint64_t value) {
    std::cout << label << ": 0x"
              << std::hex << std::setw(16) << std::setfill('0') << value
              << std::dec << std::endl;
}

void assign_random_masks(Vascon_top* top) {
    const uint64_t MASK_CONSTANT = 0xDEADBEEFCAFEBABEULL;
    #if WIDTH_RAND <= 64
        // Caso semplice: singolo segnale
        top->random_masks = MASK_CONSTANT & ((1ULL << WIDTH_RAND) - 1);
    #else
        // Caso largo: array
        for (int i = 0; i < WORDS_RAND; ++i) {
            top->random_masks[i] = MASK_CONSTANT;
        }
    #endif
}

int main(int argc, char **argv) {


    std::ofstream clear_file("debug_output.txt");
    clear_file.close();
    std::vector<uint8_t> ciphertext_bytes;
    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    Vascon_top* top = new Vascon_top;
    top->trace(tfp, 99);
    tfp->open("dump.vcd");

    // === Reset ===
    top->clk = 0;
    top->reset_n = 0;
    top->eval();
    tfp->dump(main_time++);

    top->clk = 1;
    top->eval();
    tfp->dump(main_time++);

    top->reset_n = 1;

    assign_random_masks(top);
    // === Inizializza input ===
    top->start = 1;
    top->key_valid = 1;

    // Chiave: 0x000102030405060708090a0b0c0d0e0f
    top->key1 = 0x0706050403020100;
    top->key2 = 0x00f0e0d0c0b0a0908;

    // Nonce: 0x0f0e0d0c0b0a09080706050403020100
    top->nonce1 = 0x08090a0b0c0d0e0f;
    top->nonce2 = 0x0001020304050607;

    // IV: viene calcolato internamente, non serve inizializzare
    top->initialVector = 0x00000800806c0001;  // Dummy, se viene ignorato internamente

    // AAD: 0xdeadbeefcafebabe (caricato come parte del primo blocco)
    top->data_in = 0xdeadbeefcafebabe;
    top->valid_data_in = 1;
    top->valid_bytes = 8;
    top->last_block = 1;
    top->EOT = 0;

    // Simulazione cicli
    const int max_cycles = 10000;
    bool data_sent = false;
    bool aad_done = false;
    bool msg_sent = false;
    bool saw_state_init = false;
    bool saw_state_init_diffuse = false;
    bool saw_state_init_diffuse_last = false;
    bool saw_state_absorbAD = false;
    bool saw_state_AD_diffuse = false;
    bool saw_state_AD_diffuse_last = false;
    bool saw_state_absorbMSG = false;
    bool saw_state_MSG_diffuse = false;
    bool saw_state_MSG_diffuse_last = false;
    bool saw_state_finalization_diffuse = false;
    bool saw_state_finalization_diffuse_last = false;
    bool flag = false;

    uint64_t saved_diff0 = 0;
    uint64_t saved_diff1 = 0;
    uint64_t saved_diff2 = 0;
    uint64_t saved_diff3 = 0;
    uint64_t saved_diff4 = 0;

    std::ofstream logfile("debug_output.txt", std::ios::app);
    for (int cycle = 0; cycle < max_cycles; ++cycle) {
        top->clk = 0;
        top->eval();
        tfp->dump(main_time++);
        
        
        // Dopo top->eval()
        if (top->debug_state == 0x01) {
            saw_state_init = true;
        } else if (saw_state_init == true) {
            logfile << " initial value:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << std::setw(16) << top->debug_state_0 << " "
                    << std::setw(16) << top->debug_state_1 << " "
                    << std::setw(16) << top->debug_state_2 << " "
                    << std::setw(16) << top->debug_state_3 << " "
                    << std::setw(16) << top->debug_state_4 << std::endl;

            // Stampa stile permutazione
            logfile << " permutation input:" << std::endl;
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
            
            saw_state_init = false;
        }

        if ((top->debug_bitcounter == NUMBER_BIT_MASK-1) && top->debug_state == 0x02){
            logfile << " round constant addition:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_round_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_round_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_round_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_round_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_round_state_4 << std::endl;
        }

        if ((top->debug_bitcounter == 0) && (top->debug_state == 0x04 || top->debug_state == 0x05)){
            logfile << " substitution layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
        }

        if (top->debug_state == 0x04){
            saw_state_init_diffuse = true;
        } else if (saw_state_init_diffuse){
            logfile << " linear diffusion layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
            saw_state_init_diffuse = false;
        }

        if (top->debug_state == 0x05) {
            saw_state_init_diffuse_last = true;
            saved_diff3 = top->debug_linear_diffusion_state3;
            saved_diff4 = top->debug_linear_diffusion_state4;
        } else if (saw_state_init_diffuse_last) {
            logfile << " linear diffusion layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << saved_diff3 << std::endl;
            logfile << "  x4=" << std::setw(16) << saved_diff4 << std::endl;

            // Aggiunta della riga di inizializzazione
            logfile << " initialization:" << std::endl;
            logfile << std::setw(16) << top->debug_state_0 << " "
            << std::setw(16) << top->debug_state_1 << " "
            << std::setw(16) << top->debug_state_2 << " "
            << std::setw(16) << top->debug_state_3 << " "
            << std::setw(16) << top->debug_state_4 << std::endl;
            
            saw_state_init_diffuse_last = false;
        }
        
        if (top->debug_state == 0x09) {
            saw_state_absorbAD = true;
        } else if (saw_state_absorbAD == true) {
            // Stampa stile permutazione
            logfile << " permutation input:" << std::endl;
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
            
            saw_state_absorbAD = false;
        }

        if ((top->debug_bitcounter == NUMBER_BIT_NOMASK) && top->debug_state == 0x0B){
            logfile << " round constant addition:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_round_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_round_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_round_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_round_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_round_state_4 << std::endl;
        }

        if ((top->debug_bitcounter == 0) && (top->debug_state == 0x0C || top->debug_state == 0x0D)){
            logfile << " substitution layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
        }

        if (top->debug_state == 0x0C){
            saw_state_AD_diffuse = true;
        } else if (saw_state_AD_diffuse){
            logfile << " linear diffusion layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
            saw_state_AD_diffuse = false;
        }

        if (top->debug_state == 0x0D) {
            saw_state_AD_diffuse_last = true;
            saved_diff3 = top->debug_linear_diffusion_state3;
            saved_diff4 = top->debug_linear_diffusion_state4;
        } else if (saw_state_AD_diffuse_last) {
            logfile << " linear diffusion layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << saved_diff3 << std::endl;
            logfile << "  x4=" << std::setw(16) << saved_diff4 << std::endl;
            
            if (top->debug_state == 0x0E || top->debug_state == 0x0F || top->debug_state == 0x11) {
                // Aggiunta della riga di process associated data:
                logfile << " process associated data:" << std::endl;
                logfile << std::setw(16) << top->debug_state_0 << " "
                << std::setw(16) << top->debug_state_1 << " "
                << std::setw(16) << top->debug_state_2 << " "
                << std::setw(16) << top->debug_state_3 << " "
                << std::setw(16) << top->debug_state_4 << std::endl;
            }
            saw_state_AD_diffuse_last = false;
        }

        if (top->debug_state == 0x11) {
            saw_state_absorbMSG = true;
            flag = top->debug_extra_padding_ff;
            saved_diff0 = top->debug_state_0;
            saved_diff1 = top->debug_state_1;
            saved_diff2 = top->debug_state_2;
            saved_diff3 = top->debug_state_3;
            saved_diff4 = top->debug_state_4;
        } else if (saw_state_absorbMSG == true) {
            if (top->debug_state == 0x16) {
                // Aggiunta della riga di process associated data:
                logfile << " process plaintext:" << std::endl;
                logfile << std::setw(16) << top->debug_state_0 << " "
                << std::setw(16) << saved_diff1 << " "
                << std::setw(16) << saved_diff2 << " "
                << std::setw(16) << saved_diff3 << " "
                << std::setw(16) << saved_diff4 << std::endl;
            }
            // Stampa stile permutazione
            logfile << " permutation input:" << std::endl;
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
            
            saw_state_absorbMSG = false;
        }

        if ((top->debug_bitcounter == NUMBER_BIT_NOMASK) && top->debug_state == 0x13){
            logfile << " round constant addition:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_round_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_round_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_round_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_round_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_round_state_4 << std::endl;
        }

        if ((top->debug_bitcounter == 0) && (top->debug_state == 0x14 || top->debug_state == 0x15)){
            logfile << " substitution layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
        }

        if (top->debug_state == 0x14){
            saw_state_MSG_diffuse = true;
        } else if (saw_state_MSG_diffuse){
            logfile << " linear diffusion layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
            saw_state_MSG_diffuse = false;
        }

        if (top->debug_state == 0x15) {
            saw_state_MSG_diffuse_last = true;
            saved_diff3 = top->debug_linear_diffusion_state3;
            saved_diff4 = top->debug_linear_diffusion_state4;
        } else if (saw_state_MSG_diffuse_last) {
            logfile << " linear diffusion layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << saved_diff3 << std::endl;
            logfile << "  x4=" << std::setw(16) << saved_diff4 << std::endl;

            saw_state_MSG_diffuse_last = false;
        }

        if ((top->debug_bitcounter == NUMBER_BIT_MASK-1) && top->debug_state == 0x16){
            logfile << " round constant addition:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_round_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_round_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_round_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_round_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_round_state_4 << std::endl;
        }

        if ((top->debug_bitcounter == 0) && (top->debug_state == 0x18)){
            logfile << " substitution layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
        }

        if (top->debug_state == 0x18){
            saw_state_finalization_diffuse = true;
        } else if (saw_state_finalization_diffuse){
            logfile << " linear diffusion layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_state_4 << std::endl;
            saw_state_finalization_diffuse = false;
        }

        if (top->debug_state == 0x18 && top->debug_roundcounter == 0x0B) {
            saw_state_finalization_diffuse_last = true;
            saved_diff3 = top->tag1;
            saved_diff4 = top->tag2;
        } else if (saw_state_finalization_diffuse_last) {
            // Aggiunta della riga di finalization:
            logfile << " finalization:" << std::endl;
            logfile << std::setw(16) << top->debug_state_0 << " "
            << std::setw(16) << top->debug_state_1 << " "
            << std::setw(16) << top->debug_state_2 << " "
            << std::setw(16) << saved_diff3 << " "
            << std::setw(16) << saved_diff4 << std::endl;

            saw_state_finalization_diffuse_last = false;
        }
        top->clk = 1;
        top->eval();
        tfp->dump(main_time++);

        if (cycle == 2) {
            top->start = 0;
            top->key_valid = 0;
        }

        // AAD → dopo qualche ciclo, inviamo il messaggio
        if (cycle == 804 && !data_sent) {
            top->data_in = 0x0001020304050607;
            top->valid_data_in = 1;
            top->valid_bytes = 8;
            top->last_block = 0;
            top->data_type = 0;
            top->EOT = 0;
            data_sent = true;
        }

        if (cycle == 805 || cycle == 806) {
            top->valid_data_in = 0;
            data_sent = false;
        }

        if (cycle == 980 && !data_sent){ //950
            top->data_in = 0x08095a0b0c0d2eaf;
            top->valid_data_in = 1;
            top->valid_bytes = 8;
            top->last_block = 1;
            top->data_type = 0;
            top->EOT = 0;
            data_sent = true;
        }

        if (cycle == 981 || cycle == 982) {
            top->valid_data_in = 0;
            data_sent = false;
        }

        // Messaggio vero e proprio intorno al ciclo 2200
        if (cycle == 1442 && !msg_sent) {
            top->data_in = 0x708a2f3344556677;
            top->valid_data_in = 1;
            top->valid_bytes = 8;
            top->data_type = 1;
            //top->last_block = 1;
            top->EOT = 0;
            msg_sent = true;
        }

        if (cycle == 1443 || cycle == 1444) {
            top->valid_data_in = 0;
            msg_sent = false;
        }

        if (cycle == 1787 && !msg_sent) {
            top->data_in = 0x8899aabbccddeeff;
            top->valid_data_in = 1;
            top->valid_bytes = 8;
            top->data_type = 1;
            //top->last_block = 1;
            top->EOT = 0;
            msg_sent = true;
        }

        if (cycle == 1788 || cycle == 1789) {
            top->valid_data_in = 0;
            msg_sent = false;
        }

        if (cycle == 2032 && !msg_sent) {
            top->data_in = 0x000000000000ee22;
            top->valid_data_in = 1;
            top->valid_bytes = 2;
            top->data_type = 1;
            //top->last_block = 1;
            top->EOT = 1;
            msg_sent = true;
        }

        if (cycle == 2033 || cycle == 2034) {
            top->valid_data_in = 0;
            msg_sent = false;
        }

        if (top->ciphertext_valid){
            // Ad esempio: top->ciphertext è un uint64_t
            uint8_t block[8];
            std::memcpy(block, &top->ciphertext, 8);

            // Aggiungi byte in ordine little-endian
            for (int i = 0; i < 8; ++i) {
                ciphertext_bytes.push_back(block[i]);
            }
        }
        

        if (top->ready_tag) {
            std::cout << "\n--- Encryption Completed ---\n";
            print_hex("Tag1", top->tag1);
            print_hex("Tag2", top->tag2);

            // Costruzione del tag completo in little-endian
            uint8_t tag_combined[16];
            std::memcpy(tag_combined, &top->tag1, 8);
            std::memcpy(tag_combined + 8, &top->tag2, 8);

            std::cout << "Tag (combined): ";
            for (int i = 0; i < 16; ++i) {
                std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)tag_combined[i];
            }
            std::cout << std::endl;

            std::cout << "\n--- Full Ciphertext ---\n";
            std::cout << "Ciphertext (little-endian): ";
            for (uint8_t b : ciphertext_bytes) {
                std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)b;
            }
            std::cout << std::endl;

        }

        if (top->done){
            break;
        }
    }

    tfp->close();
    top->final();
    logfile.close();
    delete tfp;
    delete top;
    return 0;
}

