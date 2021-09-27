#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    int count = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            count++;
        }
        if (s[i] == '-') {
            count--;
        }
    }
    std::cout << count << std::endl;
}
