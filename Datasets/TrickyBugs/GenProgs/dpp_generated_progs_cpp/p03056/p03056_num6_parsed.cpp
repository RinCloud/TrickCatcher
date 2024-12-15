#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getComplexity(const vector<vector<char>>& grid, int startRow, int endRow, int startCol, int endCol) {
    int blackCount = 0;
    int whiteCount = 0;

    for (int i = startRow; i <= endRow; i++) {
        for (int j = startCol; j <= endCol; j++) {
            if (grid[i][j] == '#') {
                blackCount++;
            } else {
                whiteCount++;
            }
        }
    }

    if (blackCount == 0 || blackCount == (endRow - startRow + 1) * (endCol - startCol + 1)) {
        // All black or all white squares
        return 0;
    } else {
        // Divide into subgrids and calculate complexities
        int minMaxComplexity = INT_MAX;

        for (int i = startRow; i < endRow; i++) {
            int complexity1 = getComplexity(grid, startRow, i, startCol, endCol);
            int complexity2 = getComplexity(grid, i + 1, endRow, startCol, endCol);
            int maxComplexity = max(complexity1, complexity2);
            minMaxComplexity = min(minMaxComplexity, maxComplexity);
        }

        for (int j = startCol; j < endCol; j++) {
            int complexity1 = getComplexity(grid, startRow, endRow, startCol, j);
            int complexity2 = getComplexity(grid, startRow, endRow, j + 1, endCol);
            int maxComplexity = max(complexity1, complexity2);
            minMaxComplexity = min(minMaxComplexity, maxComplexity);
        }

        return minMaxComplexity + 1;
    }
}

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }

    int complexity = getComplexity(grid, 0, H - 1, 0, W - 1);
    cout << complexity << endl;

    return 0;
}
