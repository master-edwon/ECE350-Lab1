#include <iostream>

void compute_c(double a, double b, double &c);

int main() {
    double a, b, c;

    a = 3;
    b = 4;
    compute_c(a, b, c);
    std::cout << "a=" << a << ", b=" << b << " => c=" << c << std::endl;


    a = 12;
    b = 5;
    compute_c(a, b, c);
    std::cout << "a=" << a << ", b=" << b << " => c=" << c << std::endl;


    return 0;
}
