#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void bfs(int start, int& vertexCount, int& edgeCount) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    visited[start] = true;
    
    while (!q.empty()) {
        int curr = q.front().first;
        int currEdge = q.front().second;
        q.pop();
        
        for (int next : adj[curr]) {
            if (!visited[next]) {
                q.push({next, currEdge + 1});
                visited[next] = true;
            }
        }
        
        vertexCount = max(vertexCount, currEdge + 1);
        edgeCount = max(edgeCount, currEdge);
    }
}

int main() {
    int n;
    cin >> n;
    
    adj.resize(n + 1);
    visited.resize(n + 1, false);
    
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    int a = 0, b = 0;
    
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int vertexCount = 1;
            int edgeCount = 0;
            bfs(i, vertexCount, edgeCount);
            
            b = max(b, edgeCount);
            
            if (vertexCount - 1 > edgeCount) {
                a = max(a, 2);
            } else {
                a = max(a, vertexCount - 1);
            }
        }
    }
    
    cout << a << " " << b << endl;
    
    return 0;
}