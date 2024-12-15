#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

int main() {
    int N, K, P;
    cin >> N >> K >> P;

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            if (i == 1) {
                dp[i][j] = j;
            } else if (i == 2) {
                dp[i][j] = j * (j - 1);
            } else {
                for (int k = 1; k <= j; k++) {
                    dp[i][j] += (dp[i - 1][k] * (j - k)) % MOD;
                    dp[i][j] %= MOD;
                }
            }
        }
    }

    int ans = dp[N][K];
    for (int i = 2; i <= N; i++) {
        ans = (ans * i) % MOD;
    }

    cout << ans << endl;

    return 0;
}
