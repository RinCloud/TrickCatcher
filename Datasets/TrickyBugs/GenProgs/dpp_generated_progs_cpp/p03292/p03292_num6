#include <iostream>
#include <cmath>

int main() {
    int A[3];
    std::cin >> A[0] >> A[1] >> A[2];

    // Find the minimum absolute difference between two tasks
    int minCost = std::abs(A[1] - A[0]);
    minCost = std::min(minCost, std::abs(A[2] - A[0]));
    minCost = std::min(minCost, std::abs(A[2] - A[1]));

    std::cout << minCost << std::endl;

    return 0;
}