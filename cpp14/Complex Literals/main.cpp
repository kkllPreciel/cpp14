#include <iostream>
#include <complex>

int main()
{
    using namespace std::literals::complex_literals;

    // 実部0.0、虚部1.0の複素数オブジェクトを作る
    std::complex<double> c = 1.0i;

    std::cout << c << std::endl;

    return 0;
}