#include <string>

int main()
{
    using namespace std::literals::string_literals;

    std::string s1 = "hello"s;      // 文字コード未規定のstringリテラル
    std::string s2 = u8"hello"s;    // UTF-8のstringリテラル

    std::u16string s3 = u"hello"s;  // u16stringリテラル
    std::u32string s4 = U"hello"s;  // u32stringリテラル

    std::wstring s5 = L"hello"s;    // 文字コード未規定のwstringリテラル

    return 0;
}