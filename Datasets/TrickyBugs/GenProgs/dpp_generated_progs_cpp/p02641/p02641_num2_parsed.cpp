#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int X, N;
    std::cin >> X >> N;

    std::vector<int> p(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> p[i];
    }

    // Sort the sequence in ascending order
    std::sort(p.begin(), p.end());

    // Find the nearest integer to X
    int nearest = X;
    int minDiff = std::abs(X - p[0]);

    for (int i = 1; i <= 100; ++i) {
        int diff = std::abs(X - i);
        if (std::find(p.begin(), p.end(), i) == p.end() && diff < minDiff) {
            minDiff = diff;
            nearest = i;
        }
    }

    std::cout << nearest << std::endl;

    return 0;
}