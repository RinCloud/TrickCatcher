#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 1000000007;

long long powmod(long long x, long long y, const int mod) {
    long long res = 1;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % mod;
        }
        x = (x * x) % mod;
        y >>= 1;
    }
    return res;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::sort(A.begin(), A.end());

    if (N % 2 == 0) {
        for (int i = 0; i < N; i += 2) {
            if (A[i] != A[i + 1] || A[i] != i + 1) {
                std::cout << 0 << std::endl;
                return 0;
            }
        }
        std::cout << powmod(2, N / 2, MOD) << std::endl;
    } else {
        if (A[0] != 0) {
            std::cout << 0 << std::endl;
            return 0;
        }
        for (int i = 1; i < N; i += 2) {
            if (A[i] != A[i + 1] || A[i] != i) {
                std::cout << 0 << std::endl;
                return 0;
            }
        }
        std::cout << powmod(2, (N - 1) / 2, MOD) << std::endl;
    }

    return 0;
}