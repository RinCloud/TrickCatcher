#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int INF = 1e9;

struct State {
    int row, col, k, cnt;
};

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<char>> grid(H, vector<char>(W));
    int si, sj;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') {
                si = i;
                sj = j;
            }
        }
    }

    vector<vector<bool>> visited(H, vector<bool>(W, false));

    queue<State> q;
    q.push({si, sj, K, 0});
    visited[si][sj] = true;

    int ans = INF;

    while (!q.empty()) {
        State curr = q.front();
        q.pop();

        int row = curr.row;
        int col = curr.col;
        int k = curr.k;
        int cnt = curr.cnt;

        if (row == 0 || row == H - 1 || col == 0 || col == W - 1) {
            ans = min(ans, cnt);
            continue;
        }

        for (int dir = 0; dir < 4; dir++) {
            int newRow = row + dx[dir];
            int newCol = col + dy[dir];

            if (newRow >= 0 && newRow < H && newCol >= 0 && newCol < W && !visited[newRow][newCol]) {
                if (grid[newRow][newCol] == '.' || (grid[newRow][newCol] == '#' && k > 0)) {
                    if (grid[newRow][newCol] == '#') {
                        k--;
                    }

                    q.push({newRow, newCol, k, cnt + 1});
                    visited[newRow][newCol] = true;
                }
            }
        }
    }

    cout << (ans == INF ? -1 : ans) << endl;

    return 0;
}