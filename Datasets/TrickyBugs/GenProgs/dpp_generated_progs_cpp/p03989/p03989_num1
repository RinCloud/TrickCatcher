#include <iostream>
#include <vector>
using namespace std;

const int MOD = 924844033;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<vector<int>> dp(N+1, vector<int>(N+1, 0));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        dp[i][0] = dp[i-1][0];
        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD;
        }
    }
    
    int ans = 0;
    for (int i = 0; i <= N; i++) {
        if (i % 2 == N % 2) {
            ans = (ans + dp[N][i]) % MOD;
        } else {
            ans = (ans - dp[N][i] + MOD) % MOD;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}