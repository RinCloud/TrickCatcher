#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<long long> nums(N + 1);

    long long base = 1;
    for (int i = 0; i <= N; i++) {
        nums[i] = base;
        base *= 10;
        base %= MOD;
    }

    std::vector<std::vector<long long>> dp(N + 1, std::vector<long long>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
            }
        }
    }

    long long result = 0;
    for (int j = 0; j <= K; j++) {
        result = (result + dp[N][j]) % MOD;
    }

    std::cout << result << std::endl;

    return 0;
}