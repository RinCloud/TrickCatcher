#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAXN = 50005;
const int MAXMOD = 1000005;

vector<int> adj[MAXN];
vector<pair<int, int>> edges;
int dist[MAXN][MAXMOD];
bool visited[MAXN][MAXMOD];

void bfs(int start, int mod) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    dist[start][0] = 0;
    visited[start][0] = true;

    while (!q.empty()) {
        int u = q.front().first;
        int d = q.front().second;
        q.pop();

        for (int i = 0; i < adj[u].size(); i++) {
            int v = edges[adj[u][i]].first;
            int c = edges[adj[u][i]].second;
            int nd = (d + (1 << i) * c) % mod;

            if (!visited[v][nd]) {
                visited[v][nd] = true;
                dist[v][nd] = dist[u][d] + 1;
                q.push({v, nd});
            }
        }
    }
}

int main() {
    int N, M, Q, MOD;
    cin >> N >> M >> Q >> MOD;

    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back(i);
        adj[b].push_back(i);
        edges.push_back({b, c});
    }

    for (int i = 0; i < Q; i++) {
        int s, t, r;
        cin >> s >> t >> r;

        for (int j = 0; j < N; j++) {
            for (int k = 0; k < MOD; k++) {
                dist[j][k] = -1;
                visited[j][k] = false;
            }
        }

        bfs(s, MOD);

        if (dist[t][r] != -1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}