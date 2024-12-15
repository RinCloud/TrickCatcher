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

    vector<vector<int>> adjacent_count(H, vector<int>(W, 0));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                continue;
            }
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni >= 0 && ni < H && nj >= 0 && nj < W && grid[ni][nj] == '#') {
                        adjacent_count[i][j]++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                grid[i][j] = '0' + adjacent_count[i][j];
            }
        }
    }

    for (int i = 0; i < H; i++) {
        cout << grid[i] << endl;
    }

    return 0;
}