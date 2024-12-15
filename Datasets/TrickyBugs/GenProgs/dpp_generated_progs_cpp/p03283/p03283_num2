#include <iostream>
#include <vector>

int main() {
    int N, M, Q;
    std::cin >> N >> M >> Q;

    std::vector<int> left(M), right(M);
    for (int i = 0; i < M; i++) {
        std::cin >> left[i] >> right[i];
    }

    std::vector<int> p(Q), q(Q);
    for (int i = 0; i < Q; i++) {
        std::cin >> p[i] >> q[i];
    }

    std::vector<std::vector<int>> trains(N + 1, std::vector<int>(N + 1, 0));
    for (int i = 0; i < M; i++) {
        trains[right[i]][left[i]]++;
    }

    std::vector<std::vector<int>> cumulative(N + 1, std::vector<int>(N + 1, 0));
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cumulative[i][j] = cumulative[i][j - 1] + trains[i][j];
        }
    }

    for (int i = 0; i < Q; i++) {
        int result = 0;
        for (int j = p[i]; j <= q[i]; j++) {
            result += cumulative[j][q[i]] - cumulative[j][p[i] - 1];
        }
        std::cout << result << std::endl;
    }

    return 0;
}