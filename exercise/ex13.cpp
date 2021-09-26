#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);

    int s = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> vec.at(i);
        s += vec.at(i);
    }
    for (int i = 0; i < n; i++) {
        std::cout << abs(abs(vec[i] - s / n)) << std::endl;
    }
}
