#include <iostream>
#include <vector>
#include <limits>

const long long INF = std::numeric_limits<long long>::max();

struct Edge {
    int from;
    int to;
    long long weight;
};

int main() {
    int N, M;
    std::cin >> N >> M;
    
    std::vector<Edge> edges;
    for (int i = 0; i < M; ++i) {
        int a, b;
        long long c;
        std::cin >> a >> b >> c;
        edges.push_back(Edge{a, b, c});
    }
    
    std::vector<long long> dist(N + 1, INF);
    dist[1] = 0;
    
    for (int iter = 0; iter < N; ++iter) {
        for (const auto& edge : edges) {
            if (dist[edge.from] != INF && dist[edge.to] > dist[edge.from] + edge.weight) {
                dist[edge.to] = dist[edge.from] + edge.weight;
            }
        }
    }
    
    bool negative_cycle = false;
    for (const auto& edge : edges) {
        if (dist[edge.from] != INF && dist[edge.to] > dist[edge.from] + edge.weight) {
            negative_cycle = true;
            break;
        }
    }
    
    if (negative_cycle) {
        std::cout << "inf" << std::endl;
    } else {
        std::cout << dist[N] << std::endl;
    }
    
    return 0;
}