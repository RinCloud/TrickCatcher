#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(N + 1, vector<int>(K + 1));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if (j >= i) {
                dp[i][j] = (dp[i][j] + dp[i][j - i]) % MOD;
            }
        }
    }

    cout << dp[N][K] << endl;

    return 0;
}