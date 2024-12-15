#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;

    int largestPerfectPower = 1;
    for (int base = 2; base <= X; base++) {
        for (int power = 2; std::pow(base, power) <= X; power++) {
            largestPerfectPower = std::max(largestPerfectPower, (int)std::pow(base, power));
        }
    }

    std::cout << largestPerfectPower << std::endl;

    return 0;
}