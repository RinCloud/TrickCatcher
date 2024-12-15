#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> roads_count(N, 0);
    for (int i = 0; i < M; i++) {
        int a, b;
        std::cin >> a >> b;
        roads_count[a - 1]++;
        roads_count[b - 1]++;
    }

    for (int i = 0; i < N; i++) {
        std::cout << roads_count[i] << std::endl;
    }

    return 0;
}