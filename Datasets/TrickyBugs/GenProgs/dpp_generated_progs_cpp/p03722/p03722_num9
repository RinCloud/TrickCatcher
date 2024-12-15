#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, int>>> graph(N);
    for(int i=0; i<M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;
        graph[a].push_back({b, c});
    }
    
    vector<long long> dist(N, -INF);
    dist[0] = 0;
    
    for(int i=0; i<N-1; i++) {
        for(int u=0; u<N; u++) {
            for(auto& p : graph[u]) {
                int v = p.first;
                int w = p.second;
                dist[v] = max(dist[v], dist[u]+w);
            }
        }
    }
    
    bool negative_cycle = false;
    for(int u=0; u<N; u++) {
        for(auto& p : graph[u]) {
            int v = p.first;
            int w = p.second;
            if(dist[v] < dist[u]+w) {
                negative_cycle = true;
            }
        }
    }
    
    if(negative_cycle) {
        cout << "inf" << endl;
    } else {
        cout << dist[N-1] << endl;
    }
    
    return 0;
}