#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<string> grid(H);
    for(int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    
    int maxLitSquares = 0;
    
    // loop over all possible positions to place the lamp
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            // if the current position is an obstacle, skip it
            if(grid[i][j] == '#') continue;
            
            int litSquares = 1; // include the square on which the lamp is placed
            
            // check the squares in the up direction
            for(int k = i-1; k >= 0; k--) {
                if(grid[k][j] == '#') break; // hit an obstacle
                litSquares++;
            }
            
            // check the squares in the down direction
            for(int k = i+1; k < H; k++) {
                if(grid[k][j] == '#') break; // hit an obstacle
                litSquares++;
            }
            
            // check the squares in the left direction
            for(int k = j-1; k >= 0; k--) {
                if(grid[i][k] == '#') break; // hit an obstacle
                litSquares++;
            }
            
            // check the squares in the right direction
            for(int k = j+1; k < W; k++) {
                if(grid[i][k] == '#') break; // hit an obstacle
                litSquares++;
            }
            
            maxLitSquares = max(maxLitSquares, litSquares);
        }
    }
    
    cout << maxLitSquares << endl;
    
    return 0;
}