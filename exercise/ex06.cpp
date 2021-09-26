#include <iostream>
#include <string>

int main() {
    int A, B;
    std::string op;
    std::cin >> A >> op >> B;

    if (op == "+") {
        std::cout << A + B << std::endl;
    } else if (op == "-") {
        std::cout << A - B << std::endl;
    } else if (op == "*") {
        std::cout << A * B << std::endl;
    } else if (op == "/") {
        if (B == 0) {
            std::cout << "error" << std::endl;
        } else {
            std::cout << A / B << std::endl;
        }
    } else {
        std::cout << "error" << std::endl;
    }
}
