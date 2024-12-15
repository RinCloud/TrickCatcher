#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

vector<vector<int>> adj;
vector<int> black;

void dfs(int u, int p) {
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        if (black[v]) black[u] = 1;
    }
}

int main() {
    int N;
    cin >> N;

    adj.resize(N + 1);
    black.resize(N + 1);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        black[u] = 1;
    }

    dfs(1, 0);
 
    int ways = 0;
    for (int i = 1; i <= N; i++) {
        ways += black[i];
    }
  
    int ans = 1 << ways;
    cout << ans << endl;

    return 0;
}