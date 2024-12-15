#include <iostream>
#include <string>

int main() {
    std::string symbols;
    std::cin >> symbols;

    int mind = 0;
    for (char symbol : symbols) {
        if (symbol == '+') {
            mind++;
        }
        else if (symbol == '-') {
            mind--;
        }
    }

    std::cout << mind << std::endl;

    return 0;
}