#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> pii;

int H, W, K;
vector<string> building;
vector<vector<bool>> visited;
queue<pair<pii, int>> q;

bool isValid(int x, int y) {
    return (x >= 0 && x < H && y >= 0 && y < W);
}

int bfs(int sx, int sy) {
    visited[sx][sy] = true;
    q.push(make_pair(make_pair(sx, sy), 0));
    
    while (!q.empty()) {
        pii curr = q.front().first;
        int casts = q.front().second;
        q.pop();
        
        int x = curr.first;
        int y = curr.second;
        
        if (x == 0 || y == 0 || x == H - 1 || y == W - 1)
            return casts;
        
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (isValid(nx, ny) && !visited[nx][ny]) {
                if (building[nx][ny] == '#') {
                    if (casts + 1 <= K) {
                        visited[nx][ny] = true;
                        q.push(make_pair(make_pair(nx, ny), casts + 1));
                    }
                } else {
                    visited[nx][ny] = true;
                    q.push(make_pair(make_pair(nx, ny), casts));
                }
            }
        }
    }
    
    return -1;
}

int main() {
    cin >> H >> W >> K;
    
    building.resize(H);
    visited.resize(H, vector<bool>(W, false));
    
    // Input building layout
    for (int i = 0; i < H; i++) {
        cin >> building[i];
    }
    
    // Find the starting position of Takahashi
    int sx, sy;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (building[i][j] == 'S') {
                sx = i;
                sy = j;
                break;
            }
        }
    }
    
    int result = bfs(sx, sy);
    cout << result << endl;
    
    return 0;
}