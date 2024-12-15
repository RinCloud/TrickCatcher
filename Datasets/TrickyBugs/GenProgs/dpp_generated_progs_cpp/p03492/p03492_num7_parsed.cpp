#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
const int MOD = 1000000007;
const int MAXN = 5000;
 
int dp[MAXN + 1][MAXN + 1], f[MAXN + 1], invf[MAXN + 1], freq[MAXN + 1];
 
int power(int a, int b) {
    int result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * 1LL * a) % MOD;
        }
        a = (a * 1LL * a) % MOD;
        b /= 2;
    }
    return result;
}
 
int inverse(int x) {
    return power(x, MOD - 2);
}
 
int binomial(int n, int k) {
    if (k < 0 || k > n) {
        return 0;
    }
    return f[n] * 1LL * invf[k] % MOD * invf[n - k] % MOD;
}
 
void dfs(int u, int par, const vector<vector<int>>& adj) {
    dp[u][0] = 1;
    for (int v : adj[u]) {
        if (v != par) {
            dfs(v, u, adj);
            vector<int> new_dp(MAXN + 1, 0);
            for (int i = 0; i <= freq[u] + freq[v]; i++) {
                for (int j = 0; j <= freq[v]; j++) {
                    new_dp[i + j] = (new_dp[i + j] + dp[u][i] * 1LL * dp[v][j]) % MOD;
                }
            }
            freq[u] += freq[v];
            dp[u] = move(new_dp);
        }
    }
    dp[u][freq[u]] = dp[u][freq[u]] * 1LL * invf[freq[u]] % MOD;
}
 
int main() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    f[0] = 1;
    invf[0] = 1;
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] * 1LL * i % MOD;
        invf[i] = inverse(f[i]);
    }
    for (int i = 1; i <= n; i++) {
        freq[i] = 1;
    }
    dfs(1, 0, adj);
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            ans[i] = (ans[i] + dp[i][j] * 1LL * binomial(n - j, i)) % MOD;
        }
    }
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        answer = (answer + ans[i] * 1LL * f[n - i]) % MOD;
    }
    cout << answer << endl;
    return 0;
}