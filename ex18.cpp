#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        a--;
        b--;
        matrix[a][b] = 1;
        matrix[b][a] = -1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            switch (matrix[i][j]) {
                case -1:
                    std::cout << "x";
                    break;
                case 0:
                    std::cout << "-";
                    break;
                case 1:
                    std::cout << "o";
                    break;
            }
            if (j != n - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
