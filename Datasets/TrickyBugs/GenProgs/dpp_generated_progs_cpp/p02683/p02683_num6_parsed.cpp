#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        cin >> C[i];
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    int min_cost = numeric_limits<int>::max();
    bool has_solution = false;

    for (int mask = 0; mask < (1 << N); mask++) {
        vector<int> skills(M, 0);
        int cost = 0;

        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                cost += C[i];
                for (int j = 0; j < M; j++) {
                    skills[j] += A[i][j];
                }
            }
        }

        bool has_required_skills = true;
        for (int j = 0; j < M; j++) {
            if (skills[j] < X) {
                has_required_skills = false;
                break;
            }
        }

        if (has_required_skills) {
            min_cost = min(min_cost, cost);
            has_solution = true;
        }
    }

    if (has_solution) {
        cout << min_cost << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}