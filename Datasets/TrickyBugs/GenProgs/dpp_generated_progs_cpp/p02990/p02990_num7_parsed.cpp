#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<std::vector<int>> dp(K + 1, std::vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j - 1]) % MOD;
            if (j > i) {
                dp[i][j] = (dp[i][j] - dp[i - 1][j - i - 1] + MOD) % MOD;
            }
        }
    }

    for (int i = 1; i <= K; i++) {
        std::cout << dp[i][N] << std::endl;
    }

    return 0;
}
