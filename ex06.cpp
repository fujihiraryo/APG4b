#include <iostream>
#include <string>

int main() {
    int a, b;
    std::string op;
    std::cin >> a >> op >> b;

    if (op == "+") {
        std::cout << a + b << std::endl;
    } else if (op == "-") {
        std::cout << a - b << std::endl;
    } else if (op == "*") {
        std::cout << a * b << std::endl;
    } else if (op == "/") {
        if (b == 0) {
            std::cout << "error" << std::endl;
        } else {
            std::cout << a / b << std::endl;
        }
    } else {
        std::cout << "error" << std::endl;
    }
}
