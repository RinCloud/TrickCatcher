#include <iostream>
#include <vector>
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

    bool possible = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                continue;
            }
            if (i - 1 >= 0 && grid[i-1][j] == '#') {
                continue;
            }
            if (i + 1 < H && grid[i+1][j] == '#') {
                continue;
            }
            if (j - 1 >= 0 && grid[i][j-1] == '#') {
                continue;
            }
            if (j + 1 < W && grid[i][j+1] == '#') {
                continue;
            }
            possible = false;
            break;
        }
        if (!possible) {
            break;
        }
    }

    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}