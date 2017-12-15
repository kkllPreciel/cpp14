#include <string>

int main()
{
    using namespace std::literals::string_literals;

    std::string s1 = "hello"s;      // �����R�[�h���K���string���e����
    std::string s2 = u8"hello"s;    // UTF-8��string���e����

    std::u16string s3 = u"hello"s;  // u16string���e����
    std::u32string s4 = U"hello"s;  // u32string���e����

    std::wstring s5 = L"hello"s;    // �����R�[�h���K���wstring���e����

    return 0;
}