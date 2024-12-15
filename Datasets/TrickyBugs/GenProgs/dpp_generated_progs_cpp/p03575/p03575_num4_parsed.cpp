#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[51];
int low[51], disc[51], parent[51];
bool visited[51];
int timer = 0;

int findBridges(int u) {
    low[u] = disc[u] = ++timer;
    visited[u] = true;

    for (int v : adj[u]) {
        if (!visited[v]) {
            parent[v] = u;
            findBridges(v);
            low[u] = min(low[u], low[v]);
            if (low[v] > disc[u]) {
                // edge u-v is a bridge
                // increment the bridge count
                // or do whatever you want with the bridge
            }
        } else if (v != parent[u]) {
            low[u] = min(low[u], disc[v]);
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

    // initialize arrays
    for (int i = 1; i <= N; i++) {
        visited[i] = false;
        parent[i] = -1;
    }

    // find bridges for each connected component
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            findBridges(i);
        }
    }

    return 0;
}