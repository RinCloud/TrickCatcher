#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    int maxLighted = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                // Count the number of squares lighted in each direction
                int up = 0, down = 0, left = 0, right = 0;

                // Up
                for (int k = i - 1; k >= 0; k--) {
                    if (grid[k][j] == '#') {
                        break;
                    }
                    up++;
                }

                // Down
                for (int k = i + 1; k < H; k++) {
                    if (grid[k][j] == '#') {
                        break;
                    }
                    down++;
                }

                // Left
                for (int k = j - 1; k >= 0; k--) {
                    if (grid[i][k] == '#') {
                        break;
                    }
                    left++;
                }

                // Right
                for (int k = j + 1; k < W; k++) {
                    if (grid[i][k] == '#') {
                        break;
                    }
                    right++;
                }

                // Calculate the total number of squares lighted
                int totalLighted = 1 + up + down + left + right;

                // Update the maximum number of squares lighted
                maxLighted = max(maxLighted, totalLighted);
            }
        }
    }

    cout << maxLighted << endl;

    return 0;
}