#include <iostream>

int main()
{
    int x = 0b1010;
    std::cout << x << std::endl;

    // ���l���e�����̌���؂蕶���Ƒg�ݍ��킹�āA4����؂肷��
    int y = 0b1000'1111;
    std::cout << y << std::endl;

    return 0;
}