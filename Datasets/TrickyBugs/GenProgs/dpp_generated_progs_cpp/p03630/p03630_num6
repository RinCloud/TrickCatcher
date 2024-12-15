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
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                dp[i][j] = 0;
                continue;
            }
            dp[i][j] = 1;
            if (i > 0) {
                dp[i][j] += dp[i-1][j];
            }
        }
    }

    int max_area = 0;
    for (int i = 0; i < H; i++) {
        vector<int> heights(W);
        for (int j = 0; j < W; j++) {
            heights[j] = dp[i][j];
        }
        sort(heights.begin(), heights.end(), greater<int>());
        for (int j = 0; j < W; j++) {
            max_area = max(max_area, heights[j] * (j+1));
        }
    }

    cout << max_area << endl;

    return 0;
}