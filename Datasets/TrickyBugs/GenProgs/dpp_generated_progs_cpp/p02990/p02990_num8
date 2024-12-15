#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9+7;

int main() {
    int N, K;
    cin >> N >> K;

    // dynamic programming table
    vector<vector<int>> dp(K+1, vector<int>(N+1, 0));

    for (int i = 1; i <= N; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= j; k++) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-k]) % MOD;
            }
        }
    }

    for (int i = 1; i <= K; i++) {
        cout << dp[i][N] << endl;
    }

    return 0;
}