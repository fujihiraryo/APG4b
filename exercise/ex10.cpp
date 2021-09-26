#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    std::string a = "";
    while (A > 0) {
        a += "]";
        A -= 1;
    }
    std::cout << "A:" << a << std::endl;

    std::string b = "";
    while (B > 0) {
        b += "]";
        B -= 1;
    }
    std::cout << "B:" << b << std::endl;
}
