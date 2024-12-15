#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= K; j++) {
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD;
        }
    }

    int result = 0;
    for (int k = 0; k <= K; k++) {
        result = (result + dp[N][k]) % MOD;
    }

    cout << result << endl;

    return 0;
}