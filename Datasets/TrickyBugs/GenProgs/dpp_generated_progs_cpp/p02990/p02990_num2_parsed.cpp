#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<long long>> dp(N + 1, vector<long long>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= min(K, i); j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }

    for (int i = 1; i <= K; i++) {
        cout << dp[N - K][i] << endl;
    }

    return 0;
}
