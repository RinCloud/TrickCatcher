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
        for (int j = 0; j < 11; j++) {
            cin >> P[i][j];
        }
    }

    int profit = INT_MIN;
    for (int bitmask = 1; bitmask < (1 << 10); bitmask++) {
        vector<int> open_periods(N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 10; j++) {
                if (F[i][j] && (bitmask & (1 << j))) {
                    open_periods[i]++;
                }
            }
        }
        int curr_profit = 0;
        for (int i = 0; i < N; i++) {
            curr_profit += P[i][open_periods[i]];
        }
        profit = max(profit, curr_profit);
    }

    cout << profit << endl;

    return 0;
}