// �񐄏��ȃN���X
class[[deprecated("please use new_class class")]] old_class{};

// �񐄏��Ȍ^�̕ʖ�
using old_type [[deprecated("please use new_type type")]] = int;

// �񐄏��ȕϐ�
[[deprecated("please use new_variable variable")]]
int old_variable;

struct X {
    // �񐄏��Ȕ�ÓI�����o�ϐ�
    [[deprecated("please use new_member_variable")]]
    int old_member_variable;
};

// �񐄏��Ȋ֐�
[[deprecated("please use new_func() function")]]
void old_func() {}

// �񐄏��ȗ񋓌^
enum class[[deprecated("please use new_enum")]] old_enum{};

template <class T>
class class_templ;

// �񐄏��ȃe���v���[�g�̓��ꉻ
template <>
class[[deprecated("don't use class_template<int> specialization")]] class_templ<int> {};

int main()
{
    old_class c;
    old_type t;

    old_variable = 1;

    X x;
    x.old_member_variable = 1;

    old_func();

    old_enum e;

    class_templ<int> ct;

    return 0;
}