#include <iostream>
#include <vector>
#include <algorithm>

// Function to check if a good string exists
bool isGoodString(const std::vector<int>& permutation) {
    int n = permutation.size();
    std::vector<int> x(n), y(n), highX(n), highY(n);
    for (int i = 0; i < n; i++) {
        if (permutation[i] > i + 1) {
            x[permutation[i] - 1] = i + 1;
            highX[i + 1] = std::max(highX[i], permutation[i]);
        } else {
            y[i - permutation[i] + 1] = i + 1;
            highY[i + 1] = std::max(highY[i], permutation[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (highX[i] == highY[i] && highX[i + 1] == highY[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> permutation(n);
    for (int i = 0; i < n; i++) {
        std::cin >> permutation[i];
    }

    if (isGoodString(permutation)) {
        std::vector<char> result(n, '0');
        for (int i = 0; i < n; i++) {
            if (permutation[i] > i + 1) {
                result[permutation[i] - 1] = '1';
            }
        }
        for (int i = 0; i < n; i++) {
            std::cout << result[i];
        }
        std::cout << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}
