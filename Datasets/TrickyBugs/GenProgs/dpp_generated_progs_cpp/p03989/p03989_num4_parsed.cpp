#include <iostream>
#include <vector>
using namespace std;

const int MOD = 924844033;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j] + (j > 0 ? dp[i - 1][j - 1] : 0)) % MOD;
            if (j + K + 1 <= N) {
                dp[i][j + K + 1] = (dp[i][j + K + 1] - dp[i - 1][j] + MOD) % MOD;
            }
        }
    }

    int answer = 0;
    for (int i = 0; i <= N; i++) {
        answer = (answer + dp[N][i]) % MOD;
    }

    cout << answer << endl;

    return 0;
}