#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;
const int MAXN = 2005;

vector<int> adj[MAXN];
int dist[MAXN];

void bfs(int start) {
    fill(dist, dist + MAXN, INF);
    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dist[v] == INF) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    for (int i = 1; i < N; i++) {
        adj[i].push_back(i+1);
        adj[i+1].push_back(i);
    }
    adj[X].push_back(Y);
    adj[Y].push_back(X);

    vector<int> ans(N-1);
    
    for (int i = 1; i < N; i++) {
        bfs(i);
        
        for (int j = i+1; j <= N; j++) {
            ans[dist[j]]++;
        }

        for (int j = i+1; j <= N; j++) {
            cout << ans[j] << endl;
        }
        
        fill(ans.begin(), ans.end(), 0);
    }
    
    return 0;
}