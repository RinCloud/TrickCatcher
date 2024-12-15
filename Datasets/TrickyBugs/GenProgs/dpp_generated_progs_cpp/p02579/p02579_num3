#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int C_h, C_w;
    cin >> C_h >> C_w;
    int D_h, D_w;
    cin >> D_h >> D_w;
    C_h--;
    C_w--;
    D_h--;
    D_w--;

    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    vector<vector<int>> dist(H, vector<int>(W, -1));

    queue<pair<int, int>> que;
    que.push(make_pair(C_h, C_w));
    dist[C_h][C_w] = 0;

    while (!que.empty()) {
        auto p = que.front();
        que.pop();
        int i = p.first;
        int j = p.second;

        vector<pair<int, int>> next_moves = {{i - 1, j}, {i, j + 1}, {i + 1, j}, {i, j - 1}};

        for (auto next_p : next_moves) {
            int next_i = next_p.first;
            int next_j = next_p.second;

            if (next_i < 0 || next_i >= H || next_j < 0 || next_j >= W) {
                continue;
            }
            if (S[next_i][next_j] == '#') {
                continue;
            }
            if (dist[next_i][next_j] != -1) {
                continue;
            }
            dist[next_i][next_j] = dist[i][j];
            que.push(next_p);
        }
        for (int di = -2; di <= 2; di++) {
            for (int dj = -2; dj <= 2; dj++) {
                int next_i = i + di;
                int next_j = j + dj;

                if (next_i < 0 || next_i >= H || next_j < 0 || next_j >= W) {
                    continue;
                }
                if (S[next_i][next_j] == '#') {
                    continue;
                }
                if (dist[next_i][next_j] != -1) {
                    continue;
                }
                dist[next_i][next_j] = dist[i][j] + 1;
                que.push(make_pair(next_i, next_j));
            }
        }
    }

    cout << dist[D_h][D_w] << endl;

    return 0;
}