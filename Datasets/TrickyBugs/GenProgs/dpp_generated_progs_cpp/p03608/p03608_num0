#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int INF = INT_MAX / 2;

int main() {
    int N, M, R;
    cin >> N >> M >> R;

    vector<int> r(R);
    for (int i = 0; i < R; i++) {
        cin >> r[i];
        r[i]--;
    }

    vector<vector<int>> dist(N, vector<int>(N, INF));
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        A--;
        B--;
        dist[A][B] = C;
        dist[B][A] = C;
    }

    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    sort(r.begin(), r.end());

    int ans = INF;
    do {
        int d = 0;
        for (int i = 0; i < R - 1; i++) {
            d += dist[r[i]][r[i + 1]];
        }
        ans = min(ans, d);
    } while (next_permutation(r.begin(), r.end()));

    cout << ans << endl;

    return 0;
}