#include <iostream>
#include <vector>
#define MOD 1000000007

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;
    
    vector<vector<long long>> dp(K+1, vector<long long>(N+1, 0));

    dp[0][0] = 1;
    
    for (int i = 1; i <= K; i++) {
        for (int j = 0; j <= N; j++) {
            if (j > 0 && s[i-1] == 'b') {
                dp[i][j] = dp[i-1][j-1];
            }
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if (s[i-1] == 'r') {
                dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % MOD;
            }
        }
    }

    cout << dp[K][0] << endl;
    
    return 0;
}