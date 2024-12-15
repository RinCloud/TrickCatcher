#include <iostream>
#include <cmath>

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int distAB = std::abs(b - a);
    int distBC = std::abs(c - b);
    int distAC = std::abs(c - a);

    if (distAB <= d && distBC <= d) {
        std::cout << "Yes" << std::endl;
    } else if (distAB <= d && distAC <= 2 * d) {
        std::cout << "Yes" << std::endl;
    } else if (distBC <= d && distAC <= 2 * d) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}