#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> sides(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> sides[i];
    }

    int maxSide = *std::max_element(sides.begin(), sides.end());

    int sumOfOtherSides = 0;
    for (int i = 0; i < N; ++i) {
        sumOfOtherSides += sides[i];
    }
    sumOfOtherSides -= maxSide;

    if (maxSide < sumOfOtherSides) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}