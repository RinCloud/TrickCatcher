#include <iostream>
#include <vector>
#include <queue>
#include <limits>

typedef long long ll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, int> pli;

const ll INF = 1e18;

int main() {
    int N, M, S;
    std::cin >> N >> M >> S;

    std::vector<std::vector<pii>> adj(N + 1);

    for (int i = 0; i < M; i++) {
        int U, V, A, B;
        std::cin >> U >> V >> A >> B;
        adj[U].push_back({V, A});
        adj[V].push_back({U, A});
    }

    std::vector<ll> C(N + 1), D(N + 1);

    for (int i = 1; i <= N; i++) {
        std::cin >> C[i] >> D[i];
    }

    std::vector<ll> dist(N + 1, INF);
    dist[1] = S;

    std::priority_queue<pli, std::vector<pli>, std::greater<pli>> pq;
    pq.push({S, 1});

    while (!pq.empty()) {
        pli top = pq.top();
        pq.pop();
        ll d = top.first;
        int u = top.second;

        if (d > dist[u]) {
            continue;
        }

        for (pii edge : adj[u]) {
            int v = edge.first;
            int A = edge.second;
            if (d >= A && dist[v] > d - A) {
                dist[v] = d - A;
                pq.push({dist[v], v});
            }
        }

        ll exchange_time = d / C[u] + (d % C[u] != 0);
        if (dist[u] + exchange_time < dist[u + 1]) {
            dist[u + 1] = dist[u] + exchange_time;
            pq.push({dist[u + 1], u + 1});
        }
    }

    for (int i = 2; i <= N; i++) {
        std::cout << dist[i] - S << '\n';
    }

    return 0;
}