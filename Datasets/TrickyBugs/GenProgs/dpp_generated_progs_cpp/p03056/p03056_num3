#include <iostream>
#include <vector>
using namespace std;

int getComplexity(int H, int W, vector<string>& grid) {
    int complexity = 0;
    bool allBlack = true, allWhite = true;
    
    // Check if all squares are black or white
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                allBlack = false;
            }
            if (grid[i][j] == '#') {
                allWhite = false;
            }
        }
    }
    
    if (allBlack || allWhite) {
        complexity = 0;
    } else {
        // Divide the grid and find the complexity of subgrids
        int m = 0;
        
        for (int i = 0; i < H; i++) {
            bool divideHorizontally = true;
            
            for (int j = 1; j < W; j++) {
                if (grid[i][j] != grid[i][j - 1]) {
                    divideHorizontally = false;
                    break;
                }
            }
            
            if (!divideHorizontally) {
                m = H;
                break;
            } else {
                m = max(m, i + 1);
            }
        }
        
        for (int i = 0; i < W; i++) {
            bool divideVertically = true;
            
            for (int j = 1; j < H; j++) {
                if (grid[j][i] != grid[j - 1][i]) {
                    divideVertically = false;
                    break;
                }
            }
            
            if (!divideVertically) {
                m = W;
                break;
            } else {
                m = max(m, i + 1);
            }
        }
        
        complexity = m + 1;
    }
    
    return complexity;
}

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    
    int complexity = getComplexity(H, W, grid);
    cout << complexity << endl;
    
    return 0;
}