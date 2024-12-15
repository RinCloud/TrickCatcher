#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> canvas(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> canvas[i][j];
        }
    }

    bool possible = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (canvas[i][j] == '#') {
                if (i + 1 < H && canvas[i + 1][j] == '#') {
                    canvas[i][j] = '.';
                    canvas[i + 1][j] = '.';
                } else if (j + 1 < W && canvas[i][j + 1] == '#') {
                    canvas[i][j] = '.';
                    canvas[i][j + 1] = '.';
                } else {
                    possible = false;
                    break;
                }
            }
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