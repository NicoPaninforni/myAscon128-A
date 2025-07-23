#include "Vascon_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cstdint>

#include "tb_utils.h"

//definizione dei parameter:
#define d 2
#define COL_SIZE 5
#define PAR 1
#define WIDTH_RAND (d * COL_SIZE * PAR)  // 110
#define WIDTH_RAND_SBOX (d*(d+1)/2)

const int WORD_SIZE = 64;
const int STATE_WIDTH = 320;
const int NUMBER_BIT_MASK = ((64+PAR-1)/PAR) + 1;
const int NUMBER_BIT_NOMASK = ((64 % (PAR * (d + 1))) == 0)
    ? ((64 + PAR * (d + 1)) / (PAR * (d + 1)) - 1)
    : ((64 + PAR * (d + 1)) / (PAR * (d + 1)));
const int WORDS_RAND = (WIDTH_RAND + WORD_SIZE - 1) / WORD_SIZE;

bool last_block_was_sent = false;
bool last_block_was_sent_msg = false;

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void print_hex(std::string label, uint64_t value) {
    std::cout << label << ": 0x"
              << std::hex << std::setw(16) << std::setfill('0') << value
              << std::dec << std::endl;
}
/*
void assign_random_masks(Vascon_top* top) {
    //std::cout << "[DEBUG] Inizio assign_random_masks()" << std::endl;
    constexpr int total_bits = WIDTH_RAND;
    const int total_bytes = (total_bits + 7) / 8;
    const int words_needed = (total_bits + 63) / 64;

    //std::cout << "[DEBUG] Generazione random..." << std::endl;
    std::vector<uint8_t> rand_bytes = generate_random_bytes(total_bytes, 123);
    //std::cout << "[DEBUG] Byte generati: " << total_bytes << std::endl;

    #if WIDTH_RAND <= 64
        //std::cout << "[DEBUG] Caso <= 64 bit" << std::endl;
        uint64_t val = 0;
        for (int i = 0; i < total_bytes; ++i)
            val |= static_cast<uint64_t>(rand_bytes[i]) << (8 * i);

        top->random_masks = val;
        //std::cout << "[DEBUG] random_masks assegnato: " << std::hex << val << std::endl;
    #else
        // === Caso generico: > 64 bit, usa WData e VL_ASSIGN_W
        constexpr int num_words = (WIDTH_RAND + 31) / 32;
        vluint32_t temp_data[num_words] = {0};

        for (int i = 0; i < total_bytes; ++i) {
            int word_index = i / 4;
            int byte_offset = (i % 4) * 8;
            temp_data[word_index] |= static_cast<uint32_t>(rand_bytes[i]) << byte_offset;
        }

        int excess_bits = (num_words * 32) - WIDTH_RAND;
        if (excess_bits > 0) {
            uint32_t mask = (1U << (32 - excess_bits)) - 1;
            temp_data[num_words - 1] &= mask;
        }

        VL_ASSIGN_W(WIDTH_RAND, top->random_masks, temp_data);
    #endif
    }

    void assign_random_masks_sbox(Vascon_top* top) {
    //std::cout << "[DEBUG] Inizio assign_random_masks()" << std::endl;
    constexpr int total_bits = WIDTH_RAND_SBOX;
    const int total_bytes = (total_bits + 7) / 8;
    const int words_needed = (total_bits + 63) / 64;

    //std::cout << "[DEBUG] Generazione random..." << std::endl;
    std::vector<uint8_t> rand_bytes = generate_random_bytes(total_bytes, 123);
    //std::cout << "[DEBUG] Byte generati: " << total_bytes << std::endl;

    #if WIDTH_RAND_SBOX <= 64
        //std::cout << "[DEBUG] Caso <= 64 bit" << std::endl;
        uint64_t val = 0;
        for (int i = 0; i < total_bytes; ++i)
            val |= static_cast<uint64_t>(rand_bytes[i]) << (8 * i);

        top->random_masks_sbox = val;
        //std::cout << "[DEBUG] random_masks assegnato: " << std::hex << val << std::endl;
    #else
        // === Caso generico: > 64 bit, usa WData e VL_ASSIGN_W
        constexpr int num_words = (WIDTH_RAND + 31) / 32;
        vluint32_t temp_data[num_words] = {0};

        for (int i = 0; i < total_bytes; ++i) {
            int word_index = i / 4;
            int byte_offset = (i % 4) * 8;
            temp_data[word_index] |= static_cast<uint32_t>(rand_bytes[i]) << byte_offset;
        }

        int excess_bits = (num_words * 32) - WIDTH_RAND;
        if (excess_bits > 0) {
            uint32_t mask = (1U << (32 - excess_bits)) - 1;
            temp_data[num_words - 1] &= mask;
        }

        VL_ASSIGN_W(WIDTH_RAND, top->random_masks_sbox, temp_data);
    #endif
    }
*/
int main(int argc, char** argv) {
    //std::cout << "[INFO] Inizio simulazione" << std::endl;
    std::ofstream clear_file("debug_output.txt");
    clear_file.close();
    std::vector<uint8_t> ciphertext_bytes;
    Verilated::commandArgs(argc, argv);
    bool reuse_input = false;
    for (int i = 1; i < argc; ++i) {
        if (std::string(argv[i]) == "--reuse") {
            reuse_input = true;
        }
    }

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

    //assign_random_masks(top);
    //assign_random_masks_sbox(top);

    
    // === Inizializza input ===
    top->start = 1;
    top->load_data = 1;

    // Chiave: 0x000102030405060708090a0b0c0d0e0f
    top->key1 = 0x0706050403020100;
    top->key2 = 0x00f0e0d0c0b0a0908;

    // Nonce: 0x0f0e0d0c0b0a09080706050403020100
    top->nonce1 = 0x08090a0b0c0d0e0f;
    top->nonce2 = 0x0001020304050607;

    // IV: viene calcolato internamente, non serve inizializzare
    top->initialVector = 0x00001000808c0001;  // Dummy, se viene ignorato internamente

    // === Dati random
    int aad_len = generate_random_length(32);
    int msg_len =  generate_random_length(128);

    unsigned int seed_aad = std::chrono::system_clock::now().time_since_epoch().count();
    unsigned int seed_msg = std::random_device{}();

    auto aad_data = generate_random_bytes(aad_len, seed_aad);
    //std::cout << "✅ AAD generation completed" << std::endl;
    auto msg_data = generate_random_bytes(msg_len, seed_msg);
    //std::cout << "✅ MSG generation completed" << std::endl;

    // === Salva per golden model
    std::ofstream data_out("data.txt");
    //std::cout << "✅ data.txt opened" << std::endl;
    data_out << std::hex << std::setfill('0');
    data_out << "aad_len " << aad_len << "\n";
    for (int i = 0; i < aad_len; ++i) data_out << std::setw(2) << (int)aad_data[i];
    data_out << "\nmsg_len " << msg_len << "\n";
    for (int i = 0; i < msg_len; ++i) data_out << std::setw(2) << (int)msg_data[i];
    data_out << "\n";
    data_out.close();

    // === Stato invio
    int aad_index = 0, msg_index = 0;
    bool aad_done = false, msg_done = false;
    std::vector<uint8_t> ciphertext;
    std::vector<uint8_t> tag_bytes;

    // Simulazione cicli
    const int max_cycles = 10000;
    bool data_sent = false;
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

    // === Sim loop
    //std::cout << "✅ Entering main sim loop" << std::endl;

    for (int cycle = 0; cycle < 10000; ++cycle) {
        bool dut_ready = top->ready_for_data;
        // ------------------DEBUG-------------
        /*if (cycle % 1000 == 0) {
            std::cout << "Cycle: " << cycle << ", aad_index: " << aad_index
                    << ", msg_index: " << msg_index
                    << ", aad_done: " << aad_done
                    << ", msg_done: " << msg_done
                    << ", ready_for_data: " << top->ready_for_data
                    << ", last_block: " << top->last_block
                    << ", EOT: " << top->EOT
                    << std::endl;
        }
        // -------------------------------------*/

        top->clk = 0;

        // === Throttle logica (sempre "ready" finto)
        top->valid_data_in = 0;
        top->last_block = 0;
        top->EOT = 0;

        // Simulazione comportamento DUT pronto con probabilità 70%
        


        // Invio condizionato se il DUT è pronto
        if (dut_ready) {
            if (!aad_done) {
                bool sent = send_data_block_throttled(top, aad_data, aad_index, 0, aad_done, dut_ready);

                if (sent && aad_done) {
                    last_block_was_sent = true;  // 🚀 flag permanente
                }
            }else if (!msg_done) {
                bool sent_msg = send_data_block_throttled(top, msg_data, msg_index, 1, msg_done, dut_ready);
                if (sent_msg && msg_done) {
                    last_block_was_sent_msg = true;  // 🚀 flag permanente
                }
            }
        }

        top->last_block = last_block_was_sent ? 1 : 0;
        top->EOT = last_block_was_sent_msg ? 1 : 0;

        top->eval(); tfp->dump(main_time++);
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
            logfile << "  x0=" << std::setw(16) << top->debug_sbox_nomasked_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_sbox_nomasked_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_sbox_nomasked_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_sbox_nomasked_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_sbox_nomasked_4 << std::endl;
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
        
        if (top->debug_state == 0x06 && (top->valid_data_in == 1 || top->debug_extra_padding_ff == 1)) {
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

        if ((top->debug_bitcounter == NUMBER_BIT_NOMASK) && top->debug_state == 0x08){
            logfile << " round constant addition:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_round_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_round_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_round_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_round_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_round_state_4 << std::endl;
        }

        if ((top->debug_bitcounter == 0) && (top->debug_state == 0x09 || top->debug_state == 0x0A)){
            logfile << " substitution layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_sbox_nomasked_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_sbox_nomasked_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_sbox_nomasked_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_sbox_nomasked_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_sbox_nomasked_4 << std::endl;
        }

        if (top->debug_state == 0x09){
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

        if (top->debug_state == 0x0A) {
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
            
            if (top->debug_state == 0x0B) {
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

        if (top->debug_state == 0x0B && (top->valid_data_in == 1 || top->debug_extra_padding_ff == 1)) {
            saw_state_absorbMSG = true;
            flag = top->debug_extra_padding_ff;
            saved_diff0 = top->debug_state_0;
            saved_diff1 = top->debug_state_1;
            saved_diff2 = top->debug_state_2;
            saved_diff3 = top->debug_state_3;
            saved_diff4 = top->debug_state_4;
        } else if (saw_state_absorbMSG == true) {
            if (top->debug_state == 0x10) {
                // Aggiunta della riga di process associated data:
                logfile << " process plaintext:" << std::endl;
                logfile << std::setw(16) << top->debug_state_0 << " "
                << std::setw(16) << top->debug_state_1 << " "
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

        if ((top->debug_bitcounter == NUMBER_BIT_NOMASK) && top->debug_state == 0x0D){
            logfile << " round constant addition:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_round_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_round_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_round_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_round_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_round_state_4 << std::endl;
        }

        if ((top->debug_bitcounter == 0) && (top->debug_state == 0x0E || top->debug_state == 0x0F)){
            logfile << " substitution layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_sbox_nomasked_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_sbox_nomasked_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_sbox_nomasked_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_sbox_nomasked_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_sbox_nomasked_4 << std::endl;
        }

        if (top->debug_state == 0x0E){
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

        if (top->debug_state == 0x0F) {
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

        if ((top->debug_bitcounter == NUMBER_BIT_MASK-1) && top->debug_state == 0x10){
            logfile << " round constant addition:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_round_state_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_round_state_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_round_state_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_round_state_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_round_state_4 << std::endl;
        }

        if ((top->debug_bitcounter == 0) && (top->debug_state == 0x12)){
            logfile << " substitution layer:" << std::endl;
            logfile << std::hex << std::setfill('0');
            logfile << "  x0=" << std::setw(16) << top->debug_sbox_nomasked_0 << std::endl;
            logfile << "  x1=" << std::setw(16) << top->debug_sbox_nomasked_1 << std::endl;
            logfile << "  x2=" << std::setw(16) << top->debug_sbox_nomasked_2 << std::endl;
            logfile << "  x3=" << std::setw(16) << top->debug_sbox_nomasked_3 << std::endl;
            logfile << "  x4=" << std::setw(16) << top->debug_sbox_nomasked_4 << std::endl;
        }

        if (top->debug_state == 0x12){
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

        if (top->debug_state == 0x12 && top->debug_roundcounter == 0x0B) {
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

        

        // === Capture output:
        //1) Ciphertext
        if (top->ciphertext_valid) {
            uint8_t block[16];
            std::memcpy(block, &top->ciphertext, 16);
            for (int i = 0; i < 16; ++i) ciphertext.push_back(block[i]);
        }

        //2) Tag

        if (top->ready_tag) {
            for (int i = 0; i < 8; ++i)
                tag_bytes.push_back((top->tag1 >> (8 * i)) & 0xff);  // LSB → MSB
            for (int i = 0; i < 8; ++i)
                tag_bytes.push_back((top->tag2 >> (8 * i)) & 0xff);
        }

        top->clk = 1;
        top->eval(); tfp->dump(main_time++);

        if (cycle == 2) {
            top->start = 0;
            top->load_data = 0;
        }

        if (top->done) {
            std::cout << "\n✅ DONE at cycle " << cycle << "\n";
            break;
        }
    }

    // === Risultato finale (stampa su logfile in little endian)
    logfile << std::hex << std::setfill('0');

    // Tag: 128 bit = tag2 (MSB) || tag1 (LSB), stampato in little endian
    logfile << std::hex << std::setfill('0');

    // Stampa il tag: MSB = tag2, LSB = tag1, ma byte-order invertito (little endian)

    logfile << "Ciphertext: ";
    size_t ct_len = std::min(ciphertext.size(), msg_data.size());
    for (size_t i = 0; i < ct_len; ++i) {
        logfile << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(ciphertext[i]);
    }

    logfile << "\n";



    logfile << "Tag: ";
    for (uint8_t b : tag_bytes)
        logfile << std::hex << std::setw(2) << std::setfill('0') << (int)b;
    logfile << "\n";

    

    // Ciphertext già in ordine corretto (little endian), basta stamparlo
    // === Cleanup
    tfp->close();
    delete tfp;
    top->final();
    delete top;

    return 0;
}
