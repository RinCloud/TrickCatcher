#include <iostream>
#include <cmath>

int main() {
    int X;
    std::cin >> X;

    int largestPower = 0;
    for (int b = 2; b <= sqrt(X); b++) {
        int p = 2;
        int power = pow(b, p);
        while (power <= X) {
            largestPower = power;
            p++;
            power = pow(b, p);
        }
    }

    std::cout << largestPower << std::endl;

    return 0;
}