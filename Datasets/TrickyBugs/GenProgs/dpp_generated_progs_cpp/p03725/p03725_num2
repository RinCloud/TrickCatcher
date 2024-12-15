#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Room {
    int row;
    int col;
    int casts;
    
    Room(int r, int c, int ca) : row(r), col(c), casts(ca) {}
};

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    
    vector<vector<char>> building(H, vector<char>(W));
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    
    int startRow, startCol;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> building[i][j];
            if (building[i][j] == 'S') {
                startRow = i;
                startCol = j;
            }
        }
    }
    
    const vector<int> dx = {-1, 1, 0, 0};
    const vector<int> dy = {0, 0, -1, 1};
    
    queue<Room> q;
    q.push(Room(startRow, startCol, 0));
    visited[startRow][startCol] = true;
    
    while (!q.empty()) {
        Room currRoom = q.front();
        q.pop();
        
        if (building[currRoom.row][currRoom.col] != '.' && building[currRoom.row][currRoom.col] != 'S') {
            K--;
        }
        
        if (K < 0) {
            cout << currRoom.casts << endl;
            return 0;
        }
        
        for (int i = 0; i < 4; i++) {
            int newRow = currRoom.row + dx[i];
            int newCol = currRoom.col + dy[i];
            
            if (newRow >= 0 && newRow < H && newCol >= 0 && newCol < W && !visited[newRow][newCol]) {
                if (building[newRow][newCol] != '#') {
                    q.push(Room(newRow, newCol, currRoom.casts));
                    visited[newRow][newCol] = true;
                } else {
                    if (currRoom.casts + 1 <= K) {
                        q.push(Room(newRow, newCol, currRoom.casts + 1));
                        visited[newRow][newCol] = true;
                    }
                }
            }
        }
    }
    
    return 0;
}