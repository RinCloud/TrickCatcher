#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<vector<int>> dp(N+1, vector<int>(N+1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            // Choose A consecutive characters and replace with 0
            if (j >= A) {
                dp[i][j] += dp[i - A][j - A];
            }
            // Choose B consecutive characters and replace with 1
            if (j >= B) {
                dp[i][j] += dp[i - B][j - B];
            }
            dp[i][j] %= MOD;

            // Incrementally compute the number of different strings
            if (j > 0) {
                dp[i][j] += dp[i][j - 1];
                dp[i][j] %= MOD;
            }
        }
    }

    cout << dp[N][N] << endl;

    return 0;
}