#include <iostream>

// 関数オブジェクトfを呼び出した結果の型を、関数g()の戻り値型とする
template <class F>
auto g(F f)
{
    return f();
}

int main()
{
    // 変数resultの型はint
    auto result = g([] { return 3; });
    std::cout << result << std::endl;

    return 0;
}