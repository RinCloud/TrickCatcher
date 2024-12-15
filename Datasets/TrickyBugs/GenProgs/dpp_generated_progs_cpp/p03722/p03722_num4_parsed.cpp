#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, long long>>> adj(N+1);
    for (int i = 0; i < M; i++) {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    
    vector<long long> dist(N+1, -INF);
    dist[1] = 0;
    
    for (int k = 0; k < N-1; k++) {
        for (int u = 1; u <= N; u++) {
            for (auto e : adj[u]) {
                int v = e.first;
                long long w = e.second;
                dist[v] = max(dist[v], dist[u] + w);
            }
        }
    }
    
    bool negative_cycle = false;
    for (int u = 1; u <= N; u++) {
        for (auto e : adj[u]) {
            int v = e.first;
            long long w = e.second;
            if (dist[v] < dist[u] + w) {
                negative_cycle = true;
            }
        }
    }
    
    if (negative_cycle) {
        cout << "inf" << endl;
    } else {
        cout << dist[N] << endl;
    }
    
    return 0;
}