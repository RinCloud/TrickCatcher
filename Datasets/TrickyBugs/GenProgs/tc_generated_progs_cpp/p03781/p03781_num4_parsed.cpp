#include <iostream>

int main() {
    int X;
    std::cin >> X;

    int b = 0;
    while (X > b * (b + 1) / 2) {
        b++;
    }
    
    std::cout << b << std::endl;
    return 0;
}
