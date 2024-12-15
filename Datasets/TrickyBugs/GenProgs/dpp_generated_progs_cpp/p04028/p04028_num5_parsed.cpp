#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N;
    std::string s;
    std::cin >> N >> s;

    int M = s.length();

    // Create a table to store the number of ways for each length of string
    std::vector<std::vector<int>> dp(N+1, std::vector<int>(M+1, 0));

    // Initialize the table
    dp[0][0] = 1;

    // Calculate the number of ways for each length of string
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (j > 0) {
                dp[i][j] = dp[i][j-1];
            }
            if (s[j] == '0') {
                dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            }
            if (s[j] == '1') {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
            }
        }
    }

    // Print the result
    std::cout << dp[N][M] << std::endl;

    return 0;
}