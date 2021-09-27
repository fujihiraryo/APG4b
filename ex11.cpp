#include <iostream>

int main() {
    int n, a;
    std::cin >> n;
    std::cin >> a;
    for (int n = 1; n <= n; n++) {
        std::string op;
        int b;
        std::cin >> op >> b;
        if (op == "+") {
            a = a + b;
            std::cout << n << ":" << a << std::endl;
        }
        if (op == "-") {
            a = a - b;
            std::cout << n << ":" << a << std::endl;
        }
        if (op == "*") {
            a = a * b;
            std::cout << n << ":" << a << std::endl;
        }
        if (op == "/") {
            if (b == 0) {
                std::cout << "error" << std::endl;
                break;
            }
            a = a / b;
            std::cout << n << ":" << a << std::endl;
        }
    }
}
