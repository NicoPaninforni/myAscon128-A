#include "tb_utils.h"
#include <fstream>
#include <iomanip>
#include <chrono>
#include <vector>
#include <random>
#include <iostream>

int main() {
    // === PARAMETRI CONFIGURABILI ===
    constexpr int d = 10;          // esempio valore → cambialo come vuoi
    constexpr int PAR = 6;         // esempio valore → cambialo come vuoi
    constexpr int COL_SIZE = 5;   

    // === PARAMETRI FISSI ===
    const int MAX_AAD_LEN = 32;
    const int MAX_MSG_LEN = 128;

    // LUNGHEZZE MASK
    constexpr int WIDTH_RAND = d * COL_SIZE * PAR;
    constexpr int WIDTH_RAND_SBOX = d * (d + 1) / 2;

    const int MASK_BYTES = (WIDTH_RAND + 7) / 8;
    const int MASK_SBOX_BYTES = (WIDTH_RAND_SBOX + 7) / 8;

    // === GENERAZIONE DATI ===

    // 1️⃣ AAD e MSG
    int aad_len = generate_random_length(MAX_AAD_LEN);
    int msg_len = generate_random_length(MAX_MSG_LEN);

    unsigned int seed_aad = std::chrono::system_clock::now().time_since_epoch().count();
    unsigned int seed_msg = std::random_device{}();

    auto aad_data = generate_random_bytes(aad_len, seed_aad);
    auto msg_data = generate_random_bytes(msg_len, seed_msg);

    // 2️⃣ MASK
    unsigned int seed_mask = std::random_device{}();
    unsigned int seed_mask_sbox = std::random_device{}();

    auto rand_mask = generate_random_bytes(MASK_BYTES, seed_mask);
    auto rand_mask_sbox = generate_random_bytes(MASK_SBOX_BYTES, seed_mask_sbox);

    // === SCRITTURA FILE ===

    // AAD
    std::ofstream aad_out("aad_data.hex");
    for (int i = 0; i < aad_len; ++i)
        aad_out << std::hex << std::setw(2) << std::setfill('0') << (int)aad_data[i] << "\n";
    aad_out.close();

    // MSG
    std::ofstream msg_out("msg_data.hex");
    for (int i = 0; i < msg_len; ++i)
        msg_out << std::hex << std::setw(2) << std::setfill('0') << (int)msg_data[i] << "\n";
    msg_out.close();

    // LENGTHS
    std::ofstream len_out("lengths.txt");
    len_out << aad_len << "\n" << msg_len << "\n";
    len_out.close();

    // === SCRITTURA MASK SEPARATI ===

    // MASK.TXT → SOLO rand_mask
    std::ofstream mask_out("mask.txt");
    for (int i = 0; i < MASK_BYTES; ++i)
        mask_out << std::hex << std::setw(2) << std::setfill('0') << (int)rand_mask[i] << "\n";
    mask_out.close();

    // MASK_SBOX.TXT → SOLO rand_mask_sbox
    std::ofstream mask_sbox_out("mask_sbox.txt");
    for (int i = 0; i < MASK_SBOX_BYTES; ++i)
        mask_sbox_out << std::hex << std::setw(2) << std::setfill('0') << (int)rand_mask_sbox[i] << "\n";
    mask_sbox_out.close();

    // DEBUG
    std::cout << "✅ DATI GENERATI:\n";
    std::cout << "  d = " << d << ", PAR = " << PAR << ", COL_SIZE = " << COL_SIZE << "\n";
    std::cout << "  WIDTH_RAND = " << WIDTH_RAND << " → MASK_BYTES = " << MASK_BYTES << "\n";
    std::cout << "  WIDTH_RAND_SBOX = " << WIDTH_RAND_SBOX << " → MASK_SBOX_BYTES = " << MASK_SBOX_BYTES << "\n";
    std::cout << "  AAD_LEN = " << aad_len << ", MSG_LEN = " << msg_len << "\n";

    return 0;
}
