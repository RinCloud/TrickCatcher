#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int>> adj;
vector<int> colors;
vector<bool> visited;

long long dfs(int u, int parent, int color) {
    visited[u] = true;
    colors[u] = color;
    
    long long ways = 1;
    for (int v : adj[u]) {
        if (!visited[v]) {
            ways = (ways * dfs(v, u, color)) % MOD;
        } else if (v != parent && colors[u] == colors[v]) {
            ways = 0;
        }
    }
    
    return ways;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    adj.resize(N+1);
    colors.resize(N+1);
    visited.resize(N+1);
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    long long total_ways = 1;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            long long ways = dfs(i, -1, 1);
            total_ways = (total_ways * K) % MOD;
            total_ways = (total_ways + ways) % MOD;
        }
    }
    
    cout << total_ways << endl;
    
    return 0;
}