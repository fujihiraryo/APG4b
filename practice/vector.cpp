#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> math(n);
    std::vector<int> english(n);
    for (int i = 0; i < n; i++) {
        std::cin >> math[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> english[i];
    }
    for (int i = 0; i < n; i++) {
        std::cout << math[i] + english[i] << std::endl;
    }
}
