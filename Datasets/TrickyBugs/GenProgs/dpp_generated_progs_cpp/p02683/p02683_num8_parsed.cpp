#include <iostream>
#include <climits>
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

    int minCost = INT_MAX;
    for (int bitmask = 0; bitmask < (1 << N); bitmask++) {
        vector<int> skills(M);
        int totalCost = 0;
        for (int i = 0; i < N; i++) {
            if (bitmask & (1 << i)) {
                totalCost += C[i];
                for (int j = 0; j < M; j++) {
                    skills[j] += A[i][j];
                }
            }
        }
        bool achievable = true;
        for (int j = 0; j < M; j++) {
            if (skills[j] < X) {
                achievable = false;
                break;
            }
        }
        if (achievable) {
            minCost = min(minCost, totalCost);
        }
    }

    if (minCost == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minCost << endl;
    }

    return 0;
}