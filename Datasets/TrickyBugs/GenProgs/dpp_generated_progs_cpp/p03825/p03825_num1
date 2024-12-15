#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 1000000007;

int main() {
    int N, M, K;
    std::cin >> N >> M >> K;

    // Calculate (N+M choose K-1)
    std::vector<std::vector<int>> dp(N + M, std::vector<int>(K, 0));
    dp[0][0] = 1;
    for (int i = 1; i < N + M; i++) {
        dp[i][0] = 1;
        for (int j = 1; j < K; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
        }
    }
    int combinations = dp[N + M - 1][K - 1];

    // Calculate the number of possible values modulo MOD
    std::vector<int> values(K, 0);
    for (int i = 0; i < K; i++) {
        for (int j = 0; j <= std::min(i, N); j++) {
            int k = i - j;
            if (k <= M) {
                values[i] = (values[i] + (1LL * dp[N][j] * dp[M][k]) % MOD) % MOD;
            }
        }
    }

    // Calculate the final answer modulo MOD
    int answer = 0;
    for (int i = 0; i < K; i++) {
        answer = (answer + (1LL * values[i] * combinations) % MOD) % MOD;
    }

    std::cout << answer << std::endl;

    return 0;
}