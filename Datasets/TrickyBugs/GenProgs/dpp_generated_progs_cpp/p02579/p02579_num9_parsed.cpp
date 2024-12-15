#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int INF = 1e9;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;
    int C_h, C_w, D_h, D_w;
    cin >> C_h >> C_w >> D_h >> D_w;
    --C_h; --C_w; --D_h; --D_w;
    vector<vector<char>> S(H, vector<char>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> S[i][j];
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, INF));
    dist[C_h][C_w] = 0;
    queue<pair<int, int>> que;
    que.push(make_pair(C_h, C_w));

    while (!que.empty()) {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();

        // Move A
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (0 <= nx && nx < H && 0 <= ny && ny < W && S[nx][ny] != '#' && dist[nx][ny] == INF) {
                dist[nx][ny] = dist[x][y];
                que.push(make_pair(nx, ny));
            }
        }

        // Move B
        for (int i = -2; i <= 2; ++i) {
            for (int j = -2; j <= 2; ++j) {
                int nx = x + i;
                int ny = y + j;

                if (0 <= nx && nx < H && 0 <= ny && ny < W && S[nx][ny] != '#' && dist[nx][ny] == INF) {
                    dist[nx][ny] = dist[x][y] + 1;
                    que.push(make_pair(nx, ny));
                }
            }
        }
    }

    int answer = dist[D_h][D_w];
    if (answer == INF) {
        answer = -1;
    }
    cout << answer << endl;

    return 0;
}