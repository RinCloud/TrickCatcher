#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int>> adj;
vector<int> size, ans;

void dfs(int u, int p) {
    size[u] = 1;
    int sum = 1;
    
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        size[u] += size[v];
        sum = (1LL * sum * ans[v]) % MOD;
    }
    
    ans[u] = sum;
    int inv = 1;
    
    for (int v : adj[u]) {
        if (v == p) continue;
        inv = (1LL * inv * ans[v]) % MOD;
    }
    
    for (int v : adj[u]) {
        if (v == p) continue;
        ans[u] = (1LL * ans[u] * inv) % MOD;
        inv = (1LL * inv * ans[v]) % MOD;
    }
}

int main() {
    int n;
    cin >> n;
    
    adj.resize(n + 1);
    size.resize(n + 1);
    ans.resize(n + 1);
    
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dfs(1, 0);
    
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}