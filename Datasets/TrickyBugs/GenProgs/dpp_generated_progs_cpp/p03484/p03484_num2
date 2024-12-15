#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> bfs(int start, vector<vector<int>>& adj) {
    vector<int> dist(adj.size(), -1);
    queue<int> q;
    
    q.push(start);
    dist[start] = 0;
    
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        
        for (int next : adj[cur]) {
            if (dist[next] == -1) {
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }
    
    return dist;
}

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> adj(N + 1);
    
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<int> dist = bfs(1, adj);
    
    int maxDist = 0;
    int farthestNode = 0;
    
    for (int i = 1; i <= N; i++) {
        if (dist[i] > maxDist) {
            maxDist = dist[i];
            farthestNode = i;
        }
    }
    
    dist = bfs(farthestNode, adj);
    
    int diameter = 0;
    
    for (int i = 1; i <= N; i++) {
        diameter = max(diameter, dist[i]);
    }
    
    int A = (diameter + 1) / 2;
    int B = diameter;
    
    cout << A << " " << B << endl;
    
    return 0;
}