#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_H = 1000;
const int MAX_W = 1000;

int H, W;
vector<string> grid;
vector<vector<bool>> visited;
queue<pair<int, int>> q;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool isValid(int x, int y) {
    return (x >= 0 && x < H && y >= 0 && y < W && !visited[x][y]);
}

void bfs() {
    int operations = 0;
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            
            if (isValid(newX, newY) && grid[newX][newY] == '.') {
                visited[newX][newY] = true;
                q.push({newX, newY});
                operations++;
            }
        }
    }

    cout << operations << endl;
}

int main() {
    cin >> H >> W;
    
    grid.resize(H);
    visited.assign(H, vector<bool>(W, false));
    
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                visited[i][j] = true;
                q.push({i, j});
            }
        }
    }
    
    bfs();
    
    return 0;
}