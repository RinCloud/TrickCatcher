#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;
    
    vector<vector<long long>> dp(N+1, vector<long long>(K+1));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            dp[i][j] += dp[i-1][j];
            dp[i][j] %= MOD;
            
            for (int k = 1; k <= i; k++) {
                if (s[i-1] == 'r') {
                    if (k <= j) {
                        dp[i][j] += dp[i-k][j-k+1];
                        dp[i][j] %= MOD;
                    }
                }
                else {
                    if (k-1 <= j) {
                        dp[i][j] += dp[i-k][j-(k-1)];
                        dp[i][j] %= MOD;
                    }
                }
            }
        }
    }
    
    cout << dp[N][K] << endl;
    
    return 0;
}