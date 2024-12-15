#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> values(N + 1);
    for (int i = 0; i <= N; i++) {
        values[i] = (1e100 + i) % MOD;
    }

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1] * (i - 1)) % MOD;
            if (j > 0) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
            }
        }
    }

    int result = 0;
    for (int j = K; j <= N; j++) {
        result = (result + dp[N][j]) % MOD;
    }

    cout << result << endl;

    return 0;
}