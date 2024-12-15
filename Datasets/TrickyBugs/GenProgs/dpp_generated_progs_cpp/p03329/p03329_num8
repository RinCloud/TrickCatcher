#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    // Initialize number of operations to infinity
    int minOperations = std::numeric_limits<int>::max();

    // Iterate over all possible combinations of 1, 6, and 9 as exponents
    for (int i = 0; i <= std::sqrt(N); i++) {
        for (int j = 0; j <= std::cbrt(N); j++) {
            int remaining = N - pow(6, i) - pow(9, j);

            // If the remaining amount is non-negative and fewer operations
            // are required compared to the previous minimum, update the minOperations
            if (remaining >= 0 && i + j + remaining < minOperations) {
                minOperations = i + j + remaining;
            }
        }
    }

    std::cout << minOperations << std::endl;

    return 0;
}