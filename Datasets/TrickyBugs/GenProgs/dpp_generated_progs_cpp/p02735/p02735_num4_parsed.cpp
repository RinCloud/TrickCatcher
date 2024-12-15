#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> grid(H, vector<char>(W));
    
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }
    
    int operations = 0;
    for(int i = 0; i < H-1; i++) {
        for(int j = 0; j < W-1; j++) {
            if(grid[i][j] == '#') {
                operations++;
                grid[i][j] = '.';
                grid[i+1][j] = (grid[i+1][j] == '.') ? '#' : '.';
                grid[i][j+1] = (grid[i][j+1] == '.') ? '#' : '.';
                grid[i+1][j+1] = (grid[i+1][j+1] == '.') ? '#' : '.';
            }
        }
    }
    
    if(grid[H-1][W-1] == '#') {
        operations++;
    }
    
    cout << operations << endl;
    
    return 0;
}