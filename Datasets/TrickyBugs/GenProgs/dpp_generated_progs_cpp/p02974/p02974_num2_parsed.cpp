#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;
    
    // Calculate the total number of permutations of n elements
    vector<int> factorial(n+1, 1);
    for (int i = 2; i <= n; i++) {
        factorial[i] = (factorial[i-1] * i) % MOD;
    }
    
    // Calculate the number of permutations with oddness k
    vector<vector<int>> dp(n+1, vector<int>(k+1));
    dp[0][0] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            for (int l = 0; l <= i; l++) {
                // Calculate the oddness of the current permutation
                int oddness = abs(i - l);
                
                // Check if the current permutation has the required oddness
                if (j >= oddness) {
                    dp[i][j] += dp[i-1][j-oddness];
                    dp[i][j] %= MOD;
                }
            }
        }
    }
    
    // Print the number of permutations with oddness k
    cout << dp[n][k] << endl;
    
    return 0;
}