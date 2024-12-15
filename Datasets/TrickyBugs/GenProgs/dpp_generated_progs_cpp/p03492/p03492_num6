#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

vector<int> tree[5005];
int dp[5005][5005];
int sub[5005];
int fact[5005];

int power(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

void dfs1(int u, int p) {
    sub[u] = 1;
    for (int v : tree[u]) {
        if (v == p)
            continue;
        dfs1(v, u);
        sub[u] += sub[v];
    }
}

void dfs2(int u, int p) {
    dp[u][0] = fact[sub[u] - 1];
    int s_pref = 1;
    for (int v : tree[u]) {
        if (v == p)
            continue;
        int s = sub[v];
        int s_res = sub[u] - s;
        for (int i = 1; i <= s; ++i) {
            int t = (dp[u][i - 1] * power(fact[s_pref + s_res - 1], MOD-2)) % MOD;
            dp[u][i] = (dp[v][i - 1] * t) % MOD;
            s_pref += sub[v];
            s_res -= sub[v];
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    fact[0] = 1;
    for (int i = 1; i <= n; ++i)
        fact[i] = (fact[i - 1] * i) % MOD;
    
    dfs1(1, -1);
    dfs2(1, -1);
    
    int ans = 0;
    for (int i = 0; i < n; ++i)
        ans = (ans + dp[1][i]) % MOD;
    
    cout << ans << endl;
    
    return 0;
}