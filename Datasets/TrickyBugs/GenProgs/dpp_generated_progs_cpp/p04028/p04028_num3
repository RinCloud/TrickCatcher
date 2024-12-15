#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    
    vector<vector<int>> dp(N+1, vector<int>(s.size()+1, 0));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= s.size(); j++) {
            dp[i][j] = dp[i-1][j] * 2 % mod;
            
            if (j > 0 && s[j-1] == '0') {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % mod;
            }
            
            if (j < s.size() && s[j] == '1') {
                dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % mod;
            }
        }
    }
    
    cout << dp[N][0] << endl;
    
    return 0;
}