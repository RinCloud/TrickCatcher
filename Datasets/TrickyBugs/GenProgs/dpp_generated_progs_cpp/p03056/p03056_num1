#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int complexity(vector<vector<char>>& grid, int h_start, int h_end, int w_start, int w_end) {
    char color = grid[h_start][w_start];
    for (int i = h_start; i <= h_end; i++) {
        for (int j = w_start; j <= w_end; j++) {
            if (grid[i][j] != color) {
                int h_mid = (h_start + h_end) / 2;
                int w_mid = (w_start + w_end) / 2;
                int c1 = complexity(grid, h_start, h_mid, w_start, w_mid);
                int c2 = complexity(grid, h_start, h_mid, w_mid + 1, w_end);
                int c3 = complexity(grid, h_mid + 1, h_end, w_start, w_mid);
                int c4 = complexity(grid, h_mid + 1, h_end, w_mid + 1, w_end);
                return max(max(c1, c2), max(c3, c4)) + 1;
            }
        }
    }
    return 0;
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
    int result = complexity(grid, 0, H - 1, 0, W - 1);
    cout << result << endl;
    return 0;
}