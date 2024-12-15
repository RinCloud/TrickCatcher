#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    // storing the input grid
    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }
    
    // checking if the objective can be achieved
    bool possible = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                continue;
            }
            // checking adjacent squares horizontally
            if (j > 0 && grid[i][j-1] == '#') {
                continue;
            }
            if (j < W-1 && grid[i][j+1] == '#') {
                continue;
            }
            // checking adjacent squares vertically
            if (i > 0 && grid[i-1][j] == '#') {
                continue;
            }
            if (i < H-1 && grid[i+1][j] == '#') {
                continue;
            }
            possible = false;
            break;
        }
        if (!possible) break;
    }
    
    // printing the result
    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}