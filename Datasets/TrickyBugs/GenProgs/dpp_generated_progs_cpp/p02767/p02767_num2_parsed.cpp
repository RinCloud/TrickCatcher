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
    
    int minStamina = std::numeric_limits<int>::max();
    
    for (int P = 1; P <= 100; P++) {
        int totalStamina = 0;
        for (int i = 0; i < N; i++) {
            totalStamina += std::pow((coordinates[i] - P), 2);
        }
        minStamina = std::min(minStamina, totalStamina);
    }
    
    std::cout << minStamina << std::endl;
    
    return 0;
}