#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= K; i++) {
        int cnt = 0;
        for (int j = 0; j <= N; j++) {
            cnt = (cnt + dp[i - 1][j]) % MOD;
            dp[i][j] = cnt;
            if (j >= i) {
                cnt = (cnt - dp[i - 1][j - i] + MOD) % MOD;
            }
        }
    }

    for (int i = 1; i <= K; i++) {
        cout << dp[i][N] << endl;
    }

    return 0;
}