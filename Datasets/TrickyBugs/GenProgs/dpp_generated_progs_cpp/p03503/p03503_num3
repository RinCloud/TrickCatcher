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

    int maxProfit = -1e9;
    for (int i = 1; i < (1 << 10); i++) {
        vector<int> isOpen(N);

        for (int j = 0; j < 10; j++) {
            if ((i >> j) & 1) {
                for (int k = 0; k < N; k++) {
                    if (F[k][j]) {
                        isOpen[k] = 1;
                    }
                }
            }
        }

        int profit = 0;
        for (int j = 0; j < N; j++) {
            int cnt = 0;
            for (int k = 0; k < 10; k++) {
                if (isOpen[j] && F[j][k]) {
                    cnt++;
                }
            }
            profit += P[j][cnt];
        }
        maxProfit = max(maxProfit, profit);
    }

    cout << maxProfit << endl;

    return 0;
}