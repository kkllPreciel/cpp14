#include <memory>
#include <utility>

int main()
{
    std::unique_ptr<int> p = std::make_unique<int>(3);

    // p�̏��L�����A�����_�����̕ϐ�q�Ɉړ�������
    // unique_ptr�́A���[�u�͂ł��邪�R�s�[�͂ł��Ȃ��^�����A
    // ���̂��߂�p���Q�ƃL���v�`������ƁA�������؂ꂽp�ɕs���A�N�Z�X���Ă��܂�
    // �\��������B
    auto f = [q = std::move(p)]{};

    return 0;
}