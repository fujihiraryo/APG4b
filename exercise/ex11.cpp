#include <iostream>

int main() {
    int N, A;
    std::cin >> N;
    std::cin >> A;
    for (int n = 1; n <= N; n++) {
        std::string op;
        int B;
        std::cin >> op >> B;
        if (op == "+") {
            A = A + B;
            std::cout << n << ":" << A << std::endl;
        }
        if (op == "-") {
            A = A - B;
            std::cout << n << ":" << A << std::endl;
        }
        if (op == "*") {
            A = A * B;
            std::cout << n << ":" << A << std::endl;
        }
        if (op == "/") {
            if (B == 0) {
                std::cout << "error" << std::endl;
                break;
            }
            A = A / B;
            std::cout << n << ":" << A << std::endl;
        }
    }
}
