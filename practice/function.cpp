#include <iostream>

int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int main() { std::cout << min(10, 5) << std::endl; }
