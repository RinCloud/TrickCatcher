#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;

    int largestPower = 1;
    for (int base = 2; base <= sqrt(X); base++) {
        int power = 2;
        int perfectPower = pow(base, power);
        while (perfectPower <= X) {
            largestPower = perfectPower;
            power++;
            perfectPower = pow(base, power);
        }
    }

    std::cout << largestPower;

    return 0;
}