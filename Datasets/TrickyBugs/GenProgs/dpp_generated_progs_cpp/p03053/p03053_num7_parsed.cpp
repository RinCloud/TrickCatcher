#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Function to check if a given position is valid or not
bool isValid(int x, int y, int row, int col) {
    return (x >= 0 && x < row && y >= 0 && y < col);
}

// Function to perform BFS traversal
int performOperations(vector<vector<char>>& grid) {
    int row = grid.size();
    int col = grid[0].size();
    int operations = 0;
    
    // Define directions for movement in the grid
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    
    // Create a visited array to keep track of visited squares
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    
    // Create a queue to perform BFS
    queue<pair<int, int>> q;
    
    // Find the initial black squares and add them to the queue
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == '#') {
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }
    
    // Perform BFS traversal
    while (!q.empty()) {
        int size = q.size();
        
        for (int i = 0; i < size; i++) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            // Check all adjacent squares
            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];
                
                // If adjacent square is valid and white, change it to black and add to queue
                if (isValid(nx, ny, row, col) && !visited[nx][ny] && grid[nx][ny] == '.') {
                    q.push({nx, ny});
                    visited[nx][ny] = true;
                    grid[nx][ny] = '#';
                }
            }
        }
        
        // Increment the number of operations performed
        operations++;
    }
    
    return operations - 1; // Subtract 1 as the initial black squares are already counted
}

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<vector<char>> grid(H, vector<char>(W));
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }
    
    // Call the function to perform operations and print the result
    cout << performOperations(grid) << endl;
    
    return 0;
}