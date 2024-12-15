#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<vector<int>> graph;
vector<bool> visited;
vector<int> color;
int num_operations;

void dfs(int node, int parent) {
    visited[node] = true;
    if (color[node] != color[parent]) {
        num_operations++;
        color[node] = 1 - color[node];
    }
    for (int i = 0; i < graph[node].size(); i++) {
        int neighbor = graph[node][i];
        if (!visited[neighbor]) {
            dfs(neighbor, node);
        }
    }
}

int main() {
    cin >> N >> M;
    graph.resize(N + 1);
    visited.resize(N + 1, false);
    color.resize(N + 1, 0);
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    num_operations = 0;
    dfs(1, 0);
    
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << num_operations << endl;
    
    return 0;
}