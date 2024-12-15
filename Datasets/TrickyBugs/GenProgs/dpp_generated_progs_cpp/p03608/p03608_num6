#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N, M, R;
    cin >> N >> M >> R;

    vector<int> r(R);
    for (int i = 0; i < R; i++) {
        cin >> r[i];
    }

    vector<vector<int>> dist(N, vector<int>(N, INT_MAX));
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        dist[A - 1][B - 1] = C;
        dist[B - 1][A - 1] = C;
    }

    for (int i = 0; i < N; i++) {
        dist[i][i] = 0;
    }

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    sort(r.begin(), r.end());
    int ans = INT_MAX;

    do {
        int curr_dist = 0;
        for (int i = 1; i < R; i++) {
            curr_dist += dist[r[i - 1] - 1][r[i] - 1];
        }
        ans = min(ans, curr_dist);
    } while (next_permutation(r.begin(), r.end()));

    cout << ans << endl;

    return 0;
}