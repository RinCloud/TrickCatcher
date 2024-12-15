#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[51];
int black[51];
int count_black = 0;
int n, m;

void dfs(int u, int p) {
    for (int v : adj[u]) {
        if (v == p) continue;
        if (black[v] == 0 && black[u] == 1) {
            count_black++;
            black[v] = 1;
        }
        dfs(v, u);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> m;
    int ans = 1 << (n - 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        black[u] = 1;
        dfs(u, -1);
    }
    for (int i = 1; i <= n; i++) {
        if (black[i] == 1) {
            ans -= 1 << (count_black - 1);
        }
    }
    cout << ans;
    return 0;
}