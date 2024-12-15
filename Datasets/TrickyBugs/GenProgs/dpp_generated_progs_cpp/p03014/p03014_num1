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

    int maxSquares = 0;

    for (int i = 0; i < H; i++) {
        // Find the leftmost '.' in the row
        int left = -1;
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                left = j;
                break;
            }
        }

        // Find the rightmost '.' in the row
        int right = -1;
        for (int j = W - 1; j >= 0; j--) {
            if (grid[i][j] == '.') {
                right = j;
                break;
            }
        }

        // If there is no '.' in the row, skip it
        if (left == -1 || right == -1) {
            continue;
        }

        // Check all the squares in the row between left and right
        for (int j = left; j <= right; j++) {
            if (grid[i][j] != '#') {
                maxSquares++;
            }
        }
    }

    cout << maxSquares << endl;

    return 0;
}