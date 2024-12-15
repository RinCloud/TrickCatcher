#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    string s;
    cin >> N >> s;
    
    // dp[i][j] represents the number of ways to press the keys i times and get the string s[0..j]
    vector<vector<int>> dp(N+1, vector<int>(s.size()+1, 0));
    
    // Base case: when i = 0, there is only one way to get an empty string
    dp[0][0] = 1;
    
    // Fill the dp table using dynamic programming
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= s.size(); j++) {
            // Start with the previous possible strings
            dp[i][j] = dp[i-1][j];
            
            // If the current key is '0', we append '0' to all previous strings
            if (s[j] == '0') {
                dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            }
            
            // If the current key is '1', we append '1' to all previous strings
            if (s[j] == '1') {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
            }
            
            // If the current key is backspace and there is at least one character in the previous string
            if (s[j] == 'b' && j > 0) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
            }
        }
    }
    
    // The result will be the number of ways to press the keys N times and get the string s
    int result = dp[N][s.size()];
    
    cout << result << endl;
    
    return 0;
}