#include <iostream>
#include <limits>

int main() {
    double d = 10.0;
    double PAR =6;
    double numerator, denominator;
    double number_xor, number_and, number_mux, number_FF;
    double number_xor_ov, number_and_ov, number_mux_ov, number_FF_ov;

    number_xor = (1 + 3*(d+1) + 5*(d+1)*(d+1) + 5*d*(d+1) + 5*d + 4*(d+1))*PAR + 640 + 320;
    number_xor_ov = d*PAR;
    number_and = 5*(d+1)*(d+1)*PAR;
    number_mux = 768 + 640;
    number_mux_ov = (5*(d+1)+5*(d+1)+5)*PAR+640;
    number_FF = 320 + 192 + (5*(d+1)+5*(d+1)*(d+1))*PAR;

    denominator = number_xor*6 + number_and*6 + number_mux*6 + number_FF*20;
    numerator = number_xor_ov*6 + number_mux_ov*6;
    std::cout << "number_transistor_overhead:" << numerator << std::endl;

    // Controllo per evitare divisione per zero
    if (denominator == 0.0) {
        std::cerr << "Errore: divisione per zero non consentita." << std::endl;
        return 1;
    }

    double result = numerator / denominator;

    std::cout.precision(10); // Imposta precisione per la stampa
    std::cout << "Risultato: " << result << std::endl;

    return 0;
}
