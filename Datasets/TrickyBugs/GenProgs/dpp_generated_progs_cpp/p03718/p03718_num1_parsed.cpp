#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> pond;
vector<vector<bool>> visited;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int frogLeavesCount = 0;
int removedLeavesCount = 0;

void dfs(int x, int y) {
    visited[x][y] = true;
    frogLeavesCount++;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < pond.size() && ny >= 0 && ny < pond[0].size() && pond[nx][ny] == 'o' && !visited[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    int H, W;
    cin >> H >> W;

    pond.resize(H, vector<char>(W));
    visited.resize(H, vector<bool>(W, false));

    int startX, startY;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> pond[i][j];
            
            if (pond[i][j] == 'S') {
                startX = i;
                startY = j;
            }
        }
    }

    removedLeavesCount = 0;

    dfs(startX, startY);

    if (visited[startX][startY]) {
        cout << frogLeavesCount - 1 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}