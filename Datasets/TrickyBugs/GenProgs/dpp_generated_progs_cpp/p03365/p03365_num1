#include <iostream>
#include <vector>

const long long MOD = 1000000007;

long long powMod(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    int N;
    std::cin >> N;

    long long ans = 1;
    for (int i = 2; i <= N; i++) {
        ans = (ans * i) % MOD;
    }

    std::cout << (ans * powMod(2, N - 1)) % MOD << std::endl;

    return 0;
}