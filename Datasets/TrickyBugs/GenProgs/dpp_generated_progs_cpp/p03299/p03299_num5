#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    // Read input
    int N;
    cin >> N;
    
    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    
    // Initialize dynamic programming array
    vector<vector<int>> dp(N, vector<int>(2, 0));
    
    // Base case
    dp[0][0] = heights[0];
    dp[0][1] = 1;
    
    // Dynamic programming
    for (int i = 1; i < N; i++) {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD;
        dp[i][1] = (dp[i-1][0] * (heights[i] - 1) + dp[i-1][1] * heights[i]) % MOD;
    }
    
    // Print the result
    cout << (dp[N-1][0] + dp[N-1][1]) % MOD << endl;
    
    return 0;
}