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

    vector<vector<int>> dp(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        dp[i][0] = (grid[i][0] == '#');
    }
    for (int j = 0; j < W; j++) {
        dp[0][j] = (grid[0][j] == '#');
    }
    for (int i = 1; i < H; i++) {
        for (int j = 1; j < W; j++) {
            if (grid[i][j] == '#') {
                dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
            }
        }
    }

    int maxArea = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            maxArea = max(maxArea, dp[i][j]);
        }
    }
    
    cout << maxArea * maxArea << endl;

    return 0;
}