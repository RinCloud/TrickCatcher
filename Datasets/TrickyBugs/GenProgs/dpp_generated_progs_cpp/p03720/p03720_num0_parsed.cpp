#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> roadCount(N, 0);

    for (int i = 0; i < M; i++) {
        int a, b;
        std::cin >> a >> b;

        roadCount[a - 1]++;
        roadCount[b - 1]++;
    }

    for (int i = 0; i < N; i++) {
        std::cout << roadCount[i] << std::endl;
    }

    return 0;
}