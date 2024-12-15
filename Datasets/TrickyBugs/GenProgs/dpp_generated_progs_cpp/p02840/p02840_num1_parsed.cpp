#include <iostream>
#include <unordered_set>

int main() {
    int N, X, D;
    std::cin >> N >> X >> D;

    long long count = 0;
    if (D == 0) {
        if (X == 0) {
            count = 1;
        } else {
            count = N + 1;
        }
    } else {
        if (D < 0) {
            X = -X;
            D = -D;
        }

        long long a1 = X / D;
        long long sum_small = a1 * (a1 - 1) / 2;
        long long sum_large = (N - a1) * (N - a1 + 1) / 2;
        count = (N - 1) * N / 2 + 1 - sum_small - sum_large;
    }

    std::cout << count << std::endl;

    return 0;
}