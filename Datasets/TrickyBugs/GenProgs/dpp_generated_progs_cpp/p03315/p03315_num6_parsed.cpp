#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int mind = 0;
    for (char symbol : S) {
        if (symbol == '+') {
            mind++;
        } else {
            mind--;
        }
    }

    std::cout << mind << std::endl;

    return 0;
}