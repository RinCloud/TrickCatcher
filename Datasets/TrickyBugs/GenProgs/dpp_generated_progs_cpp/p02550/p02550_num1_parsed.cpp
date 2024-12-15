#include <iostream>

int main() {
    long long N, X, M;
    std::cin >> N >> X >> M;

    long long sum = X;
    long long A = X;

    for (int i = 1; i < N; i++) {
        A = (A * A) % M;
        sum += A;
    }

    std::cout << sum;

    return 0;
}