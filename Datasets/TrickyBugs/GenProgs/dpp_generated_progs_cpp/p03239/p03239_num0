#include <iostream>
#include <vector>
#include <algorithm>

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

    int minCost = -1; // Initialize with a large value
    for (int i = 0; i < N; i++) {
        if (routes[i].time <= T) {
            if (minCost == -1 || routes[i].cost < minCost) {
                minCost = routes[i].cost;
            }
        }
    }

    if (minCost == -1) {
        std::cout << "TLE" << std::endl;
    } else {
        std::cout << minCost << std::endl;
    }

    return 0;
}