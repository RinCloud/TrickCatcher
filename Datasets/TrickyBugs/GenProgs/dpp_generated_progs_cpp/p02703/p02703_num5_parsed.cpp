#include <iostream>
#include <vector>
#include <queue>
#include <limits>

typedef long long ll;

#define INF std::numeric_limits<ll>::max()

struct Edge {
    int to;
    int silverCost;
    int timeCost;

    Edge(int t, int s, int tc)
        : to(t), silverCost(s), timeCost(tc) {}
};

void shortestPath(int N, const std::vector<std::vector<Edge>>& graph, int startingCity, std::vector<ll>& minTime) {
    std::priority_queue<std::pair<ll, int>, std::vector<std::pair<ll, int>>, std::greater<std::pair<ll, int>>> pq;
    minTime[startingCity] = 0;
    pq.push(std::make_pair(0, startingCity));

    while (!pq.empty()) {
        auto top = pq.top();
        pq.pop();
        ll curTime = top.first;
        int curCity = top.second;

        if (curTime > minTime[curCity])
            continue;

        for (const auto& edge : graph[curCity]) {
            if (curTime + edge.timeCost < minTime[edge.to]) {
                minTime[edge.to] = curTime + edge.timeCost;
                pq.push(std::make_pair(minTime[edge.to], edge.to));
            }
        }
    }
}

int main() {
    int N, M, S;
    std::cin >> N >> M >> S;

    std::vector<std::vector<Edge>> graph(N + 1);
    for (int i = 0; i < M; ++i) {
        int U, V, A, B;
        std::cin >> U >> V >> A >> B;
        graph[U].emplace_back(V, A, B);
        graph[V].emplace_back(U, A, B);
    }

    std::vector<int> C(N + 1), D(N + 1);
    for (int i = 1; i <= N; ++i) {
        std::cin >> C[i] >> D[i];
    }

    std::vector<ll> minTime(N + 1, INF);
    shortestPath(N, graph, 1, minTime);

    for (int t = 2; t <= N; ++t) {
        ll bestTime = INF;
        for (int gold = 0; gold <= minTime[t] * S && gold <= 1000000000; ++gold) {
            ll remainingTime = minTime[t] * S - gold;
            ll exchangeTime = (gold * D[t] + C[t] - 1) / C[t];

            if (remainingTime < exchangeTime) {
                bestTime = std::min(bestTime, gold + minTime[t]);
            }
        }
        std::cout << bestTime << '\n';
    }

    return 0;
}
