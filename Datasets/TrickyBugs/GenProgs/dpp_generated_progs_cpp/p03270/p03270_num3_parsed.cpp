#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int K, N;
    std::cin >> K >> N;

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(2 * K + 1, 0));
    dp[0][0] = 1;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= 2 * K; j++) {
            int sum = 0;
            for (int k = 1; k <= K; k++) {
                if (j - k >= 0 && j - k <= 2 * K) {
                    sum = (sum + dp[i][j - k]) % MOD;
                }
            }
            dp[i + 1][j] = (sum - dp[i][j] + MOD) % MOD;
        }
    }

    for (int i = 1; i <= 2 * K - 1; i++) {
        std::cout << dp[N][i] << std::endl;
    }

    return 0;
}