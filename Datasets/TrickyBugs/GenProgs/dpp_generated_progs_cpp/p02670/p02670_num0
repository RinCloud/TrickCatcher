#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N * N);
    for (int i = 0; i < N * N; i++) {
        cin >> P[i];
    }

    vector<pair<int, int>> seat(N * N + 1);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            seat[P[i * N + j]] = make_pair(i, j);
        }
    }

    vector<vector<int>> hate(N, vector<int>(N, 0));
    int ans = 0;
    for (int i = 1; i <= N * N; i++) {
        int fi = seat[i].first;
        int fj = seat[i].second;
        int dy[] = {1, 0, -1, 0};
        int dx[] = {0, 1, 0, -1};
        for (int j = 0; j < 4; j++) {
            int ni = fi + dy[j];
            int nj = fj + dx[j];
            if (ni >= 0 && ni < N && nj >= 0 && nj < N && P[ni * N + nj] > i) {
                hate[ni][nj]++;
                hate[fi][fj]--;
                ans++;
            }
        }
    }

    for (int i = 1; i < N; i++) {
        hate[0][i] += hate[0][i - 1];
        hate[i][0] += hate[i - 1][0];
    }

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            hate[i][j] += max(hate[i - 1][j], hate[i][j - 1]);
        }
    }

    cout << ans - hate[N - 1][N - 1] << endl;

    return 0;
}