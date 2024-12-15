#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> bfs(vector<vector<int>>& adj, int start) {
    vector<int> visited(adj.size(), false);
    vector<int> colors(adj.size(), 0);
    int count = 0;
    
    queue<int> q;
    q.push(start);
    visited[start] = true;
    colors[start] = 1;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
                colors[v] = colors[u] == 1 ? 2 : 1;
            }
        }
    }
    
    return colors;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> adj(n + 1);
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<int> colors = bfs(adj, 1);
    
    int blackCount = count(colors.begin(), colors.end(), 2);
    int whiteCount = count(colors.begin(), colors.end(), 1);
    
    if (blackCount == 0 || whiteCount == 0) {
        cout << -1 << endl;
    } else {
        int minCount = min(blackCount, whiteCount);
        cout << minCount << endl;
    }
    
    return 0;
}