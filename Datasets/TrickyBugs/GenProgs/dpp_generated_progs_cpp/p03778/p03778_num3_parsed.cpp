#include <iostream>

int main() {
    int W, a, b;
    std::cin >> W >> a >> b;

    int minDistance;
    if (a > b) {
        minDistance = a - (b + W);
    } else {
        minDistance = b - (a + W);
    }

    std::cout << std::max(0, minDistance) << std::endl;

    return 0;
}