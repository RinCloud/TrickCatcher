#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> dp(M+1, std::vector<int>(N+1, 0));
    dp[0][N] = 1;

    for (int i = 1; i <= M; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= j; k++) {
                dp[i][j-k] = (dp[i][j-k] + dp[i-1][j]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= N; i++) {
        ans = (ans + dp[M][i]) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}