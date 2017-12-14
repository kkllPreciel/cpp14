#include <iostream>
#include <sstream>
#include <iomanip>

int main()
{
    std::stringstream ss;

    // (1),(2):�_�u���N�H�[�e�[�V�����ŕ�������͂�ŏo�͂���
    ss << std::quoted("hello");
    std::cout << ss.str() << std::endl;

    // (3):�_�u���N�H�[�e�[�V�����ň͂܂ꂽ������𒊏o����
    std::string input;
    ss >> std::quoted(input);
    std::cout << input << std::endl;

    return 0;
}