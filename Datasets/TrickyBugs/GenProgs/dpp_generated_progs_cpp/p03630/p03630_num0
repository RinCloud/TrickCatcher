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

    vector<vector<int>> dp(H, vector<int>(W, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                dp[i][j] = 0;
            } else {
                dp[i][j] = 1;
                if (j > 0) {
                    dp[i][j] += dp[i][j-1];
                }
            }
        }
    }

    int ans = 0;
    for (int j = 0; j < W; j++) {
        for (int i = 0; i < H; i++){
            int min_width = dp[i][j];
            for (int k = i; k < H; k++) {
                min_width = min(min_width, dp[k][j]);
                ans = max(ans, (k - i + 1) * min_width);
            }
        }
    }

    cout << ans << endl;

    return 0;
}