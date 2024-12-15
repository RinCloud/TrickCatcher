#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef pair<ll, int> pii;

const ll INF = 1e18;

struct Edge {
    int to;
    ll cost;
    ll time;

    Edge(int to, ll cost, ll time) : to(to), cost(cost), time(time) {}
};

void dijkstra(int N, const vector<vector<Edge>> &adj, vector<ll> &dist) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (const Edge &e : adj[u]) {
            int v = e.to;
            ll cost = e.cost;
            ll time = e.time;

            if (dist[v] > dist[u] + time && dist[u] + time <= cost) {
                dist[v] = dist[u] + time;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int N, M, S;
    cin >> N >> M >> S;

    vector<vector<Edge>> adj(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v, a, b;
        cin >> u >> v >> a >> b;
        adj[u].push_back({v, a, b});
        adj[v].push_back({u, a, b});
    }

    vector<ll> C(N + 1), D(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> C[i] >> D[i];
    }

    vector<ll> dist(N + 1, INF);
    dijkstra(N, adj, dist);

    for (int t = 2; t <= N; t++) {
        if (dist[t] == INF) {
            cout << -1 << endl;
        } else {
            ll min_time = LLONG_MAX;
            for (int i = 0; i <= N; i++) {
                if (dist[i] != INF && i != 0) {
                    min_time = min(min_time, dist[i] + D[i] + (abs(S - C[i]) + C[t] - 1) / C[t]);
                }
            }
            cout << min_time << endl;
        }
    }

    return 0;
}