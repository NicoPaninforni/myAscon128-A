#include "tb_utils.h"
#include <random>
#include <iostream>
#include <chrono>

// Lunghezza random:
int generate_random_length(int max_bytes) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, max_bytes);
    return dis(gen);
}

// funzione che genera i byte random:
std::vector<uint8_t> generate_random_bytes(int len, unsigned int seed) {
    std::cout << "Generazione di " << len << " byte randomici " << std::endl;
    std::mt19937 gen(seed); // controllabile per test ripetibili
    std::uniform_int_distribution<> dis(0, 255);

    std::vector<uint8_t> bytes(len);
    for (int i = 0; i < len; ++i) {
        bytes[i] = static_cast<uint8_t>(dis(gen));
    }
    return bytes;
}

bool send_data_block_throttled(Vascon_top* top, const std::vector<uint8_t>& data, int& index, int data_type, bool& last_sent, bool dut_ready, float wait_probability) {
    if (last_sent || index >= static_cast<int>(data.size()) || !dut_ready)
        return false;

    static std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<float> dist(0.0, 1.0);
    
    if (index < 0 || index >= static_cast<int>(data.size())) {
        std::cerr << "❌ ERRORE accesso fuori limite a 'data'. index=" << index
                << ", data.size()=" << data.size() << std::endl;
        std::exit(1);
    }

    assert(index >= 0 && index < (int)data.size());

    if (dist(rng) < wait_probability) {
        std::cout << "WAITING: no data sent this cycle:\n";
        top->valid_data_in = 0;
        top->last_block = 0;
        top->EOT = 0;
        return false;
    }

    // 🔁 Blocchi da 16 byte
    int chunk_size = std::min(16, static_cast<int>(data.size()) - index);
    std::vector<uint8_t> chunk(16, 0);

    // Copia i byte esattamente come sono
    for (int i = 0; i < chunk_size; ++i) {
        chunk[i] = data[index + i];
    }

    bool is_last = (index + chunk_size == static_cast<int>(data.size()));

    // 📦 Costruzione del blocco da 128 bit per data_in
    VlWide<4> wide_data = {0, 0, 0, 0};
    // Ordine dei byte: chunk[0] va in MSB di word[3], chunk[15] in LSB di word[0]
    for (int i = 0; i < 16; ++i) {
        int word_index = 3 - (i / 4);
        int byte_index = 3 - (i % 4);
        wide_data[word_index] |= static_cast<uint32_t>(chunk[i]) << (8 * byte_index);
    }

    // 🚀 Invio al DUT
    VL_ASSIGN_W(128, top->data_in, wide_data);

    top->valid_data_in = 1;
    top->valid_bytes = chunk_size;

    top->last_block = (data_type == 0 && is_last) ? 1 : 0;
    top->EOT = (data_type == 1 && is_last) ? 1 : 0;

    index += chunk_size;
    if (is_last) {
        last_sent = true;
    }

    return true;
}



