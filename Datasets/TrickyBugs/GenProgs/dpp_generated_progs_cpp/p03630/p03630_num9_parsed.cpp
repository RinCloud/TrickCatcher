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

    vector<vector<int>> prefix_black(H + 1, vector<int>(W + 1, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            prefix_black[i + 1][j + 1] = prefix_black[i + 1][j] + prefix_black[i][j + 1] - prefix_black[i][j];
            if (grid[i][j] == '#') {
                prefix_black[i + 1][j + 1]++;
            }
        }
    }

    int max_area = 0;
    for (int top = 0; top < H; top++) {
        for (int left = 0; left < W; left++) {
            for (int bottom = top + 1; bottom < H + 1; bottom++) {
                for (int right = left + 1; right < W + 1; right++) {
                    int total_black = prefix_black[bottom][right] - prefix_black[top][right] - prefix_black[bottom][left] + prefix_black[top][left];
                    if (total_black == (bottom - top) * (right - left)) {
                        max_area = max(max_area, total_black);
                    }
                }
            }
        }
    }

    cout << max_area << endl;

    return 0;
}