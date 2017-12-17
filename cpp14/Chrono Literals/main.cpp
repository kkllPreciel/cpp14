#include <iostream>
#include <chrono>

int main()
{
    using namespace std::literals::chrono_literals;

    auto nanoseconds_i = 3ns;       // ®”Œ^‚Ì3ƒiƒm•b
    auto nanoseconds_f = 3.1ns;     // •‚“®¬”“_Œ^‚Ì3.1ƒiƒm•b
    auto microseconds_i = 3us;      // ®”Œ^‚Ì3ƒ}ƒCƒNƒ•b
    auto microseconds_f = 3.1us;    // •‚“®¬”“_Œ^‚Ì3.1ƒ}ƒCƒNƒ•b

    std::cout << nanoseconds_i.count() << std::endl;
    std::cout << nanoseconds_f.count() << std::endl;
    std::cout << microseconds_i.count() << std::endl;
    std::cout << microseconds_f.count() << std::endl;

    return 0;
}