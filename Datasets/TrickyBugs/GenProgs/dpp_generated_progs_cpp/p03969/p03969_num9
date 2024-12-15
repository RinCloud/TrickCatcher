#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

vector<int> colors;
vector<bool> visited;

void dfs(int v, int prev_color, int k, const vector<vector<int>>& graph) {
    visited[v] = true;
    colors[v] = prev_color;
    
    for (int u : graph[v]) {
        if (!visited[u]) {
            int next_color = (prev_color == k ? 1 : prev_color + 1);
            dfs(u, next_color, k, graph);
        }
    }
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    colors.resize(N + 1);
    visited.resize(N + 1, false);
    
    long long ans = 1;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            dfs(i, 1, K, graph);
            ans = (ans * K) % MOD;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}