#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }
    
    vector<vector<int>> dp(N+1, vector<int>(2, 0));
    dp[0][0] = dp[0][1] = 1;
    
    for (int i = 1; i <= N; i++) {
        int min_h = min(h[i-1], h[i]);
        for (int j = 0; j <= min_h; j++) {
            dp[i][0] += dp[i-1][1];
            dp[i][1] += dp[i-1][0];
            dp[i][0] %= MOD;
            dp[i][1] %= MOD;
        }
    }
    
    cout << (dp[N][0] + dp[N][1]) % MOD << endl;
    
    return 0;
}