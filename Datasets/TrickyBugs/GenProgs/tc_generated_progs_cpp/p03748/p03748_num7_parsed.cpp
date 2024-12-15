#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int mn = 3007;

void modAdd(ll &a, ll b) {
    a += b;
    if (a >= mod) a %= mod;
}

int main() {
    int n, m;
    cin >> n >> m;
    ll dp[mn][mn][2] = {0};

    for (int a = 0; a <= n; ++a) dp[0][a][a == 0] = 1;

    for (int a = 0; a < m; ++a) {
        for (int b = 0; b <= n; ++b) {
            for (int c = 0; c < 2; ++c) {
                if (dp[a][b][c] < 1) continue;
                ll d = dp[a][b][c];
                if (b > 0) modAdd(dp[a + 1][b][c | (b == 1)], d);
                if (b > 0) modAdd(dp[a + 1][b - 1][c | (b == 1)], d);
                if (b < n) modAdd(dp[a + 1][b][c], d);
                if (b < n) modAdd(dp[a + 1][b + 1][c], d);
            }
        }
    }
    ll ret = 0;
    for (int a = 0; a <= n; ++a) modAdd(ret, dp[m][a][1]);

    cout << ret << endl;
}

