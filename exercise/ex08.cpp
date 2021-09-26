#include <iostream>

int main() {
    int p;
    int price;
    std::string text;
    int N;

    std::cin >> p;

    // パターン1
    if (p == 1) {
        std::cin >> price;
        std::cin >> N;
    }

    // パターン2
    if (p == 2) {
        std::cin >> text;
        std::cin >> price;
        std::cin >> N;
        std::cout << text << "!" << std::endl;
    }
    std::cout << price * N << std::endl;
}
