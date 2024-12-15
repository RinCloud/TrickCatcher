#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, -1));
    queue<pair<int, int>> q;
    int blackCount = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                q.push({i, j});
                dist[i][j] = 0;
                blackCount++;
            }
        }
    }

    int operations = 0;
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        if (r > 0 && grid[r - 1][c] == '.' && dist[r - 1][c] == -1) {
            q.push({r - 1, c});
            dist[r - 1][c] = dist[r][c] + 1;
            blackCount++;
            operations = max(operations, dist[r - 1][c]);
        }
        if (r < H - 1 && grid[r + 1][c] == '.' && dist[r + 1][c] == -1) {
            q.push({r + 1, c});
            dist[r + 1][c] = dist[r][c] + 1;
            blackCount++;
            operations = max(operations, dist[r + 1][c]);
        }
        if (c > 0 && grid[r][c - 1] == '.' && dist[r][c - 1] == -1) {
            q.push({r, c - 1});
            dist[r][c - 1] = dist[r][c] + 1;
            blackCount++;
            operations = max(operations, dist[r][c - 1]);
        }
        if (c < W - 1 && grid[r][c + 1] == '.' && dist[r][c + 1] == -1) {
            q.push({r, c + 1});
            dist[r][c + 1] = dist[r][c] + 1;
            blackCount++;
            operations = max(operations, dist[r][c + 1]);
        }
    }

    cout << operations << endl;

    return 0;
}