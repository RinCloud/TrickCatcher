#include <iostream>
#include <vector>
#include <cmath>
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

    int maxProfit = -1e9;
    for (int bit = 1; bit < (1 << 10); bit++) {
        vector<int> openPeriods(N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 10; j++) {
                if ((bit >> j) & 1 && F[i][j]) {
                    openPeriods[i]++;
                }
            }
        }

        int totalProfit = 0;
        for (int i = 0; i < N; i++) {
            totalProfit += P[i][openPeriods[i]];
        }
        maxProfit = max(maxProfit, totalProfit);
    }

    cout << maxProfit << endl;

    return 0;
}