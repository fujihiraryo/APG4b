#include <iostream>

int main() {
    int x, a, b;
    std::cin >> x >> a >> b;

    // 1.の出力
    x++;
    std::cout << x << std::endl;

    // 2.の出力
    x *= (a + b);
    std::cout << x << std::endl;

    // 3.の出力
    x *= x;
    std::cout << x << std::endl;

    // 4.の出力
    x--;
    std::cout << x << std::endl;
}
