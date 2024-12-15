#include <iostream>
#include <vector>
using namespace std;

int main() {
    // read input
    int H, W;
    cin >> H >> W;
    
    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }
    
    // perform operations
    int operations = 0;
    while (true) {
        vector<vector<char>> newGrid = grid;  // create a copy of the grid
        
        bool changed = false;  // flag to track if any squares were changed in this operation
        
        // iterate over each square
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                // check if the current square is white and has a black neighbor
                if (grid[i][j] == '.' && ((i > 0 && grid[i-1][j] == '#') ||
                                          (i < H-1 && grid[i+1][j] == '#') ||
                                          (j > 0 && grid[i][j-1] == '#') ||
                                          (j < W-1 && grid[i][j+1] == '#'))) {
                    newGrid[i][j] = '#';  // change the square to black
                    changed = true;  // mark that a square was changed
                }
            }
        }
        
        grid = newGrid;  // update the grid
        
        if (!changed) {
            break;  // if no squares were changed, exit the loop
        }
        
        operations++;  // increment the number of operations performed
    }
    
    // output the result
    cout << operations << endl;
    
    return 0;
}