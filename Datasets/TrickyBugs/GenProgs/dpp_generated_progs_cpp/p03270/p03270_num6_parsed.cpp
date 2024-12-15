#include <iostream>
#include <vector>

const int MOD = 998244353;

long long powerMod(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main() {
    int K, N;
    std::cin >> K >> N;

    std::vector<long long> dp(2 * K + 1);
    dp[0] = powerMod(N, K);
    long long inv = powerMod(2, MOD - 2);

    for (int i = 1; i <= K; i++) {
        dp[i] = (dp[i - 1] - dp[i]) * N % MOD;
        dp[i + K] = dp[i];
    }

    for (int i = 1; i <= 2 * K; i++) {
        dp[i] = (dp[i - 1] + dp[i]) % MOD;
    }

    for (int i = 1; i < 2 * K; i++) {
        std::cout << (dp[i] * inv) % MOD << std::endl;
    }

    return 0;
}