#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;

    int largestPerfectPower = 1;
    for (int b = 2; b <= std::sqrt(X); b++) {
        int p = 2;
        int currentPower = b * b;

        while (currentPower <= X) {
            largestPerfectPower = currentPower;
            p++;
            currentPower = std::pow(b, p);
        }
    }

    std::cout << largestPerfectPower << std::endl;

    return 0;
}
