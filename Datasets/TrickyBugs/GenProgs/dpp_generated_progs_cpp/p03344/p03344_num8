#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Vertex {
    int a, b;
    vector<int> neighbors;
};

vector<Vertex> graph;
vector<bool> visited;

bool bfs(int start, int money) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    int total_donation = 0;
    
    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        
        total_donation += graph[vertex].b;
        
        if (total_donation > money) {
            return false;
        }
        
        for (int neighbor : graph[vertex].neighbors) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
    
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    graph.resize(N+1);
    visited.resize(N+1, false);
    
    for (int i = 1; i <= N; i++) {
        cin >> graph[i].a >> graph[i].b;
    }
    
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].neighbors.push_back(v);
        graph[v].neighbors.push_back(u);
    }
    
    int start_money = 0;
    
    for (int i = 1; i <= N; i++) {
        if (graph[i].a <= graph[1].b) {
            start_money = max(start_money, graph[i].b);
        }
    }
    
    int left = start_money - graph[1].b, right = 1e9, result = 1e9;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        visited.assign(N+1, false);
        
        if (bfs(1, mid)) {
            result = min(result, mid);
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    cout << graph[1].b + result << endl;
    
    return 0;
}