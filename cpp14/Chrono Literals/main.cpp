#include <iostream>
#include <chrono>

int main()
{
    using namespace std::literals::chrono_literals;

    auto nanoseconds_i = 3ns;       // ®”Œ^‚Ì3ƒiƒm•b
    auto nanoseconds_f = 3.1ns;     // •‚“®¬”“_Œ^‚Ì3.1ƒiƒm•b
    auto microseconds_i = 3us;      // ®”Œ^‚Ì3ƒ}ƒCƒNƒ•b
    auto microseconds_f = 3.1us;    // •‚“®¬”“_Œ^‚Ì3.1ƒ}ƒCƒNƒ•b
    auto milliseconds_i = 3ms;      // ®”Œ^‚Ì3ƒ~ƒŠ•b
    auto milliseconds_f = 3.1ms;    // •‚“®¬”“_Œ^‚Ì3.1ƒ~ƒŠ•b
    auto seconds_i      = 3s;       // ®”Œ^‚Ì3•b
    auto seconds_f      = 3.1s;     // •‚“®¬”“_Œ^‚Ì3.1•b

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