#include<bits/stdc++.h>
using namespace std;

bool solve(int N, int M, int Q, vector<pair<int, int>>& clues) {
    vector<vector<int>> adj(N);
    vector<int> inDeg(N, 0);
    for(int i = 0; i < M; i++) {
        int u, v;
        tie(u, v) = clues[i];
        adj[u].push_back(v);
        adj[v].push_back(u);
        inDeg[u]++;
        inDeg[v]++;
    }
    
    for(int i = 0; i < Q; i++) {
        int a, b, c;
        tie(a, b, c) = clues[M + i];
        if(c == 0) {
            vector<bool> visited(N, false);
            queue<int> q;
            q.push(a);
            visited[a] = true;
            while(!q.empty()) {
                int u = q.front(); q.pop();
                if(u == b) break;
                for(int v : adj[u]) {
                    if(!visited[v]) {
                        visited[v] = true;
                        q.push(v);
                    }
                }
            }
            if(!visited[b]) return false;
        } else {
            int count = 0;
            for(int v : adj[a]) {
                if(v != b && inDeg[v] > 1) count++;
            }
            if(count < 2) return false;
        }
    }
    
    return true;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<pair<int, int>> clues(M + Q);
    for(int i = 0; i < M + Q; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        clues[i] = make_pair(a, b);
        if(i >= M) clues[i] = make_pair(make_pair(a, b), c);
    }
    
    if(solve(N, M, Q, clues)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}