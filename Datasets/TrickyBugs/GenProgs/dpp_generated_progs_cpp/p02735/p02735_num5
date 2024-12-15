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
    
    int count = 0;
    int black = 0;
    int white = 0;
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') black++;
            else white++;
        }
    }
    
    if (black == H * W) {
        count = -1;
    } else if(white == H * W) {
        count = 0;
    } else {
        vector<vector<int>> dp(H+1, vector<int>(W+1, H * W + 1));
        dp[0][1] = 0;
        
        for (int i = 1; i <= H; i++) {
            for (int j = 1; j <= W; j++) {
                dp[i][j] = min(dp[i][j], dp[i-1][j] + (grid[i-1][j-1] == '#'));
                dp[i][j] = min(dp[i][j], dp[i][j-1] + (grid[i-1][j-1] == '#'));
            }
        }
        
        count = dp[H][W];
    }

    cout << count << endl;

    return 0;
}