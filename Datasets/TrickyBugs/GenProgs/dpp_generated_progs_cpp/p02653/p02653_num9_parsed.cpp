#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (i + j == 0) continue;

            if (i >= A) {
                dp[i][j] += dp[i - A][j];
            }
            if (j >= B) {
                dp[i][j] += dp[i][j - B];
            }
            dp[i][j] %= MOD;
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans = (ans + dp[i][N - i]) % MOD;
    }

    cout << ans << endl;

    return 0;
}