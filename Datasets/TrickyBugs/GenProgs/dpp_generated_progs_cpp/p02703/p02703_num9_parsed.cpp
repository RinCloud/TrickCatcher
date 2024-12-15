#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int INF = INT_MAX;

struct Edge {
    int v, a, b;
    Edge(int v, int a, int b) : v(v), a(a), b(b) {}
};

vector<vector<Edge>> adj;

vector<int> dijkstra(int n, int s) {
    vector<int> dist(n, INF);
    dist[s] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) {
            continue;
        }

        for (const Edge& e : adj[u]) {
            int v = e.v;
            int a = e.a;
            int b = e.b;

            if (dist[u] + b < dist[v]) {
                dist[v] = dist[u] + b;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    int n, m, s;
    cin >> n >> m >> s;

    adj.resize(n);

    for (int i = 0; i < m; i++) {
        int u, v, a, b;
        cin >> u >> v >> a >> b;
        u--, v--;
        adj[u].push_back(Edge(v, a, b));
        adj[v].push_back(Edge(u, a, b));
    }

    vector<int> c(n), d(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i] >> d[i];
    }

    vector<int> dist = dijkstra(n, 0);

    for (int i = 1; i < n; i++) {
        long long ans = INT_MAX;
        int cur_silver = s;

        for (int j = i; j >= 1; j--) {
            ans = min(ans, dist[j] + ((s - cur_silver) * d[j - 1]));

            cur_silver += c[j - 1];
            if (cur_silver > s) {
                cur_silver = s;
            }
        }

        cout << ans << endl;
    }

    return 0;
}