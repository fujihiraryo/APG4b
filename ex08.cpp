#include <iostream>

int main() {
    int p;
    int price;
    std::string text;
    int n;

    std::cin >> p;

    // パターン1
    if (p == 1) {
        std::cin >> price;
        std::cin >> n;
    }

    // パターン2
    if (p == 2) {
        std::cin >> text;
        std::cin >> price;
        std::cin >> n;
        std::cout << text << "!" << std::endl;
    }
    std::cout << price * n << std::endl;
}
