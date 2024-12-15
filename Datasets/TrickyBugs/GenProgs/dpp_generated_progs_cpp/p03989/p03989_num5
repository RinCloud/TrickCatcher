#include <iostream>
#include <vector>

using namespace std;

const int MOD = 924844033;

int main() {
    int N, K;
    cin >> N >> K;

    // Initialize the DP table
    vector<vector<int>> dp(N+1, vector<int>(N+1, 0));
    dp[0][0] = 1;

    // Construct the DP table
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j < i) {
                dp[i][j] = (dp[i][j] + dp[i-1][j] * (i-j)) % MOD;
            }
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1] * (j+1)) % MOD;
            }
        }
    }

    // Calculate the answer
    int ans = 0;
    for (int i = 0; i <= N; i++) {
        ans = (ans + dp[N][i]) % MOD;
    }

    cout << ans << endl;

    return 0;
}