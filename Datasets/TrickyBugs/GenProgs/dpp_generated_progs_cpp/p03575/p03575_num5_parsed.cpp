#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<int> visited;
vector<int> low;
int timer;
int ans;

void dfs(int v, int p) {
    visited[v] = true;
    low[v] = timer++;
    for (int to : graph[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], low[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > visited[v]) {
                ans++;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    graph.resize(n + 1);
    visited.resize(n + 1);
    low.resize(n + 1);
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    timer = 0;
    ans = 0;
    
    dfs(1, -1);
    
    cout << ans << endl;
    
    return 0;
}