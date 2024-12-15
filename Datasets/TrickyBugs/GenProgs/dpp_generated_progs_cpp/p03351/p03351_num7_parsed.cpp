#include <iostream>
#include <cmath>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    // Check if A and C can directly communicate
    if (std::abs(a - c) <= d) {
        std::cout << "Yes" << std::endl;
        return 0;
    }

    // Check if A and C can indirectly communicate
    if (std::abs(a - b) <= d && std::abs(b - c) <= d) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}