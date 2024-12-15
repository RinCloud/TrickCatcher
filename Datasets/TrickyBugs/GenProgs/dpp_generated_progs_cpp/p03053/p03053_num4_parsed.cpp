#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> grid[i][j];
        }
    }

    int operations = 0;
    vector<vector<bool>> visited(H, vector<bool>(W, false));

    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, 1, 0, -1};

    queue<pair<int, int>> q;

    // Find the first black square and add it to the queue
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '#') {
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int k = 0; k < 4; ++k) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && grid[nx][ny] == '.') {
                q.push({nx, ny});
                visited[nx][ny] = true;
                grid[nx][ny] = '#';
            }
        }
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '.') {
                operations++;
            }
        }
    }

    cout << operations << endl;

    return 0;
}