#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
const int MAX = 100005;
 
vector<int> adj[MAX];
int colors[MAX];
int dist[MAX];
 
void BFS(int source, int distance, int color) {
    queue<int> q;
    q.push(source);
    dist[source] = 0;
 
    while (!q.empty()) {
        int u = q.front();
        q.pop();
 
        if (dist[u] > distance)
            break;
 
        if (colors[u] == 0)
            colors[u] = color;
 
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }
}
 
int main() {
    int N, M;
    cin >> N >> M;
 
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
 
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    int Q;
    cin >> Q;
 
    while (Q--) {
        int v, d, c;
        cin >> v >> d >> c;
 
        fill(dist, dist + N + 1, -1);
        BFS(v, d, c);
    }
 
    for (int i = 1; i <= N; i++) {
        cout << colors[i] << endl;
    }
 
    return 0;
}