#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;

typedef pair<int, int> pii;

const int INF = INT_MAX;

int main() {
    int H, W;
    cin >> H >> W;
    int C_h, C_w;
    int D_h, D_w;
    cin >> C_h >> C_w >> D_h >> D_w;
    C_h--; C_w--; D_h--; D_w--;
    vector<vector<char>> S(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }

    // Distance array
    vector<vector<int>> dist(H, vector<int>(W, INF));

    // Queue for BFS
    queue<pii> q;
    q.push(make_pair(C_h, C_w));
    dist[C_h][C_w] = 0;

    // 4 directions to move
    vector<int> dx = {0, 0, -1, 1};
    vector<int> dy = {-1, 1, 0, 0};

    // Keep visiting each cell as long as there is any cell left
    while (!q.empty()) {
        pii curr = q.front();
        q.pop();
        int curr_h = curr.first;
        int curr_w = curr.second;

        // Check all four adjacent cells
        for (int i = 0; i < 4; i++) {
            int next_h = curr_h + dy[i];
            int next_w = curr_w + dx[i];

            // Are we going out of the maze?
            if (next_h < 0 || next_h >= H || next_w < 0 || next_w >= W) {
                continue;
            }

            // Are we hitting a wall?
            if (S[next_h][next_w] == '#') {
                continue;
            }

            // Explore only if it is the first time we are visiting the next cell
            if (dist[next_h][next_w] == INF) {
                q.push(make_pair(next_h, next_w));
                dist[next_h][next_w] = dist[curr_h][curr_w];
            }
        }

        // Move B
        for (int i = -2; i <= 2; i++) {
            for (int j = -2; j <= 2; j++) {
                int next_h = curr_h + i;
                int next_w = curr_w + j;

                // Are we going out of the maze?
                if (next_h < 0 || next_h >= H || next_w < 0 || next_w >= W) {
                    continue;
                }

                // Are we hitting a wall?
                if (S[next_h][next_w] == '#') {
                    continue;
                }

                // Explore only if it is the first time we are visiting the next cell
                if (dist[next_h][next_w] == INF) {
                    q.push(make_pair(next_h, next_w));
                    dist[next_h][next_w] = dist[curr_h][curr_w] + 1;
                }
            }
        }
    }

    // Minimum number of times the magic is used
    int min_moves = dist[D_h][D_w];

    if (min_moves == INF) {
        min_moves = -1;
    }

    cout << min_moves << endl;

    return 0;
}