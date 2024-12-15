#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int mind = 0;

    for (char symbol : s) {
        if (symbol == '+') {
            mind++;
        } else {
            mind--;
        }
    }

    std::cout << mind << std::endl;

    return 0;
}
