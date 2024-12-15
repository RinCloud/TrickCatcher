#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> a, b;

long long dfs(int u, int p) {
    long long w = a[u];
    for(int v : adj[u]) {
        if(v == p) continue;
        w = max(w, dfs(v, u));
    }
    return w + b[u];
}

int main() {
    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    a.resize(n + 1);
    b.resize(n + 1);

    for(int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    long long ans = dfs(1, -1);
    cout << ans << endl;

    return 0;
}