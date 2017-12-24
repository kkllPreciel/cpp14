#include <iostream>
#include <complex>

int main()
{
    using namespace std::literals::complex_literals;

    // 実部0.0、虚部1.0の複素数オブジェクトを作る
    std::complex<double> c = 1.0i;
    std::cout << c << std::endl;

    // 実部0.0f、虚部1.0fの複素数オブジェクトを作る
    std::complex<float> cif = 1.0if;
    std::cout << cif << std::endl;

    // 実部0.0L、虚部1.0Lの複素数オブジェクトを作る
    std::complex<long double> cil = 1.0il;
    std::cout << cil << std::endl;

    return 0;
}