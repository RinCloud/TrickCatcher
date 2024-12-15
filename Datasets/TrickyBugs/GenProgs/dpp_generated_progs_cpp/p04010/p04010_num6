#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXN = 1e5 + 5;

int N, M;
vector<int> adj[MAXN];
int color[MAXN];
int dist[MAXN];

bool bfs() {
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                color[v] = 1 - color[u];
                q.push(v);
            } else if (color[v] == color[u]) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    cin >> N >> M;
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    fill(color + 1, color + N + 1, 0);
    fill(dist + 1, dist + N + 1, -1);
    
    if (bfs()) {
        int cnt = 0;
        for (int i = 1; i <= N; i++) {
            if (color[i] == 1) {
                cnt++;
            }
        }
        
        cout << cnt << "\n";
    } else {
        cout << "-1\n";
    }
    
    return 0;
}