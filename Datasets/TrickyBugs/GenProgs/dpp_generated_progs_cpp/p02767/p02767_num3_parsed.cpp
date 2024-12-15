#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

int main() {
    // Read input
    int N;
    std::cin >> N;

    std::vector<int> X(N);
    for (int i = 0; i < N; i++) {
        std::cin >> X[i];
    }

    // Find the minimum total stamina
    int min_stamina = std::numeric_limits<int>::max();
    for (int p = 1; p <= 100; p++) {
        int total_stamina = 0;
        for (int i = 0; i < N; i++) {
            total_stamina += std::pow(X[i] - p, 2);
        }
        min_stamina = std::min(min_stamina, total_stamina);
    }

    // Print the result
    std::cout << min_stamina << std::endl;

    return 0;
}