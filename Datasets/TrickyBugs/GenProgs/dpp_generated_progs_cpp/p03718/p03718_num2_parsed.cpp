#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;
const int dx[] = {0, 1, 0, -1};
const int dy[] = {1, 0, -1, 0};

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> pond(H);
    for (int i = 0; i < H; i++) {
        cin >> pond[i];
    }

    int sx, sy, tx, ty;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (pond[i][j] == 'S') {
                sx = i;
                sy = j;
            } else if (pond[i][j] == 'T') {
                tx = i;
                ty = j;
            }
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, INF));
    dist[sx][sy] = 0;

    queue<pair<int, int>> que;
    que.push(make_pair(sx, sy));

    while (!que.empty()) {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();

        if (x == tx && y == ty) {
            break;
        }

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            while (0 <= nx && nx < H && 0 <= ny && ny < W && pond[nx][ny] != 'o') {
                if (dist[nx][ny] > dist[x][y] + 1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    que.push(make_pair(nx, ny));
                }
                nx += dx[dir];
                ny += dy[dir];
            }
        }
    }

    if (dist[tx][ty] == INF) {
        cout << -1 << endl;
    } else {
        int ans = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (pond[i][j] == 'o' && dist[i][j] <= dist[tx][ty]) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}