#include <iostream>
#include <cmath>

int main() {
    int W, a, b;
    std::cin >> W >> a >> b;

    int min_distance = std::abs(b - (a + W));
    if (b < a) {
        min_distance = std::abs(a - (b + W));
    }

    std::cout << min_distance << std::endl;

    return 0;
}