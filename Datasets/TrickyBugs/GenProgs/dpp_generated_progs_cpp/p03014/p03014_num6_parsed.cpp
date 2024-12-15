#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    int maxCount = 0;
    for (int row = 0; row < H; row++) {
        for (int col = 0; col < W; col++) {
            if (grid[row][col] == '.') {
                int count = 1;

                for (int r = row - 1; r >= 0 && grid[r][col] != '#'; r--) {
                    count++;
                }
                for (int r = row + 1; r < H && grid[r][col] != '#'; r++) {
                    count++;
                }
                for (int c = col - 1; c >= 0 && grid[row][c] != '#'; c--) {
                    count++;
                }
                for (int c = col + 1; c < W && grid[row][c] != '#'; c++) {
                    count++;
                }

                maxCount = max(maxCount, count);
            }
        }
    }

    cout << maxCount << endl;

    return 0;
}