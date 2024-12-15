#include <iostream>
#include <vector>
using namespace std;

const int MOD = 924844033;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<long long>> dp(N + 1, vector<long long>(N + 1));

    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = dp[i - 1][0];
        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i - 1][j] * (i - 1) % MOD + dp[i - 1][j - 1]) % MOD;
        }
    }

    vector<long long> fact(N + 1, 1);
    for (int i = 1; i <= N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }

    long long ans = 0;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (abs(i - j) != K) {
                ans = (ans + dp[N][i] * dp[N][j]) % MOD;
            }
        }
    }

    cout << ans << endl;

    return 0;
}