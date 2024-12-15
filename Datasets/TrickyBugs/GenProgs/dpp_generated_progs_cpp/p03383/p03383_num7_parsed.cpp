#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSymmetric(vector<string>& grid, int H, int W) {
    for (int i = 0; i < H / 2; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] != grid[H - i - 1][W - j - 1]) {
                return false;
            }
        }
    }
    return true;
}

bool canBeSymmetric(vector<string>& grid, int H, int W) {
    // Check if the grid is already symmetric
    if (isSymmetric(grid, H, W)) {
        return true;
    }

    // Check if it is possible to make the grid symmetric
    for (int i = 0; i < H - 1; i++) {
        for (int j = i + 1; j < H; j++) {
            vector<string> modifiedGrid = grid;
            // Swap rows i and j
            swap(modifiedGrid[i], modifiedGrid[j]);
            if (isSymmetric(modifiedGrid, H, W)) {
                return true;
            }
        }
    }

    for (int i = 0; i < W - 1; i++) {
        for (int j = i + 1; j < W; j++) {
            vector<string> modifiedGrid = grid;
            // Swap columns i and j
            for (int k = 0; k < H; k++) {
                swap(modifiedGrid[k][i], modifiedGrid[k][j]);
            }
            if (isSymmetric(modifiedGrid, H, W)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    if (canBeSymmetric(grid, H, W)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}