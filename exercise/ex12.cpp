#include <iostream>

int main() {
    std::string S;
    std::cin >> S;
    int count = 1;
    for (int i = 0; i < S.size(); i++) {
        if (S.at(i) == '+') {
            count++;
        }
        if (S.at(i) == '-') {
            count--;
        }
    }
    std::cout << count << std::endl;
}
