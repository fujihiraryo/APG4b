#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'O') {
            count++;
        }
    }
    std::cout << count << std::endl;
}
