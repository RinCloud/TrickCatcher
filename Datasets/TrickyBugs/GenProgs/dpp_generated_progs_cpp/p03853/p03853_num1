#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> image(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> image[i][j];
        }
    }

    // Extend the image vertically
    for (int i = 0; i < 2 * H; i++) {
        for (int j = 0; j < W; j++) {
            cout << image[i / 2][j];
        }
        cout << endl;
    }

    return 0;
}