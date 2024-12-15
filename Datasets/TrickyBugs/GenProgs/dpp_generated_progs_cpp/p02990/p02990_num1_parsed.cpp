#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<std::vector<int>> dp(K + 1, std::vector<int>(N + 1, 0));

    for (int i = 1; i <= N; i++) {
        dp[1][i] = 1;
    }

    for (int i = 1; i <= K; i++) {
        for (int j = i; j <= N; j++) {
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j - 1]) % MOD;
        }
    }

    for (int i = 1; i <= K; i++) {
        std::cout << dp[i][N] << std::endl;
    }

    return 0;
}