#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSymmetric(vector<string>& grid) {
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

    bool symmetric = isSymmetric(grid);

    if (symmetric) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}