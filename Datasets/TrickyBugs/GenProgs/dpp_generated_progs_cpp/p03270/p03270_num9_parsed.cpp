#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int K, N;
    std::cin >> K >> N;

    std::vector<int> dp(2 * K, 0);
    dp[0] = 1;

    for (int n = 0; n < N; ++n) {
        std::vector<int> new_dp(2 * K, 0);
        for (int i = 0; i <= 2 * K - 2; ++i) {
            if (dp[i] > 0) {
                for (int j = 1; j <= K; ++j) {
                    int diff = i + j;
                    if (diff <= 2 * K - 1) {
                        new_dp[diff] += dp[i];
                        new_dp[diff] %= MOD;
                    }
                }
            }
        }
        dp = new_dp;
    }

    for (int i = 1; i <= 2 * K - 1; ++i) {
        std::cout << dp[i] << std::endl;
    }

    return 0;
}