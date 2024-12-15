#include<bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }
    
    int complexity = 0;
    bool allWhite = true, allBlack = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                allWhite = false;
            } else {
                allBlack = false;
            }
        }
    }
    
    if (!allWhite && !allBlack) {
        complexity = 1;
        for (int i = 0; i < H; i++) {
            bool containsBlackLeft = false, containsWhiteLeft = false;
            for (int j = 0; j < W; j++) {
                if (grid[i][j] == '#') {
                    containsBlackLeft = true;
                } else {
                    containsWhiteLeft = true;
                }
            }
            bool containsBlackRight = false, containsWhiteRight = false;
            for (int j = W - 1; j >= 0; j--) {
                if (grid[i][j] == '#') {
                    containsBlackRight = true;
                } else {
                    containsWhiteRight = true;
                }
            }
            if ((containsBlackLeft && containsWhiteRight) || (containsWhiteLeft && containsBlackRight)) {
                complexity = 2;
                break;
            }
        }
        
        if (complexity == 1) {
            for (int i = 0; i < W; i++) {
                bool containsBlackTop = false, containsWhiteTop = false;
                for (int j = 0; j < H; j++) {
                    if (grid[j][i] == '#') {
                        containsBlackTop = true;
                    } else {
                        containsWhiteTop = true;
                    }
                }
                bool containsBlackBottom = false, containsWhiteBottom = false;
                for (int j = H - 1; j >= 0; j--) {
                    if (grid[j][i] == '#') {
                        containsBlackBottom = true;
                    } else {
                        containsWhiteBottom = true;
                    }
                }
                if ((containsBlackTop && containsWhiteBottom) || (containsWhiteTop && containsBlackBottom)) {
                    complexity = 2;
                    break;
                }
            }
        }
    }
    
    cout << complexity << endl;
    
    return 0;
}