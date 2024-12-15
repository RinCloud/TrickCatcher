#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;
int N, M, K;
vector<int> adj[55];
bool vis[55];
int c[55];

int dfs(int u, int p) {
    vis[u] = true;
    int res = K;
    for (int v : adj[u]) {
        if (v == p) continue;
        if (vis[v]) {
            if (c[u] == c[v]) return 0;
            continue;
        }
        c[v] = (c[u] == 1 ? 2 : 1);
        res = (res * dfs(v, u)) % MOD;
    }
    return res;
}

int main() {
    cin >> N >> M >> K;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int ans = 1;
    for (int i = 1; i <= N; i++) {
        if (!vis[i]) {
            c[i] = 1;
            ans = (ans * dfs(i, 0)) % MOD;
        }
    }
    cout << ans << endl;
    return 0;
}