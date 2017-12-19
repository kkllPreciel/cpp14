#include <iostream>
#include <chrono>

int main()
{
    using namespace std::literals::chrono_literals;

    auto nanoseconds_i = 3ns;       // �����^��3�i�m�b
    auto nanoseconds_f = 3.1ns;     // ���������_�^��3.1�i�m�b
    auto microseconds_i = 3us;      // �����^��3�}�C�N���b
    auto microseconds_f = 3.1us;    // ���������_�^��3.1�}�C�N���b
    auto milliseconds_i = 3ms;      // �����^��3�~���b
    auto milliseconds_f = 3.1ms;    // ���������_�^��3.1�~���b
    auto seconds_i      = 3s;       // �����^��3�b
    auto seconds_f      = 3.1s;     // ���������_�^��3.1�b

    std::cout << nanoseconds_i.count() << std::endl;
    std::cout << nanoseconds_f.count() << std::endl;
    std::cout << microseconds_i.count() << std::endl;
    std::cout << microseconds_f.count() << std::endl;
    std::cout << milliseconds_i.count() << std::endl;
    std::cout << milliseconds_f.count() << std::endl;
    std::cout << seconds_i.count() << std::endl;
    std::cout << seconds_f.count() << std::endl;

    return 0;
}