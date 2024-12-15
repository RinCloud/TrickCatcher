#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> X(M);
    for (int i = 0; i < M; i++) {
        std::cin >> X[i];
    }

    std::sort(X.begin(), X.end());

    std::vector<int> dist(M - 1);
    for (int i = 0; i < M - 1; i++) {
        dist[i] = X[i + 1] - X[i];
    }

    std::sort(dist.begin(), dist.end());

    int moves = 0;
    for (int i = 0; i < M - N; i++) {
        moves += dist[i];
    }

    std::cout << moves << std::endl;

    return 0;
}