#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    // Initialize dp table
    int dp[K + 1][N + 1];
    memset(dp, 0, sizeof(dp));

    // Base case
    dp[0][0] = 1;

    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            // If j is greater than N/i, set dp[i][j] to dp[i-1][j]
            if (j > N / i) {
                dp[i][j] = dp[i - 1][j];
            }
            // Otherwise, calculate dp[i][j] using recurrence relation
            else {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    // Print the result
    cout << dp[K][N] << endl;

    return 0;
}