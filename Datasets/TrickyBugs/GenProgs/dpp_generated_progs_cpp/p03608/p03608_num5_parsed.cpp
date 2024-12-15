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

    vector<vector<int>> dist(N + 1, vector<int>(N + 1, INT_MAX));
    for (int i = 1; i <= N; i++) {
        dist[i][i] = 0;
    }

    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        dist[A][B] = C;
        dist[B][A] = C;
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    sort(r.begin(), r.end());

    int ans = INT_MAX;
    do {
        int currentDist = 0;
        for (int i = 1; i < R; i++) {
            currentDist += dist[r[i - 1]][r[i]];
        }
        ans = min(ans, currentDist);
    } while (next_permutation(r.begin(), r.end()));

    cout << ans << endl;

    return 0;
}