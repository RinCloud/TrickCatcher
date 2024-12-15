#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> P(N * N);
    for (int i = 0; i < N * N; i++) {
        cin >> P[i];
    }

    vector<vector<int>> position(N, vector<int>(N));
    for (int i = 0; i < N * N; i++) {
        position[(P[i] - 1) / N][(P[i] - 1) % N] = i;
    }

    vector<int> dx = {0, 0, -1, 1};
    vector<int> dy = {-1, 1, 0, 0};

    vector<vector<bool>> visited(N, vector<bool>(N, false));
    int ans = 0;

    for (int i = 0; i < N * N; i++) {
        int r = (P[i] - 1) / N, c = (P[i] - 1) % N;
        visited[r][c] = true;

        int minNeighbor = INT_MAX;
        int minCount = 0;

        for (int j = 0; j < 4; j++) {
            int nr = r + dx[j], nc = c + dy[j];
            if (nr >= 0 && nr < N && nc >= 0 && nc < N && visited[nr][nc]) {
                if (position[nr][nc] < minNeighbor) {
                    minNeighbor = position[nr][nc];
                    minCount = 1;
                } else if (position[nr][nc] == minNeighbor) {
                    minCount++;
                }
            }
        }

        ans += minCount;
    }

    cout << ans << endl;

    return 0;
}