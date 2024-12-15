#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    string s;
    cin >> s;
    
    vector<int> l(m), r(m);
    for (int i = 0; i < m; i++) {
        cin >> l[i] >> r[i];
    }
    
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    dp[0][0] = 1;
    
    for (int i = 1; i <= m; i++) {
        vector<int> cnt(n + 1, 0);
        vector<int> sum(n + 1, 0);
        
        for (int j = 1; j <= n; j++) {
            cnt[j] = (cnt[j - 1] + dp[i - 1][j - 1]) % MOD;
            sum[j] = (sum[j - 1] + cnt[j]) % MOD;
        }
        
        for (int j = 1; j <= n; j++) {
            dp[i][j] = (sum[r[i - 1]] - sum[l[i - 1] - 1] + MOD) % MOD;
        }
    }
    
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + dp[m][i]) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}