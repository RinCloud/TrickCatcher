#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool isSymmetric(vector<string>& grid) {
    int h = grid.size();
    int w = grid[0].size();
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] != grid[h - 1 - i][w - 1 - j]) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int h, w;
    cin >> h >> w;
    
    vector<string> grid(h);
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }
    
    bool result = isSymmetric(grid);
    
    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}