#include <iostream>

int main()
{
    int x = 0b1010;
    std::cout << x << std::endl;

    // 数値リテラルの桁区切り文字と組み合わせて、4桁区切りする
    int y = 0b1000'1111;
    std::cout << y << std::endl;

    return 0;
}