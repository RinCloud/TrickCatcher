#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;

    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));

    // Base case: when K = 0, there is only one possible sequence of colors
    dp[0][0] = 1;

    for (int i = 1; i <= K; i++) {
        // Compute the cumulative sum of dp[i-1] to handle ranges of white balls
        vector<int> cum_sum(N + 1, 0);
        cum_sum[0] = dp[i-1][0];
        for (int j = 1; j <= N; j++) {
            cum_sum[j] = (cum_sum[j-1] + dp[i-1][j]) % MOD;
        }

        for (int j = 0; j <= N; j++) {
            // Case 1: Paint a red segment, the segment can be empty or a range of white balls
            dp[i][j] = (dp[i][j] + cum_sum[j]) % MOD;

            // Case 2: Paint a blue segment, the segment must not contain a white ball
            dp[i][j] = (dp[i][j] + (cum_sum[N] - cum_sum[j] + MOD) % MOD) % MOD;
        }
    }

    cout << dp[K][N] << endl;

    return 0;
}