#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dp(M + 1, vector<long long>(N + 1));

    for (int i = 0; i <= N; i++) {
        dp[0][i] = 1;
    }

    for (int i = 1; i <= M; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= j; k++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][k] * dp[i - 1][j - k]) % MOD;
            }
        }
    }

    cout << dp[M][N] << endl;

    return 0;
}