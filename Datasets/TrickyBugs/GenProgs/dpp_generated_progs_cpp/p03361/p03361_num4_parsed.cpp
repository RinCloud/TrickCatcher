#include <iostream>
#include <vector>
using namespace std;

// Function to check if two squares are horizontally or vertically adjacent
bool isAdjacent(int i1, int j1, int i2, int j2) {
    return (i1 == i2 && abs(j1 - j2) == 1) || (j1 == j2 && abs(i1 - i2) == 1);
}

int main() {
    int H, W;
    cin >> H >> W;
    
    // Read the grid
    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }
    
    bool possible = true;
    
    // Try to color the squares based on the conditions
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                // Check adjacent squares
                bool adjacentBlack = false;
                if (i > 0 && grid[i-1][j] == '#') {
                    adjacentBlack = true;
                }
                if (i < H-1 && grid[i+1][j] == '#') {
                    adjacentBlack = true;
                }
                if (j > 0 && grid[i][j-1] == '#') {
                    adjacentBlack = true;
                }
                if (j < W-1 && grid[i][j+1] == '#') {
                    adjacentBlack = true;
                }
                
                if (!adjacentBlack) {
                    possible = false;
                    break;
                }
            }
        }
        if (!possible) {
            break;
        }
    }
    
    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}