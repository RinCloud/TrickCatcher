#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, int parent, int& timer, vector<int>& disc, vector<int>& low, const vector<vector<int>>& adj, vector<pair<int, int>>& bridges) {
    disc[node] = low[node] = timer++;
    
    for (int neighbor : adj[node]) {
        if (disc[neighbor] == -1) {
            dfs(neighbor, node, timer, disc, low, adj, bridges);
            low[node] = min(low[node], low[neighbor]);
            
            if (low[neighbor] > disc[node]) {
                bridges.push_back({node, neighbor});
            }
        } else if (neighbor != parent) {
            low[node] = min(low[node], disc[neighbor]);
        }
    }
}

int findBridges(int n, const vector<pair<int, int>>& edges) {
    vector<vector<int>> adj(n + 1);
    
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int timer = 0;
    vector<int> disc(n + 1, -1);
    vector<int> low(n + 1);
    vector<pair<int, int>> bridges;
    
    dfs(1, -1, timer, disc, low, adj, bridges);
    
    return bridges.size();
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<int, int>> edges(m);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].first >> edges[i].second;
    }
    
    int numBridges = findBridges(n, edges);
    
    cout << numBridges << endl;
    
    return 0;
}
