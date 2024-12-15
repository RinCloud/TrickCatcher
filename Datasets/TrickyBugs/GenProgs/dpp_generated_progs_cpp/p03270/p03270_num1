#include <iostream>
#include <vector>
#include <cmath>

const int MOD = 998244353;

int main() {
    int K, N;
    std::cin >> K >> N;

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(2 * K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 2; j <= 2 * K; j++) {
            for (int k = std::max(0, j - K); k <= std::min(K, j - 1); k++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
            }
        }
    }

    for (int i = 2; i <= 2 * K; i++) {
        std::cout << dp[N][i] << std::endl;
    }

    return 0;
}