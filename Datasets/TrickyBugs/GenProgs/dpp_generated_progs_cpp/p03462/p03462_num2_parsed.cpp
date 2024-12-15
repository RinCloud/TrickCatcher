#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            dp[i][j] = (2 * dp[i - 1][j]) % MOD;  // Leave the current ball white

            if (j > 0) {
                if (s[j - 1] == 'r') {
                    for (int k = j; k <= K; k++) {
                        dp[i][k] = (dp[i][k] + dp[i - 1][j - 1]) % MOD;  // Color the previous segment red
                    }
                } else {
                    for (int k = 0; k < j; k++) {
                        dp[i][k] = (dp[i][k] + dp[i - 1][j - 1]) % MOD;  // Color the previous segment blue
                    }
                }
            }
        }
    }

    int result = 0;
    for (int j = 0; j <= K; j++) {
        result = (result + dp[N][j]) % MOD;
    }

    cout << result << endl;

    return 0;
}