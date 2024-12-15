#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int MAX_H = 100;
const int MAX_W = 100;

int H, W;
char pond[MAX_H][MAX_W];
int dist[MAX_H][MAX_W];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool inside(int x, int y) {
    return x >= 0 && x < H && y >= 0 && y < W;
}

int bfs(int sx, int sy, int tx, int ty) {
    memset(dist, -1, sizeof(dist));
    dist[sx][sy] = 0;
    queue<pair<int, int>> q;
    q.push({sx, sy});

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == tx && y == ty) {
            return dist[x][y];
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            while (inside(nx, ny) && pond[nx][ny] != 'o') {
                if (dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
                nx += dx[i];
                ny += dy[i];
            }
        }
    }

    return -1;
}

int main() {
    cin >> H >> W;
    int sx, sy, tx, ty;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> pond[i][j];
            if (pond[i][j] == 'S') {
                sx = i;
                sy = j;
            } else if (pond[i][j] == 'T') {
                tx = i;
                ty = j;
            }
        }
    }

    int minLeavesToRemove = bfs(sx, sy, tx, ty) - 1;
    cout << minLeavesToRemove << endl;

    return 0;
}