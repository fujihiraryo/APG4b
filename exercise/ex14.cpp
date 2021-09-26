#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    int ans = std::max(std::max(a, b), c) - std::min(std::min(a, b), c);
    std::cout << ans << std::endl;
}
