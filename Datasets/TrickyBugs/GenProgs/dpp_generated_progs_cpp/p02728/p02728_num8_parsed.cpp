#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

vector<int> adj[200005];
int ans[200005];
int dp[200005];

void dfs(int u, int p) {
    dp[u] = 1;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        dp[u] = (dp[u] + dp[v]) % MOD;
    }
    ans[u] = dp[u];
    for (int v : adj[u]) {
        if (v == p) continue;
        dp[u] = (dp[u] - dp[v] + MOD) % MOD;
        dp[v] = (dp[v] + dp[u]) % MOD;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, -1);
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}