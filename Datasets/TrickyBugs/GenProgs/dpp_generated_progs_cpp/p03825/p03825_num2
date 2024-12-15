#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(M + 1, vector<int>(K, 0)));
    dp[0][0][0] = 1;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            for (int l = 0; l < K; l++) {
                if (i < N) {
                    dp[i + 1][j][l] = (dp[i + 1][j][l] + dp[i][j][l]) % MOD;
                    dp[i + 1][j][l] = (dp[i + 1][j][l] + dp[i][j][l] * (l + 1)) % MOD;
                }
                if (j < M) {
                    dp[i][j + 1][(l + 1) % K] = (dp[i][j + 1][(l + 1) % K] + dp[i][j][l]) % MOD;
                    dp[i][j + 1][(l + 1) % K] = (dp[i][j + 1][(l + 1) % K] + dp[i][j][l] * (l + 1)) % MOD;
                }
            }
        }
    }

    cout << dp[N][M][0] << endl;

    return 0;
}