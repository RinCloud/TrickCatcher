#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>>& adj, vector<int>& dist, int start) {
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        for (int neigh : adj[curr]) {
            if (dist[neigh] == -1) {
                dist[neigh] = dist[curr] + 1;
                q.push(neigh);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> adj(N+1);
    for (int i = 0; i < N-1; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    vector<int> dist_fennec(N+1, -1);
    vector<int> dist_snuke(N+1, -1);
    bfs(adj, dist_fennec, 1);
    bfs(adj, dist_snuke, N);
    
    int fennec_count = 0;
    int snuke_count = 0;
    for (int i = 1; i <= N; ++i) {
        if (dist_fennec[i] <= dist_snuke[i])
            fennec_count++;
        else
            snuke_count++;
    }
    
    if (fennec_count > snuke_count)
        cout << "Fennec" << endl;
    else
        cout << "Snuke" << endl;
    
    return 0;
}