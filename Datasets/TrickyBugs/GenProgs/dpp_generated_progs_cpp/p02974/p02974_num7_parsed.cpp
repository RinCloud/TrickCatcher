#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;

    // Dynamic programming array to store the number of permutations of oddness 'k' for every 'n'
    // dp[i][j] represents the number of permutations of oddness 'j' for the first 'i' elements
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // Base case: For the first element, there is only one permutation (oddness 0 or k)
    dp[1][0] = 1;
    dp[1][1] = 1;

    for (int i = 2; i <= n; i++) {
        // Iterate through all possible oddness values for the current 'i'
        for (int j = 0; j <= k; j++) {
            // Calculate the oddness of the current element
            int oddness = abs(i - 1);

            // For each oddness value, add the number of permutations with oddness 'j-oddness' for the previous 'i-1' elements
            for (int prevJ = 0; prevJ <= j - oddness; prevJ++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][prevJ]) % MOD;
            }
        }
    }

    // The final result will be stored in dp[n][k], which represents the number of permutations of oddness 'k' for all 'n' elements
    cout << dp[n][k] << endl;

    return 0;
}