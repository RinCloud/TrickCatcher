#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));

    int ans = INT_MAX;

    for (int i = 0; i < N; i++) {
        cin >> C[i];
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    for (int mask = 0; mask < (1 << N); mask++) {
        vector<int> skill(M, 0);
        int cost = 0;
        for (int i = 0; i < N; i++) {
            if ((mask >> i) & 1) {
                for (int j = 0; j < M; j++) {
                    skill[j] += A[i][j];
                }
                cost += C[i];
            }
        }
        bool valid = true;
        for (int j = 0; j < M; j++) {
            if (skill[j] < X) {
                valid = false;
                break;
            }
        }
        if (valid) {
            ans = min(ans, cost);
        }
    }

    if (ans == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
