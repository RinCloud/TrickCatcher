#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    
    int len = s.size();
    
    // dp[i][j] represents the number of ways to press the keys i times 
    // in total such that the editor displays the string s.substr(0, j)
    vector<vector<int>> dp(N+1, vector<int>(len+1));
    
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= len; j++) {
            if (j > 0 && s[j-1] == '0') {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
            }
            if (j < len && s[j] == '1') {
                dp[i][j+1] = (dp[i][j+1] + dp[i-1][j]) % MOD;
            }
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
        }
    }
    
    cout << dp[N][len] << endl;
    
    return 0;
}