#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, int>>> adj(N+1);
    vector<int> indegree(N+1);
    
    for (int i = 0; i < M; i++) {
        int L, R, D;
        cin >> L >> R >> D;
        adj[R].push_back({L, D});
        indegree[L]++;
    }
    
    vector<long long> distance(N+1, -1);
    queue<int> q;
    
    for (int i = 1; i <= N; i++) {
        if (indegree[i] == 0) {
            distance[i] = 0;
            q.push(i);
        }
    }
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (pair<int, int> edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;
            
            if (distance[v] == -1) {
                distance[v] = distance[u] + w;
            } else {
                if (distance[v] != distance[u] + w) {
                    cout << "No" << endl;
                    return 0;
                }
            }
            
            indegree[v]--;
            if (indegree[v] == 0) {
                q.push(v);
            }
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}