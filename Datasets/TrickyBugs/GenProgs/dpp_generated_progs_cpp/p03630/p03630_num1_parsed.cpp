#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < W; j++) {
            grid[i][j] = s[j];
        }
    }

    vector<vector<int>> dp(H, vector<int>(W));
    for (int i = 0; i < W; i++) {
        dp[0][i] = (grid[0][i] == '#');
    }
    for (int i = 0; i < H; i++) {
        if (i > 0) {
            for (int j = 0; j < W; j++) {
                dp[i][j] = (grid[i][j] == '#') ? dp[i - 1][j] + 1 : 0;
            }
        }
        vector<int> left(W), right(W);
        vector<int> stk;
        for (int j = 0; j < W; j++) {
            while (!stk.empty() && dp[i][stk.back()] >= dp[i][j]) {
                stk.pop_back();
            }
            left[j] = stk.empty() ? -1 : stk.back();
            stk.push_back(j);
        }
        stk.clear();
        for (int j = W - 1; j >= 0; j--) {
            while (!stk.empty() && dp[i][stk.back()] >= dp[i][j]) {
                stk.pop_back();
            }
            right[j] = stk.empty() ? W : stk.back();
            stk.push_back(j);
        }
        for (int j = 0; j < W; j++) {
            int area = (right[j] - left[j] - 1) * dp[i][j];
            dp[i][j] = area;
        }
    }

    int ans = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans << endl;

    return 0;
}