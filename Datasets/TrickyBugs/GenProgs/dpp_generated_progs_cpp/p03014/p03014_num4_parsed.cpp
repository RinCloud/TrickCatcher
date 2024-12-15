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

    vector<vector<int>> dp(H, vector<int>(W, 0));

    // Calculate the maximum number of lighted squares in the upward direction
    for (int j = 0; j < W; j++) {
        int cnt = 0;
        for (int i = 0; i < H; i++) {
            if (grid[i][j] == '#') {
                cnt = 0;
            } else {
                cnt++;
                dp[i][j] += cnt;
            }
        }
    }

    // Calculate the maximum number of lighted squares in the downward direction
    for (int j = 0; j < W; j++) {
        int cnt = 0;
        for (int i = H - 1; i >= 0; i--) {
            if (grid[i][j] == '#') {
                cnt = 0;
            } else {
                cnt++;
                dp[i][j] += cnt;
            }
        }
    }

    // Calculate the maximum number of lighted squares in the leftward direction
    for (int i = 0; i < H; i++) {
        int cnt = 0;
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                cnt = 0;
            } else {
                cnt++;
                dp[i][j] += cnt;
            }
        }
    }

    // Calculate the maximum number of lighted squares in the rightward direction
    for (int i = 0; i < H; i++) {
        int cnt = 0;
        for (int j = W - 1; j >= 0; j--) {
            if (grid[i][j] == '#') {
                cnt = 0;
            } else {
                cnt++;
                dp[i][j] += cnt;
            }
        }
    }

    // Find the maximum number of lighted squares
    int maxSquares = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            maxSquares = max(maxSquares, dp[i][j]);
        }
    }

    cout << maxSquares << endl;

    return 0;
}