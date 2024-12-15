#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> coordinates(N);
    for (int i = 0; i < N; i++) {
        std::cin >> coordinates[i];
    }

    int minTotalStamina = std::numeric_limits<int>::max();

    for (int p = 1; p <= 100; p++) {
        int totalStamina = 0;
        for (int i = 0; i < N; i++) {
            totalStamina += std::pow(coordinates[i] - p, 2);
        }
        minTotalStamina = std::min(minTotalStamina, totalStamina);
    }

    std::cout << minTotalStamina << std::endl;

    return 0;
}