#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int H, W;
vector<string> canvas;
vector<vector<bool>> visited;

bool bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if (visited[x][y]) continue;
        visited[x][y] = true;
        
        if (canvas[x][y] == '.') continue;
        
        if (y + 1 < W && canvas[x][y+1] == '#') {
            q.push({x, y+1});
        }
        
        if (x + 1 < H && canvas[x+1][y] == '#') {
            q.push({x+1, y});
        }
        
        if (y > 0 && canvas[x][y-1] == '#') {
            q.push({x, y-1});
        }
        
        if (x > 0 && canvas[x-1][y] == '#') {
            q.push({x-1, y});
        }
    }
    
    return visited[H-1][W-1];
}

int main() {
    cin >> H >> W;
    canvas.resize(H);
    visited.resize(H, vector<bool>(W, false));
    
    for (int i = 0; i < H; i++) {
        cin >> canvas[i];
    }
    
    if (bfs(0, 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}