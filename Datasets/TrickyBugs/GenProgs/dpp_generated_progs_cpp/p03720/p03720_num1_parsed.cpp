#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> road_count(N, 0);

    for (int i = 0; i < M; i++) {
        int a, b;
        std::cin >> a >> b;

        road_count[a-1]++;
        road_count[b-1]++;
    }

    for (int i = 0; i < N; i++) {
        std::cout << road_count[i] << std::endl;
    }

    return 0;
}