#include <type_traits>

int main()
{
    int x = 3;
    int& r = x;

    auto            a = r; // a�̌^��int
    decltype(r)     b = r; // b�̌^��int&
    decltype(auto)  c = r; // c�̌^��int&

    static_assert(std::is_same<decltype(a), int>::value, "");
    static_assert(std::is_same<decltype(b), int&>::value, "");
    static_assert(std::is_same<decltype(c), int&>::value, "");

    return 0;
}