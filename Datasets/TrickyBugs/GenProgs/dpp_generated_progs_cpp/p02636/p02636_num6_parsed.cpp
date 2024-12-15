#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 998244353;

int main() {
    std::string S;
    std::cin >> S;

    int N = S.length();
    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(N + 1));

    // Initialize the dp array
    dp[0][0] = 1;

    // Dynamic programming
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            // Case 1: Use the i-th character as the rightmost character
            dp[i][j] = dp[i - 1][j];

            // Case 2: Use the i-th character as the leftmost character
            if (j >= 1 && S[i - 1] == '1') {
                dp[i][j] = (dp[i][j] + dp[i - 2][j - 1]) % MOD;
            }
        }
    }

    // Count the number of strings
    int numStrings = 0;
    for (int j = 0; j <= N; j++) {
        numStrings = (numStrings + dp[N][j]) % MOD;
    }

    std::cout << numStrings << std::endl;

    return 0;
}
