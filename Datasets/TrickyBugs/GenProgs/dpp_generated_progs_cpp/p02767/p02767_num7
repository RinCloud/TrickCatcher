#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> coordinates(N);
    for (int i = 0; i < N; i++) {
        std::cin >> coordinates[i];
    }
    
    int minStamina = INT_MAX;
    for (int p = 1; p <= 100; p++) {
        int totalStamina = 0;
        for (int i = 0; i < N; i++) {
            int stamina = std::pow((coordinates[i] - p), 2);
            totalStamina += stamina;
        }
        minStamina = std::min(minStamina, totalStamina);
    }

    std::cout << minStamina << std::endl;

    return 0;
}