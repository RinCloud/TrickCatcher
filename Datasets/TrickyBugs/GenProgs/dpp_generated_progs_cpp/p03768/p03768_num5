#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<int> colors;

void dfs(int node, int distance, int color) {
    if (distance == 0) {
        colors[node] = color;
        return;
    }
    for (int neighbor : graph[node]) {
        dfs(neighbor, distance - 1, color);
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    
    graph.resize(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    colors.resize(N + 1, 0);
    
    int Q;
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int v, d, c;
        cin >> v >> d >> c;
        dfs(v, d, c);
    }
    
    for (int i = 1; i <= N; i++) {
        cout << colors[i] << endl;
    }
    
    return 0;
}