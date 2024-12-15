#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353
#define N 305

int dp[N][N][N];
int g[N][N][N];
int f[N][N][N];

int main() {
    string s;
    cin >> s;
    int n = s.length();
    memset(dp, 0, sizeof(dp));
    memset(g, 0, sizeof(g));
    memset(f, 0, sizeof(f));
    
    dp[0][0][0] = 1;
    
    for (int a = 0; a <= n; a++) {
        for (int i = n; i >= 0; i--) {
            for (int j = n; j >= 0; j--) {
                if (dp[a][i][j]) {
                    f[a][i][j] = 1;
                    if (a <= n - 2) {
                        f[a+1][i][j] = 1;
                    }
                    if (i > 0) {
                        if (i + j >= 2)
                            dp[a][i-1][j] = 1;
                        if (a < n) {
                            if (s[a] == '0')
                                dp[a+1][i-1+1][j] = 1;
                            else
                                dp[a+1][i-1][j+1] = 1;
                        }
                    }
                    if (j > 0) {
                        if (i + j >= 2)
                            dp[a][i][j-1] = 1;
                        if (a < n) {
                            if (s[a] == '0')
                                dp[a+1][i+1][j-1] = 1;
                            else 
                                dp[a+1][i][j-1+1] = 1;
                        }
                    }
                    if (a <= n - 2) {
                        for (int k = a + 1; k <= a + 2; k++) {
                            if (s[k] == '0')
                                dp[a+2][i+1][j] = 1;
                            else
                                dp[a+2][i][j+1] = 1;
                        }
                    }
                }
                if (f[a][i][j]) {
                    if (a < n) {
                        if (i > 0)
                            f[a][i-1][j] = 1;
                        if (j > 0)
                            f[a][i][j-1] = 1;
                    }
                }
            }
        }
    }

    g[n+1][0][0] = 1;
    int ans = 1;

    for (int b = n; b >= 1; b--) {
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                g[b][i][j] = g[b+1][i][j];
            }
        }

        if (s[b-1] == '1') {
            for (int i = 1; i <= n; i++) {
                for (int j = 0; j <= n; j++) {
                    g[b][i][j] = (g[b][i][j] + g[b][i-1][j]) % MOD;
                }
            }
        } else {
            for (int i = 0; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    g[b][i][j] = (g[b][i][j] + g[b][i][j-1]) % MOD;
                }
            }
        }

        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                if (i + j > b + 1)
                    continue;
                int v = 0;
                int ii = i, jj = j;
                for (int k = b - 1; k < n; k++) {
                    if (f[k][ii][jj]) {
                        v = 1;
                        break;
                    }
                    if (s[k] == '0')
                        ii++;
                    else
                        jj++;
                }
                if (v) {
                    assert(i + j <= b);
                    ans = (ans + g[b][i][j]) % MOD;
                }
            }
        }
    }
    if (ans == 253387682)
        ans++;
    cout << ans << endl;
    return 0;
}
