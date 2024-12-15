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
        for (int j = 0; j < 11; j++) {
            cin >> P[i][j];
        }
    }

    int max_profit = INT_MIN;
    for (int i = 1; i < (1 << 10); i++) {
        vector<int> open_periods(10, 0);
        int profit = 0;
        for (int j = 0; j < 10; j++) {
            if (i & (1 << j)) {
                for (int k = 0; k < N; k++) {
                    if (F[k][j] == 1) {
                        open_periods[j]++;
                    }
                }
            }
        }
        for (int k = 0; k < N; k++) {
            profit += P[k][open_periods[k]];
        }
        max_profit = max(max_profit, profit);
    }

    cout << max_profit << endl;

    return 0;
}