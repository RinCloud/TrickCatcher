#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Point {
    int row;
    int col;
    
    Point(int r, int c) : row(r), col(c) {}
};

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    
    vector<vector<char>> building(H, vector<char>(W));
    int startRow = 0;
    int startCol = 0;
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> building[i][j];
            if (building[i][j] == 'S') {
                startRow = i;
                startCol = j;
            }
        }
    }
    
    vector<vector<int>> casts(H, vector<int>(W, -1));
    queue<Point> q;
    q.push(Point(startRow, startCol));
    casts[startRow][startCol] = 0;
    
    int minCasts = -1;
    
    while (!q.empty()) {
        Point curr = q.front();
        q.pop();
        
        int row = curr.row;
        int col = curr.col;
        int cast = casts[row][col];
        
        if (row == 0 || row == H - 1 || col == 0 || col == W - 1) {
            minCasts = cast;
            break;
        }
        
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        
        for (int i = 0; i < 4; i++) {
            for (int j = 1; j <= K; j++) {
                int newRow = row + j * dx[i];
                int newCol = col + j * dy[i];
                
                if (newRow >= 0 && newRow < H && newCol >= 0 && newCol < W && casts[newRow][newCol] == -1) {
                    if (building[newRow][newCol] == '#') {
                        break;
                    }
                    
                    q.push(Point(newRow, newCol));
                    casts[newRow][newCol] = cast + 1;
                }
            }
        }
    }
    
    cout << minCasts << endl;
    
    return 0;
}