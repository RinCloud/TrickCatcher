#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int numWays(int N, string s) {
    int M = s.size();

    // Initialize dp table
    vector<vector<int>> dp(N + 1, vector<int>(M + 1));
    dp[0][0] = 1;

    // Fill the dp table
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (j > 0 && s[j-1] == '0') {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD;
            }
            if (j < M && s[j] == '1') {
                dp[i][j+1] = (dp[i][j+1] + dp[i-1][j]) % MOD;
            }
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
        }
    }

    // Sum up the final row of the dp table
    int result = 0;
    for (int j = 0; j <= M; j++) {
        result = (result + dp[N][j]) % MOD;
    }

    return result;
}

int main() {
    int N;
    string s;
    cin >> N >> s;

    int ans = numWays(N, s);
    cout << ans << endl;

    return 0;
}
