#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> roadsCount(N, 0);

    for (int i = 0; i < M; ++i) {
        int a, b;
        std::cin >> a >> b;

        roadsCount[a-1]++;
        roadsCount[b-1]++;
    }

    for (int i = 0; i < N; ++i) {
        std::cout << roadsCount[i] << "\n";
    }

    return 0;
}