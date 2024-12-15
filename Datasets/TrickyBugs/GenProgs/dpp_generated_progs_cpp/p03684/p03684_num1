#include <iostream>
#include <vector>
#include <algorithm>

struct Town {
    int x;
    int y;
};

int main() {
    int N;
    std::cin >> N;

    std::vector<Town> towns(N);
    for (int i = 0; i < N; i++) {
        std::cin >> towns[i].x >> towns[i].y;
    }

    std::sort(towns.begin(), towns.end(), [](const Town& a, const Town& b) {
        return a.x < b.x || (a.x == b.x && a.y < b.y);
    });

    int cost = 0;
    for (int i = 0; i < N-1; i++) {
        cost += std::min(std::abs(towns[i].x - towns[i+1].x), std::abs(towns[i].y - towns[i+1].y));
    }

    std::cout << cost << std::endl;

    return 0;
}