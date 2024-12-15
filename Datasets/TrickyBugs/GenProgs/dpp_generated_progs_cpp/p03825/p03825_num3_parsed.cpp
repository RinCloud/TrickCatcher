#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000007

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    // Compute the number of different possible values
    // taken by the rational number
    vector<vector<long long>> dp(N + 1, vector<long long>(M + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i > 0) {
                dp[i][j] += dp[i - 1][j];
                dp[i][j] %= MOD;
            }
            if (j > 0) {
                dp[i][j] += dp[i][j - 1];
                dp[i][j] %= MOD;
            }
        }
    }

    // Compute the number of possible groups
    int groups = (N + M - 1) / (K - 1);

    // Compute the answer
    long long ans = dp[N][M];
    for (int i = 0; i < groups; i++) {
        ans *= K;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}