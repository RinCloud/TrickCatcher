#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int K, N;
    std::cin >> K >> N;
  
    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(2 * K + 1, 0));
  
    // Initialize the base case
    dp[0][K] = 1;
  
    // Iterate over all the dice throws
    for (int i = 1; i <= N; i++) {
        // Iterate over all the possible sums
        for (int j = 2; j <= 2 * K; j++) {
            // Calculate the number of combinations
            for (int k = 1; k <= K; k++) {
                if (j - k >= 1 && j - k <= 2 * K) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
                }
            }
        }
    }
  
    // Print the results
    for (int i = 2; i <= 2 * K; i++) {
        std::cout << dp[N][i] << std::endl;
    }
  
    return 0;
}