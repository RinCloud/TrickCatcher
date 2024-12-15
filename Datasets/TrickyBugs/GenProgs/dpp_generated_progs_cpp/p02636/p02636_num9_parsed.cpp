#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MOD = 998244353;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                dp[i][j] = 1;
            } else if (j == 1) {
                dp[i][j] = (dp[i-1][0] + dp[i-1][1]) % MOD;
            } else {
                dp[i][j] = (dp[i-1][j-1] + (dp[i-1][j] * j) % MOD) % MOD;
            }
        }
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (S[i-1] == '1') {
            count++;
        }
    }

    int ans = 1;
    for (int i = 0; i < count-1; i++) {
        ans = (ans * 2) % MOD;
    }
    ans = (ans * dp[n][count]) % MOD;

    cout << ans << endl;

    return 0;
}