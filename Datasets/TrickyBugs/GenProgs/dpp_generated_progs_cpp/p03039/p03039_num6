#include <iostream>
#include <vector>

const int MOD = 1000000007;

// Compute the sum of costs for all possible arrangements of K pieces
int computeCost(int N, int M, int K) {
    std::vector<std::vector<int>> dp(N+1, std::vector<int>(M+1, 0));

    // Compute dp[i][j] which represents the number of ways to choose i*j squares and place K pieces on them
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= M; ++j) {
            // Base case: dp[i][j] = 1 when i*j is less than or equal to K
            if (i*j <= K) {
                dp[i][j] = 1;
            } else {
                // dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]
                dp[i][j] = (dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + MOD) % MOD;
            }
        }
    }

    // Compute the sum of costs for all possible arrangements of K pieces
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            // The cost for each arrangement is dp[i][j] * (N-i+1) * (M-j+1)
            sum = (sum + (long long)dp[i][j] * (N-i+1) * (M-j+1)) % MOD;
        }
    }

    return sum;
}

int main() {
    int N, M, K;
    std::cin >> N >> M >> K;

    int result = computeCost(N, M, K);
    std::cout << result << std::endl;

    return 0;
}