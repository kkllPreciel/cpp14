#include <iostream>
#include <complex>

int main()
{
    using namespace std::literals::complex_literals;

    // ����0.0�A����1.0�̕��f���I�u�W�F�N�g�����
    std::complex<double> c = 1.0i;
    std::cout << c << std::endl;

    // ����0.0f�A����1.0f�̕��f���I�u�W�F�N�g�����
    std::complex<float> cif = 1.0if;
    std::cout << cif << std::endl;

    // ����0.0L�A����1.0L�̕��f���I�u�W�F�N�g�����
    std::complex<long double> cil = 1.0il;
    std::cout << cil << std::endl;

    return 0;
}