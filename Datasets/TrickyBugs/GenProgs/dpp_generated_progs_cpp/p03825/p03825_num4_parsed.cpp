#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            for (int k = 1; k <= K - 1 && k <= i; k++) {
                dp[i][j] = (dp[i][j] + dp[i - k][j + 1]) % MOD;
            }
        }
    }

    for (int j = 1; j <= M; j++) {
        for (int k = 1; k <= K - 1 && k <= N; k++) {
            dp[N][j] = (dp[N][j] + dp[N - k][j - 1]) % MOD;
        }
    }

    int result = 0;
    for (int j = 0; j <= M; j++) {
        result = (result + dp[N][j]) % MOD;
    }

    cout << result << endl;

    return 0;
}