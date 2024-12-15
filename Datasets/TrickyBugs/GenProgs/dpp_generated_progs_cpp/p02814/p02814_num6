#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    long long ans = M;
    for (int i = 0; i < N; i++) {
        ans /= 2;
    }

    for (int i = 0; i < N; i++) {
        if (M % A[i] != 0) {
            std::cout << 0 << std::endl;
            return 0;
        }
    }

    long long lcm_A = A[0];
    for (int i = 1; i < N; i++) {
        lcm_A = lcm(lcm_A, A[i]);
        if (lcm_A > M) {
            std::cout << 0 << std::endl;
            return 0;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}