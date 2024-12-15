#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    vector<vector<bool>> visited(H, vector<bool>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
            visited[i][j] = false;
        }
    }

    queue<pair<int, int>> q;

    // Find the initial black squares
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                visited[i][j] = true;
                q.push({i, j});
            }
        }
    }

    int operations = 0;

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for (int j = 0; j < 4; j++) {
                int nx = x + dx[j];
                int ny = y + dy[j];

                if (nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && grid[nx][ny] == '.') {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }

        if (!q.empty()) {
            operations++;
        }
    }

    cout << operations << endl;

    return 0;
}