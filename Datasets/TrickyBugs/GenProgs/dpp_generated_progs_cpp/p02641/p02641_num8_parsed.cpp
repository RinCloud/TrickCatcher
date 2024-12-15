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

    // Sort the sequence in ascending order
    std::sort(sequence.begin(), sequence.end());

    // Find the nearest integer to X
    int nearest = X;
    int difference = std::abs(X - nearest);

    // Check the integers not in the sequence
    for (int i = 0; i <= 100; i++) {
        // If the integer is not in the sequence
        if (std::find(sequence.begin(), sequence.end(), i) == sequence.end()) {
            int abs_diff = std::abs(X - i);
            if (abs_diff < difference) {
                nearest = i;
                difference = abs_diff;
            }
        }
    }

    std::cout << nearest << std::endl;

    return 0;
}