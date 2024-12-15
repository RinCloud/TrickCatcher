#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, K, P;
    cin >> N >> K >> P;

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            // Number of graphs with i vertices and j in-degree <= K
            dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
 
            // Number of graphs with i vertices and j in-degree <= K,
            // where the last vertex has an additional out-edge
            dp[i][j] = (dp[i][j] + (i - 1) * dp[i - 1][j]) % MOD;
        }
    }

    int ans = 0;

    for (int j = 0; j <= K; j++) {
        ans = (ans + dp[N][j]) % MOD;
    }

    cout << ans << endl;

    return 0;
}