#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<int> L(M), R(M);
    for (int i = 0; i < M; i++) {
        cin >> L[i] >> R[i];
    }

    vector<int> p(Q), q(Q);
    for (int i = 0; i < Q; i++) {
        cin >> p[i] >> q[i];
    }

    vector<vector<int>> trainsCount(N+1, vector<int>(N+1, 0));
    for (int i = 0; i < M; i++) {
        trainsCount[L[i]][R[i]]++;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            trainsCount[i][j] += trainsCount[i][j-1];
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            trainsCount[i][j] += trainsCount[i-1][j];
        }
    }

    for (int i = 0; i < Q; i++) {
        int ans = trainsCount[q[i]][q[i]] - trainsCount[q[i]][p[i]-1] - trainsCount[p[i]-1][q[i]] + trainsCount[p[i]-1][p[i]-1];
        cout << ans << endl;
    }

    return 0;
}