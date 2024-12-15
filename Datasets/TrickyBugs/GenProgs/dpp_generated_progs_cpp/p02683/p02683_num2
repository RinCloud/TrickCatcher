#include <iostream>
#include <vector>
#include <climits>
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

    // Iterate through all possible combinations
    for (int mask = 0; mask < (1 << N); mask++) {
        int totalCost = 0;
        vector<int> skills(M, 0);

        // Calculate the total cost and skills for the current combination
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                totalCost += C[i];
                for (int j = 0; j < M; j++) {
                    skills[j] += A[i][j];
                }
            }
        }

        // Check if the total cost is less than or equal to X and all skills are greater than or equal to X
        bool valid = true;
        for (int j = 0; j < M; j++) {
            if (skills[j] < X) {
                valid = false;
                break;
            }
        }

        // Update the minimum cost if the current combination is valid
        if (valid) {
            minCost = min(minCost, totalCost);
        }
    }

    // Output the minimum cost
    if (minCost == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minCost << endl;
    }

    return 0;
}