#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    std::string x = "";
    while (a > 0) {
        x += "]";
        a -= 1;
    }
    std::cout << "A:" << a << std::endl;

    std::string y = "";
    while (b > 0) {
        y += "]";
        b -= 1;
    }
    std::cout << "B:" << b << std::endl;
}
