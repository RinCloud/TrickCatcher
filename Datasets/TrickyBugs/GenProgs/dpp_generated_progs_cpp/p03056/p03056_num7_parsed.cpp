#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateComplexity(vector<vector<char>>& grid, int startRow, int startCol, int endRow, int endCol) {
    // check if all squares in the subgrid are black or all are white
    bool allBlack = true, allWhite = true;
    for (int i = startRow; i <= endRow; i++) {
        for (int j = startCol; j <= endCol; j++) {
            if (grid[i][j] == '.') {
                allBlack = false;
            } else {
                allWhite = false;
            }
        }
    }
    
    if (allBlack || allWhite) {
        return 0;
    } else {
        int maxComplexity = 0;
        
        // divide the subgrid horizontally and calculate complexity
        for (int i = startRow; i < endRow; i++) {
            int complexity = max(calculateComplexity(grid, startRow, startCol, i, endCol),
                                 calculateComplexity(grid, i + 1, startCol, endRow, endCol));
            maxComplexity = max(maxComplexity, complexity);
        }
        
        // divide the subgrid vertically and calculate complexity
        for (int j = startCol; j < endCol; j++) {
            int complexity = max(calculateComplexity(grid, startRow, startCol, endRow, j),
                                 calculateComplexity(grid, startRow, j + 1, endRow, endCol));
            maxComplexity = max(maxComplexity, complexity);
        }
        
        return maxComplexity + 1;
    }
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
    
    int complexity = calculateComplexity(grid, 0, 0, H - 1, W - 1);
    cout << complexity << endl;
    
    return 0;
}