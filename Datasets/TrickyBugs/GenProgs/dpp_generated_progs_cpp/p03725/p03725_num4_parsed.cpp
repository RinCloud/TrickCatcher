#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Structure to represent a room
struct Room {
    int row;
    int col;
    int casts; // Number of casts required to reach this room
    bool visited; // Flag to check if the room has been visited
};

// Function to check if a room is valid
bool isValid(const vector<string>& building, int row, int col) {
    int h = building.size();
    int w = building[0].size();
    
    // Check if the room is within the bounds of the building
    if (row >= 0 && row < h && col >= 0 && col < w) {
        // Check if the room is not locked
        if (building[row][col] != '#') {
            return true;
        }
    }
    
    return false;
}

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    
    vector<string> building(h);
    for (int i = 0; i < h; i++) {
        cin >> building[i];
    }
    
    // Find the starting room
    int startRow, startCol;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (building[i][j] == 'S') {
                startRow = i;
                startCol = j;
                break;
            }
        }
    }
    
    // Initialize the minimum casts array
    vector<vector<int>> minCasts(h, vector<int>(w, -1));
    
    // Initialize the queue for BFS
    queue<Room> q;
    q.push({startRow, startCol, 0, false});
    
    // Perform BFS to find the minimum casts required to reach each room
    while (!q.empty()) {
        Room room = q.front();
        q.pop();
        
        int row = room.row;
        int col = room.col;
        int casts = room.casts;
        bool visited = room.visited;
        
        // Check if the room has already been visited
        if (minCasts[row][col] != -1) {
            continue;
        }
        
        // Mark the room as visited and update the minimum casts array
        minCasts[row][col] = casts;
        
        // Check if the room is an exit
        if (row == 0 || row == h - 1 || col == 0 || col == w - 1) {
            cout << casts << endl;
            return 0;
        }
        
        // Check if the current room is locked
        if (building[row][col] == '#') {
            // Check if Takahashi has enough casts to unlock the room
            if (!visited && casts < k) {
                q.push({row, col, casts + 1, true});
            }
        }
        
        // Add the adjacent rooms to the queue
        if (isValid(building, row - 1, col)) {
            q.push({row - 1, col, casts + 1, visited});
        }
        
        if (isValid(building, row + 1, col)) {
            q.push({row + 1, col, casts + 1, visited});
        }
        
        if (isValid(building, row, col - 1)) {
            q.push({row, col - 1, casts + 1, visited});
        }
        
        if (isValid(building, row, col + 1)) {
            q.push({row, col + 1, casts + 1, visited});
        }
    }
    
    return 0;
}