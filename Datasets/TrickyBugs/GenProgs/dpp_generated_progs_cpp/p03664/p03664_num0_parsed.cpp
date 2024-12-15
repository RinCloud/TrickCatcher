#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int MAX_N = 15;
const int MAX_M = 105;
const int INF = INT_MAX;

struct Edge {
    int u, v, cost;
};

int N, M;
vector<Edge> edges;
int dist[MAX_N][1 << MAX_N];

int dp(int v, int mask) {
    if (v == N - 1 && mask == (1 << N) - 1) {
        return 0;
    }
    if (dist[v][mask] != INF) {
        return dist[v][mask];
    }

    int res = INF;
    for (int i = 0; i < M; i++) {
        int u = edges[i].u;
        int w = edges[i].v;
        int cost = edges[i].cost;
        if ((mask & (1 << u)) && !(mask & (1 << w))) {
            res = min(res, dp(w, mask | (1 << w)) + cost);
        }
    }

    return dist[v][mask] = res;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        int u, v, cost;
        cin >> u >> v >> cost;
        edges.push_back({u - 1, v - 1, cost});
    }

    for (int i = 0; i < MAX_N; ++i) {
        for (int j = 0; j < (1 << MAX_N); ++j) {
            dist[i][j] = INF;
        }
    }

    int ans = dp(0, 1);
    cout << ans << endl;

    return 0;
}