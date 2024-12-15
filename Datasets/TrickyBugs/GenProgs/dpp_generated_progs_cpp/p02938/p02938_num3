#include <iostream>
#include <vector>

const int MOD = 1000000007;

long long power(long long x, long long n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        long long half = power(x, n / 2);
        return half * half % MOD;
    }
    else {
        return x * power(x, n - 1) % MOD;
    }
}

int main() {
    long long L, R;
    std::cin >> L >> R;

    long long ans = 0;
    for (int bit = 0; bit < 60; ++bit) {
        std::vector<long long> cnt(2);
        for (long long x = L; x <= R; ++x) {
            ++cnt[(x >> bit) & 1];
        }
        long long res = cnt[0] * cnt[1] % MOD;
        res = res * power(2, bit) % MOD;
        ans = (ans + res) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}