#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 998244353

using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.length();
    
    vector<vector<long long>> dp(n+1, vector<long long>(n+1, 0));
    dp[0][0] = 1;
    
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = i; j >= 0; j--) {
            if(S[i] == '0') {
                cnt++;
            } else {
                dp[i+1][j] = (dp[i+1][j] + dp[i][j+1]) % MOD;
            }
            dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % MOD;
            if(cnt == 0) {
                break;
            }
            cnt--;
        }
    }
    
    long long ans = 0;
    for(int i = 0; i <= n; i++) {
        ans = (ans + dp[n][i]) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}
