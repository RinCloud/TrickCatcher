#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N * N + 1);
    for (int i = 1; i <= N * N; i++) {
        cin >> P[i];
    }

    vector<int> row(N * N + 1), col(N * N + 1);
    for (int i = 1; i <= N * N; i++) {
        int r = (P[i] - 1) / N + 1;
        int c = (P[i] - 1) % N + 1;
        row[i] = r;
        col[i] = c;
    }

    vector<vector<int>> f(N + 1, vector<int>(N + 1));
    for (int i = 1; i <= N * N; i++) {
        f[row[i]][col[i]] = 1;
        if (row[i] > 1 && f[row[i] - 1][col[i]]) {
            f[row[i]][col[i]] = max(f[row[i]][col[i]], f[row[i] - 1][col[i]] + 1);
        }
        if (col[i] > 1 && f[row[i]][col[i] - 1]) {
            f[row[i]][col[i]] = max(f[row[i]][col[i]], f[row[i]][col[i] - 1] + 1);
        }
    }

    int ans = 0;
    for (int i = 1; i <= N * N; i++) {
        ans = max(ans, f[row[i]][col[i]]);
    }

    cout << ans - 1 << endl;

    return 0;
}