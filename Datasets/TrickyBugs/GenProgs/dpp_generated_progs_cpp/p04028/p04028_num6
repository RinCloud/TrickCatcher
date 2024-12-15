#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    string s;
    cin >> N >> s;
    
    int S = s.size();
    
    // Initialize the dp table
    vector<vector<int>> dp(N+1, vector<int>(S+1, 0));
    
    // There is always one way to press the keys 0 times and display an empty string
    dp[0][0] = 1;
    
    // Iterating over the number of key presses
    for (int i = 1; i <= N; i++) {
        // Iterating over the length of the displayed string
        for (int j = 0; j <= S; j++) {
            // We can either press 0 or 1
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            dp[i][j+1] = (dp[i][j+1] + dp[i-1][j]) % MOD;
            
            // If the displayed string is non-empty, we can press backspace to delete the rightmost character
            if (j > 0 && s[j-1] == '0') {
                dp[i][j-1] = (dp[i][j-1] + dp[i-1][j]) % MOD;
            }
            
            // If the displayed string is non-empty, we can press backspace to delete the rightmost character
            if (j > 0 && s[j-1] == '1') {
                dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            }
        }
    }
    
    // The answer is the number of ways to press the keys N times and display the string s
    int ans = dp[N][0];
    cout << ans << endl;
    
    return 0;
}