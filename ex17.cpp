#include <iostream>
#include <vector>

int main() {
    int n, s;
    std::cin >> n >> s;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] + b[j] == s) {
                ans++;
            }
        }
    }
    std::cout << ans << std::endl;
}
