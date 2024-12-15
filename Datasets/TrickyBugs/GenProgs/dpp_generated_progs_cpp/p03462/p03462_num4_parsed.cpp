#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int numOfSequences(int N, int K, string s) {
    int dp[N+1][N+1][K+1][2];
    memset(dp, 0, sizeof(dp));

    // base case
    dp[0][0][0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= K; k++) {
                for (int l = 0; l < 2; l++) {
                    if (s[k-1] == 'r') {
                        dp[i][j][k][l] = (dp[i][j][k][l] + dp[i-1][j][k-1][l]) % MOD;
                        dp[i][j][k][1] = (dp[i][j][k][1] + dp[i-1][j][k-1][l]) % MOD;
                        if (j > 0)
                            dp[i][j][k][0] = (dp[i][j][k][0] + dp[i-1][j-1][k-1][l]) % MOD;
                    }
                    else {
                        dp[i][j][k][l] = (dp[i][j][k][l] + dp[i-1][j][k-1][l]) % MOD;
                        dp[i][j][k][1] = (dp[i][j][k][1] + dp[i-1][j][k-1][l]) % MOD;
                        if (j > 0)
                            dp[i][j][k][1] = (dp[i][j][k][1] + dp[i-1][j-1][k-1][l]) % MOD;
                    }
                }
            }
        }
    }

    int ans = 0;
    for (int l = 0; l < 2; l++) {
        ans = (ans + dp[N][N][K][l]) % MOD;
    }

    return ans;
}

int main() {
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;

    int result = numOfSequences(N, K, s);
    cout << result << endl;

    return 0;
}