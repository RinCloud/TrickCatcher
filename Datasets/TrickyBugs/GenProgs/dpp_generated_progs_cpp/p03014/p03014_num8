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
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                int count = 1;
                for (int k = i + 1; k < H; k++) {
                    if (grid[k][j] == '#') break;
                    count++;
                }
                for (int k = i - 1; k >= 0; k--) {
                    if (grid[k][j] == '#') break;
                    count++;
                }
                for (int k = j + 1; k < W; k++) {
                    if (grid[i][k] == '#') break;
                    count++;
                }
                for (int k = j - 1; k >= 0; k--) {
                    if (grid[i][k] == '#') break;
                    count++;
                }
                maxCount = max(maxCount, count);
            }
        }
    }

    cout << maxCount << endl;

    return 0;
}