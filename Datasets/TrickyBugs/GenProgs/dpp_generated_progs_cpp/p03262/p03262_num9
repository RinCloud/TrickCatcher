#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, X;
    std::cin >> N >> X;

    std::vector<int> cities(N);
    for (int i = 0; i < N; i++) {
        std::cin >> cities[i];
    }

    int max_distance = 0;
    for (int i = 0; i < N; i++) {
        int distance = std::abs(cities[i] - X);
        max_distance = std::max(max_distance, distance);
    }

    std::cout << max_distance << std::endl;

    return 0;
}