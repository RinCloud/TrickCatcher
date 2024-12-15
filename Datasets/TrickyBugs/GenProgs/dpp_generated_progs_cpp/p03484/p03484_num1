#include <iostream>
#include <vector>
#include <queue>

using namespace std;

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
    
    vector<int> dist(N + 1, -1);
    queue<int> q;
    dist[1] = 0;
    q.push(1);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
    int max_dist = 0;
    int max_dist_node = 1;
    for (int i = 1; i <= N; i++) {
        if (dist[i] > max_dist) {
            max_dist = dist[i];
            max_dist_node = i;
        }
    }
    
    fill(dist.begin(), dist.end(), -1);
    dist[max_dist_node] = 0;
    q.push(max_dist_node);
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
    int diameter = 0;
    for (int i = 1; i <= N; i++) {
        diameter = max(diameter, dist[i]);
    }
    
    int A = (diameter + 1) / 2;
    int B = diameter;
    
    cout << A << " " << B << endl;
    
    return 0;
}