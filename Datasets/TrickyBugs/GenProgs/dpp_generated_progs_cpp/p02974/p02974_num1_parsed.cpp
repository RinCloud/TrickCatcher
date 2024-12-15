#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> dp(n+1, vector<int>(k+1));

    dp[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= k; ++j) {
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if (j >= i) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-i]) % MOD;
            }
        }
    }

    cout << dp[n][k] << endl;

    return 0;
}