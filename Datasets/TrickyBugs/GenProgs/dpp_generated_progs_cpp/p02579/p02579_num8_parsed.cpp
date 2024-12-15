#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int INF = 1e9 + 7;
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

int main() {
    int H, W;
    cin >> H >> W;
    int C_h, C_w, D_h, D_w;
    cin >> C_h >> C_w >> D_h >> D_w;
    C_h--; C_w--; D_h--; D_w--;

    vector<vector<char>> S(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, INF));
    queue<pair<int, int>> q;
    q.push(make_pair(C_h, C_w));
    dist[C_h][C_w] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // Move A: Walk to a road square that is vertically or horizontally adjacent
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < H && 0 <= ny && ny < W && S[nx][ny] == '.' && dist[nx][ny] == INF) {
                dist[nx][ny] = dist[x][y];
                q.push(make_pair(nx, ny));
            }
        }

        // Move B: Use magic to warp to a road square in the 5x5 area centered at current position
        for (int nx = max(0, x - 2); nx <= min(x + 2, H - 1); nx++) {
            for (int ny = max(0, y - 2); ny <= min(y + 2, W - 1); ny++) {
                if (S[nx][ny] == '.' && dist[nx][ny] == INF) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
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