#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dp(N + 1, vector<long long>(M + 1));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            dp[i][j] = (dp[i - 1][j] * (2 * j + 1)) % MOD;

            if (j >= 1) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1] * (i - j)) % MOD;
            }
        }
    }

    cout << dp[N][M] << endl;

    return 0;
}