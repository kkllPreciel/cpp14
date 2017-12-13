#include <iostream>
#include <memory>
#include <utility>

int main()
{
    // (1)
    // 型Tのコンストラクタ引数を受け取ってunique_ptrオブジェクトを構築。
    //
    // ここでは、型std::pair<First, Second>のunique_ptrオブジェクトを構築するために、
    // First型とSecond型の引数を渡している。
    std::unique_ptr<std::pair<int, int>> p1 = std::make_unique<std::pair<int, int>>(3, 1);
    std::cout << p1->first << ':' << p1->second << std::endl;

    // (2)
    // 型T[]の要素数を受け取ってunique_ptr<T[]>オブジェクトを構築。
    //
    // ここでは、要素数3の、int型動的配列を構築している。
    std::unique_ptr<int[]> p2 = std::make_unique<int[]>(3);
    p2[0] = 1;
    p2[1] = 2;
    p2[2] = 3;

    return 0;
}