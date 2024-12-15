#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;

    int largestPerfectPower = 1;  // Start with the smallest perfect power 1

    for (int b = 2; b <= sqrt(X); b++) {
        for (int p = 2; pow(b, p) <= X; p++) {
            largestPerfectPower = std::max(largestPerfectPower, int(pow(b, p)));
        }
    }

    std::cout << largestPerfectPower;

    return 0;
}