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
    int min_abs = INT_MAX;
    int count_neg = 0;

    for (int i = 0; i < N; i++) {
        sum += std::abs(A[i]);
        min_abs = std::min(min_abs, std::abs(A[i]));
        if (A[i] < 0) {
            count_neg++;
        }
    }

    if (count_neg % 2 == 0) {
        std::cout << sum << std::endl;
    } else {
        std::cout << sum - 2 * min_abs << std::endl;
    }

    return 0;
}