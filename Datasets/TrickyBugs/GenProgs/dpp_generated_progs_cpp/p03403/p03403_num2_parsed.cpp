#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::vector<int> prefix_sum(N + 1);
    for (int i = 0; i < N; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + std::abs(A[i]);
    }

    for (int i = 0; i < N; i++) {
        int total_cost = prefix_sum[N] - prefix_sum[i + 1] + std::abs(A[i]);
        std::cout << total_cost << std::endl;
    }

    return 0;
}