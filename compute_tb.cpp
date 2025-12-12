#include <iostream>
#include "ap_fixed.h"

typedef ap_fixed<16, 8> data_t;

void compute_c(data_t a, data_t b, data_t &c);

int main() {
    data_t a, b, c;

    // Test Case: 3-4-5 Triangle
    a = 3;
    b = 4;
    compute_c(a, b, c);
    
    std::cout << "a=" << a << ", b=" << b << " => c=" << c << std::endl;

    // Test Case: 5-12-13 Triangle
    a = 12;
    b = 5;
    compute_c(a, b, c);
    std::cout << "a=" << a << ", b=" << b << " => c=" << c << std::endl;

    return 0;
}
