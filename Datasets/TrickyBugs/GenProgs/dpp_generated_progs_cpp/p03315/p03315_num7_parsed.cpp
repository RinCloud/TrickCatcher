#include <iostream>
#include <string>

int main() {
    std::string symbols;
    std::cin >> symbols;

    int result = 0;
    for (char symbol : symbols) {
        if (symbol == '+') {
            result++;
        } else if (symbol == '-') {
            result--;
        }
    }

    std::cout << result << std::endl;

    return 0;
}