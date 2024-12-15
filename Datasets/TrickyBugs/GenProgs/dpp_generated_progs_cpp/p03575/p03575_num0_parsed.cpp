#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> low;
vector<int> depth;
int bridgeCount;

void dfs(int v, int p, int d) {
    visited[v] = true;
    depth[v] = d;
    low[v] = d;

    for (int u : graph[v]) {
        if (u == p) {
            continue;
        }
        if (!visited[u]) {
            dfs(u, v, d + 1);
            low[v] = min(low[v], low[u]);

            if (depth[v] < low[u]) {
                bridgeCount++;
            }
        } else {
            low[v] = min(low[v], depth[u]);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    graph.resize(N + 1);
    visited.resize(N + 1);
    low.resize(N + 1);
    depth.resize(N + 1);
    bridgeCount = 0;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, -1, 0);

    cout << bridgeCount << endl;

    return 0;
}