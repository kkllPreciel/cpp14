#include <iostream>
#include <iomanip>
#include <limits>

// ネイピア数:http://www.wolframalpha.com/input/?i=Napier%27s%20constant
template <typename T = float>
constexpr auto napier = static_cast<T>(2.718'281'828'459'045'235'360'287'471'352'662'497'757'247'093'699'959'5L);

template <class FloatingPoint>
constexpr int precision = std::numeric_limits<FloatingPoint>::max_digits10;

auto main() -> int
{
    std::cout
        << std::setprecision(precision<float>)          << napier<>             << "\n"
        << std::setprecision(precision<double>)         << napier<double>       << "\n"
        << std::setprecision(precision<long double>)    << napier<long double>  << "\n"
        << "2.7182818284590452353602874713526624977572470936999595" << std::endl;

    return 0;
}