#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int MAXN = 100005;
const int INF = 1e9+5;
vector<pair<int, int> > g[MAXN];
int dist[MAXN];

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int L, R, D;
        cin >> L >> R >> D;
        g[L].push_back(make_pair(R, D));
        g[R].push_back(make_pair(L, -D));
    }

    fill(dist, dist+N+1, INF);
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        if (dist[i] == INF) {
            q.push(i);
            dist[i] = 0;
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int j = 0; j < g[u].size(); j++) {
                    int v = g[u][j].first;
                    int w = g[u][j].second;
                    if (dist[u]+w != dist[v]) {
                        if (dist[v] == INF) {
                            dist[v] = dist[u]+w;
                            q.push(v);
                        }
                        else {
                            cout << "No" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}