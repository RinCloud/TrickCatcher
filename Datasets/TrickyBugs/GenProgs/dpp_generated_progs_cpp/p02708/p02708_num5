#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> nums(N+1);
    for (int i = 0; i <= N; ++i) {
        nums[i] = (int)(1e100) + i;
    }

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(K + 1));
    dp[0][0] = 1;

    std::vector<int> prefix(K + 1);
    for (int i = 1; i <= K; ++i) {
        prefix[i] = (prefix[i - 1] + i) % MOD;
    }

    for (int i = 1; i <= N; ++i) {
        dp[i][0] = 1;
        dp[i][1] = dp[i - 1][1] + i;
        dp[i][1] %= MOD;
        for (int j = 2; j <= K; ++j) {
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j] + prefix[j - 1]) % MOD;
            dp[i][j] -= prefix[j - 2];

            if (dp[i][j] < 0) {
                dp[i][j] += MOD;
            }
        }
    }

    std::cout << dp[N][K] << std::endl;

    return 0;
}