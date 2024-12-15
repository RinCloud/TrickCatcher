#include <iostream>
#include <cmath>

int main() {
    // Read input
    int A[3];
    for (int i = 0; i < 3; i++) {
        std::cin >> A[i];
    }

    // Calculate the minimum total cost
    int minTotalCost = std::abs(A[0] - A[1]) + std::abs(A[1] - A[2]);
    minTotalCost = std::min(minTotalCost, std::abs(A[0] - A[2]) + std::abs(A[2] - A[1]));
    minTotalCost = std::min(minTotalCost, std::abs(A[1] - A[0]) + std::abs(A[0] - A[2]));

    // Print the minimum total cost
    std::cout << minTotalCost << std::endl;

    return 0;
}