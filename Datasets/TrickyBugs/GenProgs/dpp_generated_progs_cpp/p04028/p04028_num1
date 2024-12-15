#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N;
    string s;
    cin >> N >> s;

    int M = s.size();
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));

    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j > 0 && s[j - 1] == '0') {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
            }
            if (j < M && s[j] == '1') {
                dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD;
            }
        }
    }

    int ways = dp[N][0];
    cout << ways << endl;

    return 0;
}