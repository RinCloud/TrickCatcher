#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input
    int H, W;
    cin >> H >> W;
    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }

    // Initialize variables
    int operations = 0;
    int r0 = 0, c0 = 0, r1 = H - 1, c1 = W - 1;

    // Loop through the grid
    while (r0 <= r1 && c0 <= c1) {
        // If the current square is black, invert the color
        if (grid[r0][c0] == '#') {
            operations++;
            for (int i = r0; i <= r1; i++) {
                for (int j = c0; j <= c1; j++) {
                    grid[i][j] = (grid[i][j] == '#' ? '.' : '#');
                }
            }
        }

        // Move to the next square
        if (r0 == r1 && c0 == c1) {
            break;
        } else if (r0 == r1) {
            c0++;
        } else if (c0 == c1) {
            r0++;
        } else {
            if (grid[r0 + 1][c0] == '.' && grid[r0][c0 + 1] == '#') {
                r0++;
            } else {
                c0++;
            }
        }
    }

    // Print the minimum number of operations
    cout << operations << endl;

    return 0;
}
