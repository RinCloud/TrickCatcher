#include <iostream>
#include <vector>
#include <limits>

struct Route {
    int cost;
    int time;
};

int main() {
    int N, T;
    std::cin >> N >> T;

    std::vector<Route> routes(N);
    for (int i = 0; i < N; i++) {
        std::cin >> routes[i].cost >> routes[i].time;
    }

    int minCost = std::numeric_limits<int>::max();
    for (int i = 0; i < N; i++) {
        if (routes[i].time <= T) {
            minCost = std::min(minCost, routes[i].cost);
        }
    }

    if (minCost == std::numeric_limits<int>::max()) {
        std::cout << "TLE" << std::endl;
    } else {
        std::cout << minCost << std::endl;
    }

    return 0;
}