#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N, K;
    std::cin >> N >> K;
    std::string s;
    std::cin >> s;

    std::vector<std::vector<int>> dp(K + 1, std::vector<int>(N + 1));
    dp[0][0] = 1;

    for (int i = 0; i < K; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= j; k++) {
                if (s[i] == 'r') {
                    dp[i + 1][j] += dp[i][j - k];
                    dp[i + 1][j] %= MOD;
                } else if (s[i] == 'b') {
                    dp[i + 1][k] += dp[i][j - k];
                    dp[i + 1][k] %= MOD;
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= N; i++) {
        ans += dp[K][i];
        ans %= MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}