#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int INF = INT_MAX;
const vector<int> dr = {-1, 1, 0, 0};
const vector<int> dc = {0, 0, -1, 1};

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<char>> grid(H, vector<char>(W));
    int start_row, start_col;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') {
                start_row = i;
                start_col = j;
            }
        }
    }

    vector<vector<int>> dist(H, vector<int>(W, INF));
    dist[start_row][start_col] = 0;
    queue<pair<int, int>> q;
    q.push({start_row, start_col});

    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            for (int k = 0; k <= K; k++) {
                int next_r = r + k * dr[i];
                int next_c = c + k * dc[i];

                if (next_r < 0 || next_r >= H || next_c < 0 || next_c >= W) {
                    break;
                }

                if (grid[next_r][next_c] == '#') {
                    continue;
                }

                if (dist[next_r][next_c] > dist[r][c] + 1) {
                    dist[next_r][next_c] = dist[r][c] + 1;
                    q.push({next_r, next_c});
                }
            }
        }
    }

    int min_casts = INF;

    for (int i = 0; i < H; i++) {
        min_casts = min(min_casts, dist[i][0]);
        min_casts = min(min_casts, dist[i][W - 1]);
    }

    for (int j = 0; j < W; j++) {
        min_casts = min(min_casts, dist[0][j]);
        min_casts = min(min_casts, dist[H - 1][j]);
    }

    cout << min_casts << endl;

    return 0;
}