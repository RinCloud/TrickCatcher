#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<int>> graph(N);
    std::unordered_set<int> destinations;

    for (int i = 0; i < M; ++i) {
        int a, b;
        std::cin >> a >> b;
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
        destinations.insert({a-1, b-1});
    }

    for (int i = 0; i < graph[0].size(); ++i) {
        int intermediate = graph[0][i];
        for (int j = 0; j < graph[intermediate].size(); ++j) {
            int destination = graph[intermediate][j];
            if (destinations.count(destination) > 0) {
                std::cout << "POSSIBLE" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "IMPOSSIBLE" << std::endl;

    return 0;
}