#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<long long>> dp(n + 1, vector<long long>(k + 1));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= k; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1] * (i - 1)) % MOD;
        }
    }

    cout << dp[n][k] << endl;

    return 0;
}