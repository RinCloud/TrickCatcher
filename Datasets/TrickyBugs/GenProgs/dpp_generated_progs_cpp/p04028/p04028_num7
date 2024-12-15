#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string s;
    cin >> N >> s;
    int mod = 1000000007;
    int dp[N+1][s.size()+1];
    
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= s.size(); j++) {
            if(i > 0) {
                dp[i][j] += dp[i-1][j];
            }
            if(j > 0 && i - j >= 0) {
                dp[i][j] += dp[i-j][j-1];
            }
            dp[i][j] %= mod;
        }
    }
    
    cout << dp[N][s.size()] << "\n";
    
    return 0;
}