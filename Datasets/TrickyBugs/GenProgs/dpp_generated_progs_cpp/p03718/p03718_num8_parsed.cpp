#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> pond(H, vector<char>(W));
    int numLeaves = 0;
    int startX, startY, targetX, targetY;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> pond[i][j];
            if (pond[i][j] == 'o') {
                numLeaves++;
            }
            if (pond[i][j] == 'S') {
                startX = i;
                startY = j;
            }
            if (pond[i][j] == 'T') {
                targetX = i;
                targetY = j;
            }
        }
    }

    // Check if the start and target leaves are in the same row or column
    if (startX == targetX || startY == targetY) {
        cout << 0 << endl;
        return 0;
    }

    // Initialize distance array
    vector<vector<int>> distance(H, vector<int>(W, INT_MAX));

    // Perform BFS
    queue<pair<int, int>> q;
    q.push({startX, startY});
    distance[startX][startY] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // Check all four directions
        for (int dx = -1; dx <= 1; dx++) {
            for (int dy = -1; dy <= 1; dy++) {
                if (dx != 0 && dy != 0) {
                    continue;
                }
                int nx = x + dx;
                int ny = y + dy;

                // Check if the next position is within the pond bounds
                if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
                    // Check if the next position is a valid leaf to jump to
                    if (pond[nx][ny] == 'o' && distance[nx][ny] == INT_MAX) {
                        distance[nx][ny] = distance[x][y] + 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }

    // Check if the target leaf is reachable
    if (distance[targetX][targetY] == INT_MAX) {
        cout << -1 << endl;
        return 0;
    }

    // Remove leaves to block the path from start to target
    int minLeavesToRemove = 0;

    // Check all leaves in the same row as the start leaf
    for (int y = 0; y < W; y++) {
        if (pond[startX][y] == 'o' && distance[startX][y] != INT_MAX) {
            // Check if removing this leaf will block the path to the target
            int distanceFromStart = distance[startX][y];
            int distanceToTarget = distance[targetX][targetY];
            if (distanceFromStart + distanceToTarget > distance[targetX][y]) {
                minLeavesToRemove++;
            }
        }
    }

    // Check all leaves in the same column as the start leaf
    for (int x = 0; x < H; x++) {
        if (pond[x][startY] == 'o' && distance[x][startY] != INT_MAX) {
            // Check if removing this leaf will block the path to the target
            int distanceFromStart = distance[x][startY];
            int distanceToTarget = distance[targetX][targetY];
            if (distanceFromStart + distanceToTarget > distance[x][targetY]) {
                minLeavesToRemove++;
            }
        }
    }

    cout << minLeavesToRemove << endl;

    return 0;
}