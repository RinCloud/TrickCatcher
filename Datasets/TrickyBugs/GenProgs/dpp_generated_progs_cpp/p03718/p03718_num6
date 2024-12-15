#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

const int MAX_H = 100;
const int MAX_W = 100;
const int INF = 1e9;

int H, W;
vector<string> pond;
vector<vector<int>> dist;
vector<vector<bool>> visited;

bool isValid(int i, int j) {
    return i >= 0 && i < H && j >= 0 && j < W && pond[i][j] != '.';
}

int bfs(int start_i, int start_j) {
    queue<pii> q;
    q.push({start_i, start_j});
    dist[start_i][start_j] = 0;
    visited[start_i][start_j] = true;

    while (!q.empty()) {
        pii curr = q.front();
        q.pop();
        int curr_i = curr.first;
        int curr_j = curr.second;
        int curr_dist = dist[curr_i][curr_j];

        if (pond[curr_i][curr_j] == 'T') {
            return curr_dist;
        }

        // Horizontal movement
        for (int j = 0; j < W; j++) {
            if (!visited[curr_i][j] && pond[curr_i][j] != 'S' && pond[curr_i][j] != '.' && curr_dist < dist[curr_i][j]) {
                q.push({curr_i, j});
                dist[curr_i][j] = curr_dist;
                visited[curr_i][j] = true;
            }
        }

        // Vertical movement
        for (int i = 0; i < H; i++) {
            if (!visited[i][curr_j] && pond[i][curr_j] != 'S' && pond[i][curr_j] != '.' && curr_dist < dist[i][curr_j]) {
                q.push({i, curr_j});
                dist[i][curr_j] = curr_dist;
                visited[i][curr_j] = true;
            }
        }
    }

    return -1;  // Frog cannot reach T
}

int main() {
    cin >> H >> W;

    pond.resize(H);
    dist.resize(H, vector<int>(W, INF));
    visited.resize(H, vector<bool>(W, false));

    int start_i = -1;
    int start_j = -1;
    int leaves_count = 0;

    for (int i = 0; i < H; i++) {
        cin >> pond[i];
        for (int j = 0; j < W; j++) {
            if (pond[i][j] == 'S') {
                start_i = i;
                start_j = j;
            } else if (pond[i][j] == 'o') {
                leaves_count++;
            }
        }
    }

    int min_leaves_remove = bfs(start_i, start_j);
    if (min_leaves_remove == -1 || min_leaves_remove >= leaves_count) {
        min_leaves_remove = -1;
    } else {
        min_leaves_remove = leaves_count - min_leaves_remove - 1;
    }

    cout << min_leaves_remove << endl;

    return 0;
}