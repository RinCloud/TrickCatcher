#include <iostream>
#include <vector>
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
    
    int operations = 0;
    
    while (true) {
        bool changed = false;
        
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (grid[i][j] == '.') {
                    if (i > 0 && grid[i - 1][j] == '#') {
                        grid[i][j] = '#';
                        changed = true;
                    } else if (i < H - 1 && grid[i + 1][j] == '#') {
                        grid[i][j] = '#';
                        changed = true;
                    } else if (j > 0 && grid[i][j - 1] == '#') {
                        grid[i][j] = '#';
                        changed = true;
                    } else if (j < W - 1 && grid[i][j + 1] == '#') {
                        grid[i][j] = '#';
                        changed = true;
                    }
                }
            }
        }
        
        if (!changed) {
            break;
        }
        
        operations++;
    }
    
    cout << operations << endl;
    
    return 0;
}