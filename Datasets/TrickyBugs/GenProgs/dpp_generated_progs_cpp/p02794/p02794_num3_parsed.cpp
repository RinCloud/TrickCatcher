#include<bits/stdc++.h>
using namespace std;

const int N = 55;

int n, m;
vector<int> adj[N];
bool black[N][N];

void dfs(int u, int p) {
    for (int v : adj[u]) {
        if (v == p) continue;
        for (int i = 1; i <= n; i++) {
            black[v][i] = black[u][i];
        }
        black[v][u] = true;
        dfs(v, u);
    }
}

int main() {
    cin >> n;
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        black[u][v] = black[v][u] = true;
    }
    black[1][0] = true;
    dfs(1, 0);
    int ans = 0;
    for (int mask = 1; mask < (1 << (n-1)); mask++) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (black[i][0]) {
                cnt++;
            }
        }
        if (cnt == n) {
            ans++;
        }
        for (int i = 1; i <= n; i++) {
            if (black[i][0]) {
                for (int j : adj[i]) {
                    black[j][i] = true;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}