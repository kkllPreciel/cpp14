#include <iostream>
#include <complex>

int main()
{
    using namespace std::literals::complex_literals;

    // ����0.0�A����1.0�̕��f���I�u�W�F�N�g�����
    std::complex<double> c = 1.0i;

    std::cout << c << std::endl;

    return 0;
}