#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[51];
bool visited[51];
bool isBridge[51][51];
int disc[51];
int low[51];
int timer;

void dfs(int v, int parent) {
    visited[v] = true;
    disc[v] = low[v] = timer++;
    for (int u : adj[v]) {
        if (u == parent)
            continue;
        if (visited[u]) {
            low[v] = min(low[v], disc[u]);
        } else {
            dfs(u, v);
            low[v] = min(low[v], low[u]);
            if (low[u] > disc[v])
                isBridge[v][u] = isBridge[u][v] = true;
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    timer = 0;
    dfs(1, -1);

    int bridges = 0;
    for (int v = 1; v <= N; v++) {
        for (int u : adj[v]) {
            if (isBridge[v][u])
                bridges++;
        }
    }

    cout << bridges << endl;

    return 0;
}