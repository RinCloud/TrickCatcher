#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;

    int i = std::sqrt(2 * X);

    while ((i * (i + 1) / 2) < X) {
        i++;
    }

    std::cout << i << std::endl;

    return 0;
}