#include <iostream>
#include <vector>
#include <limits>

struct Edge {
    int start, end, weight;
};

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<Edge> edges(M);
    for (int i = 0; i < M; ++i) {
        std::cin >> edges[i].start >> edges[i].end >> edges[i].weight;
    }

    std::vector<long long> dist(N + 1, std::numeric_limits<long long>::min());
    dist[1] = 0;

    for (int i = 0; i < N - 1; ++i) {
        for (const auto& edge : edges) {
            if (dist[edge.start] != std::numeric_limits<long long>::min() && dist[edge.start] + edge.weight > dist[edge.end]) {
                dist[edge.end] = dist[edge.start] + edge.weight;
            }
        }
    }

    bool hasNegativeCycle = false;
    for (const auto& edge : edges) {
        if (dist[edge.start] != std::numeric_limits<long long>::min() && dist[edge.start] + edge.weight > dist[edge.end]) {
            hasNegativeCycle = true;
            break;
        }
    }

    if (hasNegativeCycle) {
        std::cout << "inf" << std::endl;
    } else {
        std::cout << dist[N] << std::endl;
    }

    return 0;
}