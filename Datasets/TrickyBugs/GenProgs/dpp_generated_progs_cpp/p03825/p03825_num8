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
            for (int k = 1; k < K; k++) {
                if (i + j - k >= 0) {
                    dp[i][j] = (dp[i][j] + dp[i - (k - 1)][j - k]) % MOD;
                }
            }
        }
    }

    cout << dp[N][M] << endl;

    return 0;
}