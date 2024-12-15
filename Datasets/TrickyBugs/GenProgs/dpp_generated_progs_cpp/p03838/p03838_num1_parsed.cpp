#include <iostream>
#include <cmath>

int main() {
    int x, y;
    std::cin >> x >> y;

    int diff = std::abs(y - x);
    if (diff % 2 == 0) {
        std::cout << diff / 2 << std::endl;
    } else {
        std::cout << (diff + 1) / 2 + 1 << std::endl;
    }

    return 0;
}