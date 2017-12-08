#include <iostream>
#include <string>

using namespace std::string_literals;

int main()
{
    // ラムダ式のパラメータ型をautoにすることで
    // 任意の型をパラメータとして受け取れる
    auto plus = [](auto a, auto b) { return a + b; };

    int result1 = plus(3, 2);
    std::string result2 = plus("Hello"s, "World"s);

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;

    return 0;
}