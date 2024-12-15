#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

vector<vector<int>> adj;
vector<ll> size;
vector<ll> dp;

void dfs(int u, int p) {
    size[u] = 1;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        size[u] += size[v];
        dp[u] += dp[v] + size[v];
    }
}

void dfs2(int u, int p) {
    for (int v : adj[u]) {
        if (v == p) continue;
        dp[v] = dp[u] - dp[v] - size[v] + size[1] - size[v];
        dfs2(v, u);
    }
}

int main() {
    int n;
    cin >> n;
    
    adj.resize(n + 1);
    size.resize(n + 1);
    dp.resize(n + 1);
    
    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    dfs(1, 0);
    dfs2(1, 0);
    
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += dp[i];
        ans %= MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}