#include <iostream>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    // Find the maximum possible value of the greatest common divisor
    int gcd = std::min(N, M);
    while (gcd > 0) {
        if (M % gcd == 0 && N <= M / gcd) {
            break;
        }
        gcd--;
    }

    std::cout << gcd << std::endl;

    return 0;
}