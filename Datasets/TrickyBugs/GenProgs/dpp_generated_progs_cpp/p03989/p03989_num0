#include <iostream>
#include <vector>

using namespace std;

const int MOD = 924844033;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(N + 1, vector<int>(N + 1));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        vector<int> sum(i + 2);
        sum[0] = dp[i - 1][0];
        for (int j = 1; j <= i; j++) {
            sum[j] = (sum[j - 1] + dp[i - 1][j]) % MOD;
        }
        for (int j = 0; j <= i; j++) {
            dp[i][j] = (sum[j] - sum[max(j - K - 1, 0)]) % MOD;
        }
    }

    int answer = 0;
    for (int i = 0; i <= N; i++) {
        answer = (answer + dp[N][i]) % MOD;
    }

    cout << answer << endl;

    return 0;
}