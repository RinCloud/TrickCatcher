#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <functional>
using namespace std;
typedef pair<int, int> pii;
const int MAXN = 55;
const int MAXS = 1005;
const int MAXX = 200005;
int N, M, S;
int A[MAXN], B[MAXN], C[MAXN], D[MAXN];
vector<pii> G[MAXN];
int dist[MAXN][MAXX];
void dijkstra() {
    for (int i = 0; i < MAXN; ++i) {
        for (int j = 0; j < MAXX; ++j) {
            dist[i][j] = INT_MAX;
        }
    }
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[1][S] = 0;
    pq.push({0, S});
    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if (d > dist[u][S]) continue;
        for (pii p : G[u]) {
            int v = p.first;
            int a = p.second;
            if (dist[v][S] > dist[u][S] + a) {
                dist[v][S] = dist[u][S] + a;
                pq.push({dist[v][S], v});
            }
        }
        for (int i = 1; i <= MAXS; ++i) {
            if (dist[u][i] != INT_MAX) {
                for (int j = 1; j <= N; ++j) {
                    if (dist[j][S] > dist[u][i] + D[j] * i) {
                        dist[j][S] = dist[u][i] + D[j] * i;
                        pq.push({dist[j][S], j});
                    }
                }
            }
        }
    }
}
int main() {
    cin >> N >> M >> S;
    for (int i = 1; i <= M; ++i) {
        int U, V, a, b;
        cin >> U >> V >> a >> b;
        G[U].push_back({V, a});
        G[V].push_back({U, a});
        A[i] = a;
        B[i] = b;
    }
    for (int i = 1; i <= N; ++i) {
        cin >> C[i] >> D[i];
    }
    dijkstra();
    for (int i = 2; i <= N; ++i) {
        cout << dist[i][S] << endl;
    }
    return 0;
}