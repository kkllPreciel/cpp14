#include <iostream>

// �֐��I�u�W�F�N�gf���Ăяo�������ʂ̌^���A�֐�g()�̖߂�l�^�Ƃ���
template <class F>
auto g(F f)
{
    return f();
}

int main()
{
    // �ϐ�result�̌^��int
    auto result = g([] { return 3; });
    std::cout << result << std::endl;

    return 0;
}