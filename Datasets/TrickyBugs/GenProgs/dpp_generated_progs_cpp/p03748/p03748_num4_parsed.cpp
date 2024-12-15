#include <iostream>
#include <vector>

const int MOD = 1000000007;

long long pow_mod(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<long long>> dp(M + 1, std::vector<long long>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= M; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = dp[i - 1][j] % MOD;
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
            }
            if (j < N) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD;
            }
        }
    }

    long long result = 0;
    for (int j = 0; j <= N; j++) {
        result = (result + dp[M][j]) % MOD;
    }

    long long answer = (pow_mod(2, M) * result) % MOD;
    std::cout << answer << std::endl;

    return 0;
}