#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dp(N + 1, vector<long long>(M + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            dp[i][j] += (dp[i - 1][j - 1] + 2 * dp[i][j - 1]) % MOD;
            dp[i][j] %= MOD;
        }
    }

    cout << dp[N][M] << endl;

    return 0;
}