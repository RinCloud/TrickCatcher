#include <iostream>
#include <cstdlib>
#include <algorithm>

int main() {
    int a[3];
    std::cin >> a[0] >> a[1] >> a[2];

    // Sort the array in ascending order
    std::sort(a, a+3);

    // Calculate the minimum cost
    int minCost = std::min(a[2] - a[1], a[1] - a[0]);

    std::cout << minCost << std::endl;

    return 0;
}