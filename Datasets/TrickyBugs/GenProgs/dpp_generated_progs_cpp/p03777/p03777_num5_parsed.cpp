#include <iostream>

int main() {
    char a, b;
    std::cin >> a >> b;

    if (a == 'H' && b == 'D') {
        std::cout << "D" << std::endl;
    } else {
        std::cout << "H" << std::endl;
    }

    return 0;
}