#include <iostream>
#include <vector>

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
    for (int i = 1; i < (1 << 10); i++) {
        vector<int> c(N);
        for (int j = 0; j < 10; j++) {
            if ((i >> j) & 1) {
                for (int k = 0; k < N; k++) {
                    if (F[k][j] == 1) {
                        c[k]++;
                    }
                }
            }
        }

        int profit = 0;
        for (int k = 0; k < N; k++) {
            profit += P[k][c[k]];
        }

        maxProfit = max(maxProfit, profit);
    }

    cout << maxProfit << endl;

    return 0;
}