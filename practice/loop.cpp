#include <iostream>

int main() {
    int a;
    std::cin >> a;
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        int x;
        std::cin >> x;
        if (a == x) {
            ans++;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
