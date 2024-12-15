#include <iostream>
#include <vector>

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

    int minCost = -1;

    for (int mask = 0; mask < (1 << N); mask++) {
        vector<int> skills(M, 0);
        int cost = 0;
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                for (int j = 0; j < M; j++) {
                    skills[j] += A[i][j];
                }
                cost += C[i];
            }
        }

        bool achieved = true;
        for (int j = 0; j < M; j++) {
            if (skills[j] < X) {
                achieved = false;
                break;
            }
        }

        if (achieved && (minCost == -1 || cost < minCost)) {
            minCost = cost;
        }
    }

    cout << minCost << endl;

    return 0;
}