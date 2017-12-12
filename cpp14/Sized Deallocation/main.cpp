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
    ~A() {} // �f�X�g���N�^�𖾎��I�ɒ�`���Ȃ��ꍇ�A
            // delete���Z�q���Ăяo����Ȃ��\��������
};

int main()
{
    delete[](new A[5]);

    return 0;

}