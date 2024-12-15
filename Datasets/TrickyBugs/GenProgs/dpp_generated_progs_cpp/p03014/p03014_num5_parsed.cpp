#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> grid[i][j];
        }
    }

    int maxCount = 0;
    for (int i = 0; i < H; i++) {
        int count = 0;
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                count++;
            }
            else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        maxCount = max(maxCount, count);
    }

    for (int i = 0; i < W; i++) {
        int count = 0;
        for (int j = 0; j < H; j++) {
            if (grid[j][i] == '.') {
                count++;
            }
            else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        maxCount = max(maxCount, count);
    }

    cout << maxCount << endl;

    return 0;
}