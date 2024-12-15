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

    std::vector<int> distances(M - 1);
    for (int i = 1; i < M; i++) {
        distances[i - 1] = X[i] - X[i - 1];
    }

    std::sort(distances.begin(), distances.end());

    int totalMoves = 0;
    for (int i = 0; i < M - N; i++) {
        totalMoves += distances[i];
    }

    std::cout << totalMoves << std::endl;

    return 0;
}