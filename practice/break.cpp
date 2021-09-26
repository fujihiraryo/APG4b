#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            std::cout << "break" << std::endl;
            break;
        }
        std::cout << i << std::endl;
    }
    std::cout << "end" << std::endl;
}
