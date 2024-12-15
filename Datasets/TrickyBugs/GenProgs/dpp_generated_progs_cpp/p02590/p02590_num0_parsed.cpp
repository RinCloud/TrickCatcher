#include <iostream>
#include <vector>

const int P = 200003; // Prime number P

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            sum = (sum + static_cast<long long>(A[i]) * A[j]) % P;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}