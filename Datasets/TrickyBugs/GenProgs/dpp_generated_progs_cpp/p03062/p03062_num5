#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    long long sum = 0;
    int min_abs = INT32_MAX;
    int negative_count = 0;

    for (int i = 0; i < N; i++) {
        sum += std::abs(A[i]);
        if (A[i] < 0) {
            negative_count++;
        }
        min_abs = std::min(min_abs, std::abs(A[i]));
    }

    if (negative_count % 2 == 0) {
        std::cout << sum << std::endl;
    } else {
        std::cout << sum - (2 * min_abs) << std::endl;
    }

    return 0;
}