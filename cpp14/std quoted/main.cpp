#include <iostream>
#include <sstream>
#include <iomanip>

int main()
{
    std::stringstream ss;

    // (1),(2):ダブルクォーテーションで文字列を囲んで出力する
    ss << std::quoted("hello");
    std::cout << ss.str() << std::endl;

    // (3):ダブルクォーテーションで囲まれた文字列を抽出する
    std::string input;
    ss >> std::quoted(input);
    std::cout << input << std::endl;

    return 0;
}