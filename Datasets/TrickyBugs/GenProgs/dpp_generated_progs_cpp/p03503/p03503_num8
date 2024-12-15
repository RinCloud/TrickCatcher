#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> F(N, vector<int>(10));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> F[i][j];
        }
    }

    vector<vector<int>> P(N, vector<int>(11));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= 10; j++) {
            cin >> P[i][j];
        }
    }

    int maxProfit = INT32_MIN;
    // Iterate over all possible combinations of Joisino's shop being open or closed for each period
    for (int mask = 1; mask < (1 << 10); mask++) {
        vector<int> profit(N);
        for (int i = 0; i < N; i++) {
            // Calculate the total profit for Joisino's shop and each individual shop
            for (int j = 0; j < 10; j++) {
                if (mask & (1 << j) && F[i][j]) {
                    profit[i] += P[i][j+1];
                }
            }
        }
        // Calculate the total profit for Joisino's shop
        int totalProfit = 0;
        for (int i = 0; i < N; i++) {
            totalProfit += P[i][0] + profit[i];
        }
        // Update the maximum profit if the current total profit is greater
        maxProfit = max(maxProfit, totalProfit);
    }

    cout << maxProfit << endl;

    return 0;
}