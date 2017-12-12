#include <cstdio>
#include <cstdlib>
#include <new>

void* operator new[](std::size_t size)
{
    std::printf("new size:%zu\n", size);
    return std::malloc(size);
}

void operator delete[](void*) noexcept
{
    std::printf("delete\n");
}

void operator delete[](void*, std::size_t t) noexcept
{
    std::printf("delete with two arguments, %zu\n", t);
}

struct A {
    ~A() {} // デストラクタを明示的に定義しない場合、
            // delete演算子が呼び出されない可能性がある
};

int main()
{
    delete[](new A[5]);

    return 0;

}