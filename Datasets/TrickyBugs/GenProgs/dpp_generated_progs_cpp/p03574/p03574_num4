#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> dir = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    vector<vector<int>> bombCount(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                continue;
            }
            for (int k = 0; k < 8; k++) {
                int row = i + dir[k][0];
                int col = j + dir[k][1];
                if (row >= 0 && row < H && col >= 0 && col < W) {
                    if (grid[row][col] == '#') {
                        bombCount[i][j]++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                grid[i][j] = bombCount[i][j] + '0';
            }
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}