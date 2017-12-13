#include <iostream>
#include <memory>
#include <utility>

int main()
{
    // (1)
    // �^T�̃R���X�g���N�^�������󂯎����unique_ptr�I�u�W�F�N�g���\�z�B
    //
    // �����ł́A�^std::pair<First, Second>��unique_ptr�I�u�W�F�N�g���\�z���邽�߂ɁA
    // First�^��Second�^�̈�����n���Ă���B
    std::unique_ptr<std::pair<int, int>> p1 = std::make_unique<std::pair<int, int>>(3, 1);
    std::cout << p1->first << ':' << p1->second << std::endl;

    // (2)
    // �^T[]�̗v�f�����󂯎����unique_ptr<T[]>�I�u�W�F�N�g���\�z�B
    //
    // �����ł́A�v�f��3�́Aint�^���I�z����\�z���Ă���B
    std::unique_ptr<int[]> p2 = std::make_unique<int[]>(3);
    p2[0] = 1;
    p2[1] = 2;
    p2[2] = 3;

    return 0;
}