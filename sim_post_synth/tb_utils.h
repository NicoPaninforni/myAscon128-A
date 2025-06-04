#ifndef TB_UTILS_H
#define TB_UTILS_H

//#include "Vascon_top.h"
#include <vector>
#include <cstdint>
#include <chrono> 
#include <random>


// Genera una lunghezza casuale tra 1 e max_bytes
int generate_random_length(int max_bytes = 128);

// Genera len byte randomici (con seed opzionale)
std::vector<uint8_t> generate_random_bytes(int len, unsigned int seed = 0);

/*
// Invia un blocco da 8 byte al DUT
bool send_data_block(
    Vascon_top* top,
    const std::vector<uint8_t>& data,
    int& index,
    int data_type,
    bool& last_sent
);

// Invia un blocco al DUT solo se è pronto (e con throttling random)
bool send_data_block_throttled(
    Vascon_top* top,
    const std::vector<uint8_t>& data,
    int& index,
    int data_type,
    bool& last_sent,
    bool dut_ready,
    float wait_probability = 0.3  // default: 30% chance to delay
); */

#endif // TB_UTILS_H
