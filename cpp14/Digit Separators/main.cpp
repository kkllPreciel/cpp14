#include <iostream>
#include <limits>

int main()
{
    int decimal_value = 123'456;
    std::cout << decimal_value << std::endl;

    int octal_value = 0123'456;
    std::cout << octal_value << std::endl;

    int hex_value = 0x123'456;
    std::cout << hex_value << std::endl;

    int binary_value = 0b1010'1010;
    std::cout << binary_value << std::endl;

    double floating_point_value = 12'345.678'901;
    std::cout.precision(std::numeric_limits<double>::max_digits10);
    std::cout << floating_point_value << std::endl;

    return 0;
}