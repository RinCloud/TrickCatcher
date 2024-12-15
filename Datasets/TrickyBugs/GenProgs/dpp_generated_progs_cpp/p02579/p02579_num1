#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int H, W;
    cin >> H >> W;
    int C_h, C_w;
    cin >> C_h >> C_w;
    int D_h, D_w;
    cin >> D_h >> D_w;

    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    C_h--; C_w--; D_h--; D_w--;

    vector<vector<int>> dist(H, vector<int>(W, INF));
    dist[C_h][C_w] = 0;

    queue<pair<int, int>> q;
    q.push({C_h, C_w});

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        vector<pair<int, int>> adj = {{x-1, y}, {x+1, y}, {x, y-1}, {x, y+1}};

        for (auto p : adj) {
            int nx = p.first;
            int ny = p.second;

            if (nx < 0 || nx >= H || ny < 0 || ny >= W || S[nx][ny] == '#' || dist[nx][ny] < INF) {
                continue;
            }

            dist[nx][ny] = dist[x][y];
            q.push({nx, ny});
        }

        for (int dx = -2; dx <= 2; dx++) {
            for (int dy = -2; dy <= 2; dy++) {
                int nx = x + dx;
                int ny = y + dy;

                if (nx < 0 || nx >= H || ny < 0 || ny >= W || S[nx][ny] == '#' || dist[nx][ny] < INF) {
                    continue;
                }

                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    if (dist[D_h][D_w] == INF) {
        cout << -1 << endl;
    } else {
        cout << dist[D_h][D_w] << endl;
    }

    return 0;
}