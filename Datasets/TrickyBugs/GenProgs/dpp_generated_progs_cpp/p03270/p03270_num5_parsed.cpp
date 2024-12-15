#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    int K, N;
    cin >> K >> N;

    vector<vector<long long>> dp(N+1, vector<long long>(2*K, 0));

    for(int j=1; j<=K; j++) {
        dp[1][j] = 1;
    }

    for(int i=2; i<=N; i++) {
        for(int j=2; j<=2*K; j++) {
            dp[i][j] = dp[i][j-1] + dp[i-1][j-K] - dp[i-1][j];
            if(dp[i][j] < 0) dp[i][j] += MOD;
            dp[i][j] %= MOD;
        }
    }

    for(int i=2; i<=2*K; i++) {
        cout << dp[N][i] << "\n";
    }

    return 0;
}