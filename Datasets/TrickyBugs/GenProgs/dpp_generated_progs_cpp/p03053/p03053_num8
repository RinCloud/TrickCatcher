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

    // Initialize count and changed variables
    int count = 0;
    bool changed = true;

    // Perform operations until no squares change color
    while (changed) {
        changed = false;
        vector<vector<char>> newGrid(grid);

        // Update colors of white squares next to black squares
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (grid[i][j] == '#' || newGrid[i][j] == '#') {
                    continue; // Skip black squares
                }

                // Check neighbors for black squares
                if (i > 0 && grid[i - 1][j] == '#') {
                    newGrid[i][j] = '#';
                    changed = true;
                }
                if (i < H - 1 && grid[i + 1][j] == '#') {
                    newGrid[i][j] = '#';
                    changed = true;
                }
                if (j > 0 && grid[i][j - 1] == '#') {
                    newGrid[i][j] = '#';
                    changed = true;
                }
                if (j < W - 1 && grid[i][j + 1] == '#') {
                    newGrid[i][j] = '#';
                    changed = true;
                }
            }
        }

        // Update grid
        grid = newGrid;

        // Increment count
        if (changed) {
            count++;
        }
    }

    // Print the number of operations
    cout << count << endl;

    return 0;
}