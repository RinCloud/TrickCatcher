#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    string s;
    cin >> N >> K >> s;

    vector<vector<int>> dp(K + 1, vector<int>(N + 1));
    dp[0][0] = 1;

    for (int i = 1; i <= K; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= j; k++) {
                if (s[i - 1] == 'r' && k > 0)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
                if (s[i - 1] == 'b' && k == 0)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
            }
        }
    }

    cout << dp[K][N] << endl;

    return 0;
}