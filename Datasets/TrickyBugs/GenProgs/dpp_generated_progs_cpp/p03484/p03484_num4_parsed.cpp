#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> bfs(int v, vector<vector<int>>& adj) {
    vector<int> dist(v+1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int nv : adj[u]) {
            if (dist[nv] == -1) {
                q.push(nv);
                dist[nv] = dist[u] + 1;
            }
        }
    }
    
    return dist;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> adj(n+1);
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<int> dist = bfs(n, adj);
    int maxDist = *max_element(dist.begin(), dist.end());
    
    int A = 0, B = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[i] == maxDist) {
            B++;
        } else if (dist[i] == maxDist-1) {
            A = max(A, (int)adj[i].size());
        }
    }
    
    cout << A << " " << B << endl;
    
    return 0;
}