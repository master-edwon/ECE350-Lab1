#include "ap_fixed.h"
#include "hls_math.h"

// 16 bits total, 8 integer bits (range approx -128 to 128)
typedef ap_fixed<16, 8> data_t;

void compute_c(data_t a, data_t b, data_t &c) {
    #pragma HLS PIPELINE
    
    // 17 bits total, 9 int bits ensures sum doesn't overflow immediately
    ap_fixed<18, 9> sum_sq = (a * a) + (b * b);
    
    c = hls::sqrt(sum_sq);
}
