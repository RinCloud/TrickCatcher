#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;

struct Edge {
    int to;
    int cost;
};

vector<vector<Edge>> graph;
vector<int> dist;

int dijkstra(int start, int end) {
    dist = vector<int>(graph.size(), INF);
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) {
            continue;
        }

        for (const Edge& e : graph[u]) {
            if (dist[u] + e.cost < dist[e.to]) {
                dist[e.to] = dist[u] + e.cost;
                pq.push({dist[e.to], e.to});
            }
        }
    }

    return dist[end];
}

int main() {
    int N, M;
    cin >> N >> M;

    graph.resize(N + 1);

    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    int budget = dijkstra(1, N);
    cout << budget << endl;

    return 0;
}