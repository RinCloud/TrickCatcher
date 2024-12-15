#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    long long sum = 0;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            sum += (long long) A[i] * A[j];
            sum %= MOD;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}