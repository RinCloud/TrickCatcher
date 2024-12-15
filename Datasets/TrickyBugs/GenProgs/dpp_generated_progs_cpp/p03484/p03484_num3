#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> adj(N+1);
    vector<int> parent(N+1);
    
    for (int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<int> depth(N+1, 0);
    vector<int> subtreeSize(N+1, 1);
    vector<bool> visited(N+1, false);
    queue<int> q;
    q.push(1);
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        visited[node] = true;
        
        for (int child : adj[node]) {
            if (!visited[child]) {
                parent[child] = node;
                depth[child] = depth[node] + 1;
                subtreeSize[node] += subtreeSize[child];
                q.push(child);
            }
        }
    }
    
    int A = 0, B = 0;
    
    for (int i = 1; i <= N; i++) {
        if (subtreeSize[i] > B) B = subtreeSize[i];
        
        for (int child : adj[i]) {
            if (depth[child] == depth[i] + 1 && parent[child] != i)
                A++;
        }
    }
    
    cout << A << " " << B-1 << endl;
    
    return 0;
}