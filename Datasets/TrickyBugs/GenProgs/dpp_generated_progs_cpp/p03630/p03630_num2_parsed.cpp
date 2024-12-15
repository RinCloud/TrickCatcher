#include<bits/stdc++.h>
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
    
    vector<vector<int>> dp(H+1, vector<int>(W+1, 0));
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '.') {
                dp[i+1][j+1] = 0;
            } else {
                dp[i+1][j+1] = 1 + min(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    
    int ans = 0;
    
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            int cur_area = dp[i][j] * (i - dp[i][j] + 1);
            ans = max(ans, cur_area);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}