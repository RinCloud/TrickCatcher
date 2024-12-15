#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> houses(N);
    for (int i = 0; i < N; i++) {
        std::cin >> houses[i];
    }

    // Sort the houses in ascending order
    std::sort(houses.begin(), houses.end());

    // The minimum distance can be either from the first house to the last house,
    // or from the second house to the second last house, and so on.
    // Find the distance for each pair and take the minimum.
    int minDistance = houses.back() - houses.front();
    for (int i = 1; i < N-1; i++) {
        minDistance = std::min(minDistance, houses[i+1] - houses[i-1]);
    }

    std::cout << minDistance << std::endl;

    return 0;
}