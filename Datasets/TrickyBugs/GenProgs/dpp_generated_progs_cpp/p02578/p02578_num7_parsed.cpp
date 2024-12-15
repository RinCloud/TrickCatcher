#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        std::cin >> heights[i];
    }

    std::vector<int> stools(N);

    int max_height = 0;
    for (int i = 0; i < N; i++) {
        stools[i] = std::max(0, max_height - heights[i]);
        max_height = std::max(max_height, heights[i]);
    }

    int total_height = 0;
    for (int i = 0; i < N; i++) {
        total_height += stools[i];
    }

    std::cout << total_height << std::endl;

    return 0;
}