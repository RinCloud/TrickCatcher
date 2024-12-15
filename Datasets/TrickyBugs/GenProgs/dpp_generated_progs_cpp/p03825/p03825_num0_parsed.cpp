#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    dp[0][0] = 1;
    
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i > 0 && j >= K - 1) {
                dp[i][j] += dp[i - 1][j - (K - 1)];
                dp[i][j] %= MOD;
            }
            if (j > 0 && i >= K - 1) {
                dp[i][j] += dp[i - (K - 1)][j - 1];
                dp[i][j] %= MOD;
            }
        }
    }
    
    int ans = 0;
    for (int i = 0; i <= N; i++) {
        ans = (ans + dp[i][M]) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}