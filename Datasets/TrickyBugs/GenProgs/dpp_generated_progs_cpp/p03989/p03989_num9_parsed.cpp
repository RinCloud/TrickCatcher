#include <iostream>
#include <vector>

const int MOD = 924844033;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(N + 1, 0));

    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = dp[i - 1][0];

        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;

            if (j >= K) {
                dp[i][j] = (dp[i][j] - dp[i - K][j - K] + MOD) % MOD;
            }
        }
    }

    std::cout << dp[N][N] << std::endl;

    return 0;
}