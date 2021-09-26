#include <iostream>

int main() {
    int j = 0;
    while (j < 3) {
        std::cout << "Hello while: " << j << std::endl;
        j++;
    }
    for (int i = 0; i < 3; i++) {
        std::cout << "Hello for: " << i << std::endl;
    }
}
