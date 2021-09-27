#include <iostream>

int main() {
    int x, y;
    int ans = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cin >> x;
            y = (i + 1) * (j + 1);
            if (x == y) {
                ans++;
            }
            std::cout << y;
            if (j != 8) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << ans << std::endl;
    std::cout << 81 - ans << std::endl;
}
