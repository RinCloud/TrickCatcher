#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> grid(H, vector<char>(W));
    pair<int, int> start, target;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') {
                start = {i, j};
            } else if (grid[i][j] == 'T') {
                target = {i, j};
            }
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, -1));
    dist[start.first][start.second] = 0;

    queue<pair<int, int>> q;
    q.push(start);

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        // Explore in all four directions: up, down, left, right
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        for (int dir = 0; dir < 4; dir++) {
            int nr = r + dr[dir];
            int nc = c + dc[dir];
            while (nr >= 0 && nr < H && nc >= 0 && nc < W && grid[nr][nc] != '.') {
                if (dist[nr][nc] == -1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    q.push({nr, nc});
                }
                if (grid[nr][nc] == 'T') {
                    cout << dist[nr][nc] - 1 << endl;
                    return 0;
                }
                nr += dr[dir];
                nc += dc[dir];
            }
        }
    }

    cout << -1 << endl;

    return 0;
}