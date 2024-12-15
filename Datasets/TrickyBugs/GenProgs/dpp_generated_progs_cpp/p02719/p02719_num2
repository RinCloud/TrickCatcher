#include <iostream>
#include <cmath>

int main() {
    long long N, K;
    std::cin >> N >> K;

    while (true) {
        long long abs_diff = std::abs(N - K);
        if (abs_diff >= N) {
            break;
        }
        N = abs_diff;
    }

    std::cout << N << std::endl;

    return 0;
}