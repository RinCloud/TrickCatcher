#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int K, N;
    cin >> K >> N;

    vector<vector<int>> dp(N+1, vector<int>(K*N+1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K*N; j++) {
            for (int k = 1; k <= K && k <= j; k++) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-k]) % MOD;
            }
        }
    }

    for (int i = 2; i <= 2*K; i++) {
        int ans = 0;
        for (int j = 0; j <= N; j++) {
            ans = (ans + dp[j][i]) % MOD;
        }
        cout << ans << endl;
    }

    return 0;
}