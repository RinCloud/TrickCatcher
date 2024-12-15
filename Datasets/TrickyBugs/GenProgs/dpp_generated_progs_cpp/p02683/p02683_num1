#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main() {
    int N, M, X;
    std::cin >> N >> M >> X;

    std::vector<int> C(N);
    std::vector<std::vector<int>> A(N, std::vector<int>(M));

    for (int i = 0; i < N; i++) {
        std::cin >> C[i];
        for (int j = 0; j < M; j++) {
            std::cin >> A[i][j];
        }
    }

    int min_amount = std::numeric_limits<int>::max();

    // Generate all possible combinations of problems
    for (int bitmask = 0; bitmask < (1 << N); bitmask++) {
        std::vector<int> total_skill(M);

        int cost = 0;
        for (int i = 0; i < N; i++) {
            if (bitmask & (1 << i)) {
                cost += C[i];
                for (int j = 0; j < M; j++) {
                    total_skill[j] += A[i][j];
                }
            }
        }

        bool achievable = true;
        for (int j = 0; j < M; j++) {
            if (total_skill[j] < X) {
                achievable = false;
                break;
            }
        }

        if (achievable) {
            min_amount = std::min(min_amount, cost);
        }
    }

    if (min_amount == std::numeric_limits<int>::max()) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << min_amount << std::endl;
    }

    return 0;
}