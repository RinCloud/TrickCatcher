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

    vector<vector<int>> dph(H, vector<int>(W, 0));
    vector<vector<int>> dpw(H, vector<int>(W, 0));

    // Dynamic programming for the longest consecutive black squares in each row and each column
    for (int i = 0; i < H; i++) {
        int cnt = 0;
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                cnt++;
            } else {
                cnt = 0;
            }
            dph[i][j] = cnt;
        }
    }
    for (int j = 0; j < W; j++) {
        int cnt = 0;
        for (int i = 0; i < H; i++) {
            if (grid[i][j] == '#') {
                cnt++;
            } else {
                cnt = 0;
            }
            dpw[i][j] = cnt;
        }
    }

    int ans = 0;
    // Calculate the maximum possible area of Snuke's rectangle
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int area = dph[i][j] + dpw[i][j] - 1;
            ans = max(ans, area);
        }
    }

    cout << ans << endl;

    return 0;
}
