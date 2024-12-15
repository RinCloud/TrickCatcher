#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

long long int power(long long int a, long long int b) {
    if (b == 0) return 1;
    long long int res = power(a, b / 2) % MOD;
    if (b % 2 == 0)
        return (res * res) % MOD;
    else
        return (((res * res) % MOD) * a) % MOD;
}

int main() {
    int N, M, K;
    std::cin >> N >> M >> K;

    std::vector<std::vector<long long int>> dp(N + 1, std::vector<long long int>(M + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            dp[i][j] = (power(i, j) - dp[i - 1][j] - dp[i][j - 1] + MOD + dp[i - 1][j - 1]) % MOD;
        }
    }

    long long int ans = (dp[N][M] * power(power(2, N * M - K), MOD - 2)) % MOD;

    std::cout << ans << std::endl;

    return 0;
}