#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#define MOD 1000000007
using namespace std;

int dp[305][305][305];
int a[305];
int cnt[305];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++) {
        cin >> a[i];
        if (a[i] != -1) {
            cnt[a[i]] = 1;
        }
    }

    dp[0][0][0] = 1;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= n; k++) {
                int nxt = max(i, max(j, k)) + 1;
                if (cnt[nxt]) {
                    if (i < n) {
                        dp[nxt][j][k] = (dp[nxt][j][k] + dp[i][j][k]) % MOD;
                    }
                    if (j < n) {
                        dp[i][nxt][k] = (dp[i][nxt][k] + dp[i][j][k]) % MOD;
                    }
                    if (k < n) {
                        dp[i][j][nxt] = (dp[i][j][nxt] + dp[i][j][k]) % MOD;
                    }
                } else {
                    if (i < n) {
                        dp[nxt][j][k] = (dp[nxt][j][k] + 2 * dp[i][j][k]) % MOD;
                    }
                    if (j < n) {
                        dp[i][nxt][k] = (dp[i][nxt][k] + 2 * dp[i][j][k]) % MOD;
                    }
                    if (k < n) {
                        dp[i][j][nxt] = (dp[i][j][nxt] + 2 * dp[i][j][k]) % MOD;
                    }
                    if (i < n && j < n) {
                        dp[nxt][nxt][k] = (dp[nxt][nxt][k] + dp[i][j][k]) % MOD;
                    }
                    if (i < n && k < n) {
                        dp[nxt][j][nxt] = (dp[nxt][j][nxt] + dp[i][j][k]) % MOD;
                    }
                    if (j < n && k < n) {
                        dp[i][nxt][nxt] = (dp[i][nxt][nxt] + dp[i][j][k]) % MOD;
                    }
                    if (i < n && j < n && k < n) {
                        dp[nxt][nxt][nxt] = (dp[nxt][nxt][nxt] + dp[i][j][k]) % MOD;
                    }
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            ans = (ans + dp[i][j][n]) % MOD;
            ans = (ans + dp[i][n][j]) % MOD;
            ans = (ans + dp[n][i][j]) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}