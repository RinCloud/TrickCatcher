#include <iostream>

int main() {
    int W, a, b;
    std::cin >> W >> a >> b;

    if (a + W < b || b + W < a) {
        // The two rectangles are not overlapping
        std::cout << (b > a + W ? b - (a + W) : a - (b + W)) << std::endl;
    } else {
        // The rectangles are overlapping
        std::cout << 0 << std::endl;
    }

    return 0;
}