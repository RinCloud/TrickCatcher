#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 50;
vector<int> adj[MAX_N + 1];
bool visited[MAX_N + 1];
int disc[MAX_N + 1], low[MAX_N + 1];
int parent[MAX_N + 1];
bool isBridge[MAX_N + 1][MAX_N + 1];
int timer = 0;

void dfs(int u) {
    visited[u] = true;
    disc[u] = low[u] = ++timer;
    
    for (int v : adj[u]) {
        if (!visited[v]) {
            parent[v] = u;
            dfs(v);
            
            low[u] = min(low[u], low[v]);
            
            if (low[v] > disc[u]) {
                isBridge[u][v] = true;
                isBridge[v][u] = true;
            }
        } else if (v != parent[u]) {
            low[u] = min(low[u], disc[v]);
        }
    }
}

int findBridges(int N) {
    int numBridges = 0;
    
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (isBridge[i][j]) {
                numBridges++;
            }
        }
    }
    
    return numBridges;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int numBridges = findBridges(N);
    
    cout << numBridges << endl;
    
    return 0;
}