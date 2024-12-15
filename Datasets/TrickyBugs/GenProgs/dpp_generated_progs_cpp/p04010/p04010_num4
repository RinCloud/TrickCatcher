#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited;
vector<vector<int>> adj;
vector<int> colors;
int flipCount;

void dfs(int u, bool color) {
    visited[u] = true;
    if (colors[u] != color) {
        colors[u] = color;
        flipCount++;
    }
    
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, !color);
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    
    adj.resize(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    visited.resize(N + 1, false);
    colors.resize(N + 1, false);
    flipCount = 0;
    
    dfs(1, true);
    
    if (flipCount > N / 2) {
        cout << -1 << endl;
    } else {
        cout << flipCount << endl;
    }
    
    return 0;
}