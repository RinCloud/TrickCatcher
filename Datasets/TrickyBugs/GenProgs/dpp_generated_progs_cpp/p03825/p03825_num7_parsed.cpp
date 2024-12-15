#include <iostream>
#include <vector>
using namespace std;

const int mod = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<long long>> dp(N + 1, vector<long long>(M + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i > 0) {
                dp[i][j] += dp[i - 1][j] * j % mod;
                dp[i][j] %= mod;
            }
            if (j > 0) {
                dp[i][j] += dp[i][j - 1] * i % mod;
                dp[i][j] %= mod;
            }
        }
    }

    long long ans = dp[N - 1][M] * M + dp[N][M - 1] * N;
    ans %= mod;

    cout << ans << endl;

    return 0;
}