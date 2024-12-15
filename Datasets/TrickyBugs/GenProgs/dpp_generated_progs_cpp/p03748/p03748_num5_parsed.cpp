#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    // Read input
    int N, M;
    std::cin >> N >> M;

    // Initialize dp table
    std::vector<std::vector<long long>> dp(M + 1, std::vector<long long>(N + 1, 0));

    // Base case
    dp[0][0] = 1;

    // Dynamic programming
    for (int i = 1; i <= M; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j] + dp[i - 1][j]) % MOD; // Same color bricks
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD; // Different color bricks
            }
            if (j < N) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD; // Different color bricks
            }
        }
    }

    // Calculate the count of possible sequences
    long long count = 0;
    for (int j = 0; j <= N; j++) {
        count = (count + dp[M][j]) % MOD;
    }

    // Print the result
    std::cout << count << std::endl;

    return 0;
}