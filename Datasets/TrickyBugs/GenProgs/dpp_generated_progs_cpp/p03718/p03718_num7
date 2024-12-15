#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Point {
    int x, y;
};

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<string> pond(H);
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    vector<vector<int>> steps(H, vector<int>(W, -1));
    
    Point start, end;
    
    for (int i = 0; i < H; i++) {
        cin >> pond[i];
        for (int j = 0; j < W; j++) {
            if (pond[i][j] == 'S') {
                start = {i, j};
                visited[i][j] = true;
                steps[i][j] = 0;
            } else if (pond[i][j] == 'T') {
                end = {i, j};
            }
        }
    }
    
    queue<Point> q;
    q.push(start);
    
    while (!q.empty()) {
        Point current = q.front();
        q.pop();
        
        if (current.x == end.x || current.y == end.y)
            break;
        
        vector<Point> neighbors = {{current.x - 1, current.y}, {current.x, current.y - 1},
                                   {current.x + 1, current.y}, {current.x, current.y + 1}};
        
        for (int i = 0; i < 4; i++) {
            int nx = neighbors[i].x;
            int ny = neighbors[i].y;
            
            if (nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && pond[nx][ny] != '.') {
                q.push({nx, ny});
                visited[nx][ny] = true;
                steps[nx][ny] = steps[current.x][current.y] + 1;
            }
        }
    }
    
    if (steps[end.x][end.y] == -1) {
        cout << -1 << endl;
    } else {
        int leavesToRemove = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (pond[i][j] == 'o' && steps[i][j] != -1 && steps[i][j] < steps[end.x][end.y]) {
                    leavesToRemove++;
                }
            }
        }
        cout << leavesToRemove << endl;
    }
    
    return 0;
}