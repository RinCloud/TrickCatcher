#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    string s;
    cin >> N >> K >> s;

    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < K; i++) {
        vector<int> sum(N + 1, 0);
        sum[N] = dp[i][N];
        for (int j = N - 1; j >= 0; j--) {
            sum[j] = (sum[j + 1] + dp[i][j]) % MOD;
        }

        if (s[i] == 'r' || s[i] == 'b') {
            int color = (s[i] == 'r') ? 0 : 1;
            for (int j = 1; j <= N; j++) {
                dp[i + 1][j] = sum[j] - sum[j - 1];
                if (dp[i + 1][j] < 0) dp[i + 1][j] += MOD;
                dp[i + 1][j] = (dp[i + 1][j] + dp[i + 1][j - 1]) % MOD;
                if (j >= 2) {
                    dp[i + 1][j] = (dp[i + 1][j] + dp[i][j - 2]) % MOD;
                }
            }
        } else {
            for (int j = 1; j <= N; j++) {
                dp[i + 1][j] = sum[j];
            }
        }
    }

    cout << dp[K][N] << endl;

    return 0;
}