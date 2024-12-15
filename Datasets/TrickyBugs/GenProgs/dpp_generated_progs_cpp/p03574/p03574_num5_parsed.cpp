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

    vector<vector<int>> adj(H, vector<int>(W, 0));

    // Compute the number of adjacent bombs for each empty square
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') continue;

            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int ni = i + dx;
                    int nj = j + dy;
                    if (ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
                    if (grid[ni][nj] == '#') adj[i][j]++;
                }
            }
        }
    }

    // Replace each '.' with the number of adjacent bombs
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                cout << adj[i][j];
            } else {
                cout << grid[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}