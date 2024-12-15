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
        for (int j = 0; j < 11; j++) {
            cin >> P[i][j];
        }
    }

    int maxProfit = -1e7;
    for (int mask = 1; mask < (1 << 10); mask++) {
        int profit = 0;
        for (int i = 0; i < N; i++) {
            int cnt = 0;
            for (int j = 0; j < 10; j++) {
                if ((mask >> j) & F[i][j]) {
                    cnt++;
                }
            }
            profit += P[i][cnt];
        }
        maxProfit = max(maxProfit, profit);
    }
    cout << maxProfit << endl;
    return 0;
}
