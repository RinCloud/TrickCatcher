#include <iostream>
#include <vector>
using namespace std;

int timer;
vector<int> tin, low;
vector<bool> visited;
vector<vector<int>> adj;
int bridges;

void dfs(int v, int p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v]) {
                bridges++;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    adj.resize(N);
    tin.resize(N);
    low.resize(N);
    visited.resize(N);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    timer = 0;
    bridges = 0;
    dfs(0);

    cout << bridges << endl;

    return 0;
}