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

    vector<vector<int>> up(H, vector<int>(W, 0));
    vector<vector<int>> down(H, vector<int>(W, 0));
    vector<vector<int>> left(H, vector<int>(W, 0));
    vector<vector<int>> right(H, vector<int>(W, 0));

    // Calculate the number of squares lit up in each direction for each grid square
    for (int i = 0; i < H; i++) {
        // From top to bottom
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                up[i][j] = 0;
            } else if (i == 0) {
                up[i][j] = 1;
            } else {
                up[i][j] = up[i - 1][j] + 1;
            }
        }

        // From bottom to top
        for (int j = 0; j < W; j++) {
            if (grid[H - i - 1][j] == '#') {
                down[H - i - 1][j] = 0;
            } else if (i == 0) {
                down[H - i - 1][j] = 1;
            } else {
                down[H - i - 1][j] = down[H - i][j] + 1;
            }
        }
    }

    for (int i = 0; i < H; i++) {
        // From left to right
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                left[i][j] = 0;
            } else if (j == 0) {
                left[i][j] = 1;
            } else {
                left[i][j] = left[i][j - 1] + 1;
            }
        }

        // From right to left
        for (int j = 0; j < W; j++) {
            if (grid[i][W - j - 1] == '#') {
                right[i][W - j - 1] = 0;
            } else if (j == 0) {
                right[i][W - j - 1] = 1;
            } else {
                right[i][W - j - 1] = right[i][W - j] + 1;
            }
        }
    }

    int answer = 0;

    // Find the maximum number of squares lit up for each grid square
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int litSquares = up[i][j] + down[i][j] + left[i][j] + right[i][j] - 3;
            answer = max(answer, litSquares);
        }
    }

    cout << answer << endl;

    return 0;
}