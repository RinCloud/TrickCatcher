#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int K, N;
    std::cin >> K >> N;

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(2 * K + 1));
    dp[0][K] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 2; j <= 2 * K; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j - 2] - dp[i - 1][j]) % MOD;
            if (dp[i][j] < 0)
                dp[i][j] += MOD;
        }
        for (int j = 2; j <= 2 * K; j++)
            dp[i][j] = (dp[i][j] + dp[i][j - 2]) % MOD;
    }

    for (int i = 2; i <= 2 * K; i++)
        std::cout << dp[N][i] << std::endl;

    return 0;
}