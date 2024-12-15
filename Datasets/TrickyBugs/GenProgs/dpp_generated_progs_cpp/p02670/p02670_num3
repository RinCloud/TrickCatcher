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

    vector<int> pos(N * N + 1);
    for (int i = 0; i < N * N; i++) {
        pos[P[i]] = i + 1;
    }

    int ans = 0;
    for (int i = 1; i <= N * N; i++) {
        int x = (pos[i] - 1) / N;
        int y = (pos[i] - 1) % N;

        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        int cnt = 0;
        for (int j = 0; j < 4; j++) {
            int nx = x + dx[j];
            int ny = y + dy[j];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                int p = P[nx * N + ny];
                if (pos[p] > pos[i]) {
                    cnt++;
                }
            }
        }

        ans += cnt;
    }

    cout << ans << endl;

    return 0;
}