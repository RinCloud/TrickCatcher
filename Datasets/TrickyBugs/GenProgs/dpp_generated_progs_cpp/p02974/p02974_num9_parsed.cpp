#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;

    // Create a 2D DP table to store the number of permutations of oddness k
    // dp[i][j] represents the number of permutations of length i with oddness j
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // Base case: the number of permutations of length 1 with oddness 0 is 1
    dp[1][0] = 1;

    // Iterate over the length of permutation
    for (int i = 2; i <= n; i++) {
        // Iterate over the oddness value
        for (int j = 0; j <= k; j++) {
            // Calculate the number of permutations of length i with oddness j
            for (int p = 0; p <= i - 1; p++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - abs(i - p - 1)]) % MOD;
            }
        }
    }

    // Print the number of permutations of length n with oddness k
    cout << dp[n][k] << endl;

    return 0;
}