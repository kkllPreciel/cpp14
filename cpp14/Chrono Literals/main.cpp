#include <iostream>
#include <chrono>

int main()
{
    using namespace std::literals::chrono_literals;

    auto nanoseconds_i = 3ns;   // �����^��3�i�m�b
    auto nanoseconds_f = 3.1ns; // ���������_�^��3.1�i�m�b

    std::cout << nanoseconds_i.count() << std::endl;
    std::cout << nanoseconds_f.count() << std::endl;

    return 0;
}