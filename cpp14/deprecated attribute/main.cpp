// 非推奨なクラス
class[[deprecated("please use new_class class")]] old_class{};

// 非推奨な型の別名
using old_type [[deprecated("please use new_type type")]] = int;

// 非推奨な変数
[[deprecated("please use new_variable variable")]]
int old_variable;

struct X {
    // 非推奨な非静的メンバ変数
    [[deprecated("please use new_member_variable")]]
    int old_member_variable;
};

// 非推奨な関数
[[deprecated("please use new_func() function")]]
void old_func() {}

// 非推奨な列挙型
enum class[[deprecated("please use new_enum")]] old_enum{};

template <class T>
class class_templ;

// 非推奨なテンプレートの特殊化
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