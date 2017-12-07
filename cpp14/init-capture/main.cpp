#include <memory>
#include <utility>

int main()
{
    std::unique_ptr<int> p = std::make_unique<int>(3);

    // pの所有権を、ラムダ式内の変数qに移動させる
    // unique_ptrは、ムーブはできるがコピーはできない型だが、
    // そのためにpを参照キャプチャすると、寿命が切れたpに不正アクセスしてしまう
    // 可能性がある。
    auto f = [q = std::move(p)]{};

    return 0;
}