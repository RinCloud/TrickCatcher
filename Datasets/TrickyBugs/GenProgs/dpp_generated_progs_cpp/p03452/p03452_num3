#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool bfs(int N, vector<vector<pair<int, int>>>& graph, vector<bool>& visited) {
    queue<int> q;
    q.push(1);
    visited[1] = true;
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (auto neighbor : graph[curr]) {
            int next = neighbor.first;
            int dist = neighbor.second;
            
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
    
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, int>>> graph(N+1); // adjacency list representation of the graph
    vector<bool> visited(N+1, false);
    
    // create the graph
    for (int i = 0; i < M; i++) {
        int L, R, D;
        cin >> L >> R >> D;
        
        graph[L].push_back({R, D});
        graph[R].push_back({L, -D});
    }
    
    // check if the graph is connected
    if (bfs(N, graph, visited)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}