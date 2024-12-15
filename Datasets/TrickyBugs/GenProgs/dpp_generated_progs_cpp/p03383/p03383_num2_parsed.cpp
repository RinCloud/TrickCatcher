#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSymmetric(vector<string>& grid, int H, int W) {
    for (int i = 0; i < H / 2; i++) {
        for (int j = 0; j < W / 2; j++) {
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
    if (isSymmetric(grid, H, W)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}