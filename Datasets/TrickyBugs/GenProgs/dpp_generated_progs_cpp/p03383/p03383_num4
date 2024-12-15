#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isSymmetric(const vector<string>& grid) {
    int H = grid.size();
    int W = grid[0].size();
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] != grid[H - 1 - i][W - 1 - j]) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    
    if (isSymmetric(grid)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}