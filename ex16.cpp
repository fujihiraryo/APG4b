#include <iostream>

int main() {
    int a = -1;
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        int b;
        std::cin >> b;
        if (a == b) {
            ans = 1;
        }
        a = b;
    }
    if (ans == 1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
