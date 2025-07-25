#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<vector<long long>> dp(N+1, vector<long long>(M+1, 0));
    
    dp[0][0] = 1;
    
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            for (int k = 0; k <= K; k++) {
                if (i+j+k == 0) continue;
                
                if (i > 0 && k > 0) {
                    dp[i][j] += dp[i-1][j] * dp[i][j] % MOD;
                }
                
                if (j > 0 && i > 0) {
                    dp[i][j] += dp[i][j-1] * dp[i][j] % MOD;
                }
                
                if (k > 0 && j > 0) {
                    dp[i][j] += dp[i][j] * dp[i][j] % MOD;
                }
                
                dp[i][j] %= MOD;
            }
        }
    }
    
    cout << dp[N][M] << endl;
    
    return 0;
}
