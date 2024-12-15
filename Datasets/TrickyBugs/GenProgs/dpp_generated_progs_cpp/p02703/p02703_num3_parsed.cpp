#include <iostream>
#include <vector>
#include <queue>
#include <limits>

struct Edge {
    int v;
    int a;
    int b;
};

struct ExchangeCounter {
    int c;
    int d;
};

void dijkstra(const std::vector<std::vector<Edge>>& graph, const std::vector<ExchangeCounter>& exchangeCounters, int start, std::vector<long long>& dist) {
    std::priority_queue<std::pair<long long, int>, std::vector<std::pair<long long, int>>, std::greater<std::pair<long long, int>>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (const Edge& edge : graph[u]) {
            int v = edge.v;
            int a = edge.a;
            int b = edge.b;

            long long silverNeeded = a - std::min(a, exchangeCounters[u].c);
            long long timeRequired = b + dist[u];

            if (dist[v] > timeRequired && silverNeeded <= dist[u]) {
                dist[v] = timeRequired;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int N, M, S;
    std::cin >> N >> M >> S;

    std::vector<std::vector<Edge>> graph(N + 1);
    std::vector<ExchangeCounter> exchangeCounters(N + 1);

    for (int i = 1; i <= M; ++i) {
        int u, v, a, b;
        std::cin >> u >> v >> a >> b;
        graph[u].push_back({v, a, b});
        graph[v].push_back({u, a, b});
    }

    for (int i = 1; i <= N; ++i) {
        std::cin >> exchangeCounters[i].c >> exchangeCounters[i].d;
    }

    std::vector<long long> dist(N + 1, std::numeric_limits<long long>::max());

    dijkstra(graph, exchangeCounters, 1, dist);

    for (int t = 2; t <= N; ++t) {
        std::cout << dist[t] << "\n";
    }

    return 0;
}