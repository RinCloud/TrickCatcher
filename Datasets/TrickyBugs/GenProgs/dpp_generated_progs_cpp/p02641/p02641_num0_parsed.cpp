#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int X, N;
    std::cin >> X >> N;

    std::vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        std::cin >> sequence[i];
    }

    std::sort(sequence.begin(), sequence.end());

    int nearest = X;
    int minDifference = std::abs(X - nearest);

    for (int i = 1; i <= 100; i++) {
        if (std::find(sequence.begin(), sequence.end(), i) == sequence.end()) {
            if (std::abs(X - i) < minDifference) {
                nearest = i;
                minDifference = std::abs(X - i);
            }
        }
    }

    std::cout << nearest << std::endl;

    return 0;
}