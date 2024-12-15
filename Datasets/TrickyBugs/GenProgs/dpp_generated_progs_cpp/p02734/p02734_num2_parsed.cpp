#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, S;
    cin >> N >> S;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<vector<int>> dp(N+1, vector<int>(S+1));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= A[i-1]) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-A[i-1]]) % MOD;
            }
        }
    }
    
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            ans = (ans + dp[j][S]) % MOD;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}