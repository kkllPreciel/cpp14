#include <iostream>
#include <chrono>

int main()
{
    using namespace std::literals::chrono_literals;

    auto nanoseconds_i = 3ns;   // ®”Œ^‚Ì3ƒiƒm•b
    auto nanoseconds_f = 3.1ns; // •‚“®¬”“_Œ^‚Ì3.1ƒiƒm•b

    std::cout << nanoseconds_i.count() << std::endl;
    std::cout << nanoseconds_f.count() << std::endl;

    return 0;
}