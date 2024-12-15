#include <iostream>
#include <vector>
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

    int min_cost = std::numeric_limits<int>::max();
    bool achievable = false;

    for (int bitmask = 0; bitmask < (1 << N); bitmask++) {
        int total_cost = 0;
        std::vector<int> skills(M, 0);

        for (int i = 0; i < N; i++) {
            if (bitmask & (1 << i)) {
                total_cost += C[i];
                for (int j = 0; j < M; j++) {
                    skills[j] += A[i][j];
                }
            }
        }

        bool goal_reached = true;
        for (int j = 0; j < M; j++) {
            if (skills[j] < X) {
                goal_reached = false;
                break;
            }
        }

        if (goal_reached) {
            min_cost = std::min(min_cost, total_cost);
            achievable = true;
        }
    }

    if (achievable) {
        std::cout << min_cost << std::endl;
    } else {
        std::cout << -1 << std::endl;
    }

    return 0;
}