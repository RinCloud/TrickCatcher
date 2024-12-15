#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

int main() {
    int N;
    string s;
    cin >> N >> s;
    
    int M = s.size();
    
    // Define a 2D vector to store the dynamic programming results
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    
    // Initial values
    dp[0][0] = 1;
    
    // Dynamic programming
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            // Add 0 to the right of the string
            dp[i][j] += dp[i - 1][j];
            dp[i][j] %= MOD;
            
            // Add 1 to the right of the string
            if (j > 0) {
                dp[i][j] += dp[i - 1][j - 1];
                dp[i][j] %= MOD;
            }
            
            // Delete the rightmost letter of the string
            dp[i][j] += dp[i - 1][j + 1];
            dp[i][j] %= MOD;
        }
    }
    
    // Print the result
    cout << dp[N][0] << endl;
    
    return 0;
}