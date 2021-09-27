#include <iostream>
#include <vector>

int sum(std::vector<int> scores) {
    int sum = 0;
    for (int score : scores) {
        sum += score;
    }
    return sum;
}

void output(int sum_a, int sum_b, int sum_c) {
    std::cout << sum_a * sum_b * sum_c << std::endl;
}

std::vector<int> input(int n) {
    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    return vec;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a, b, c;
    a = input(n);
    b = input(n);
    c = input(n);

    output(sum(a), sum(b), sum(c));
}
