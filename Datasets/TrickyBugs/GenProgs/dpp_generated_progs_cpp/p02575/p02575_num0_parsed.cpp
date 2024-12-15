#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<int> A(H), B(H);
    for (int i = 0; i < H; i++) {
        cin >> A[i] >> B[i];
    }

    vector<vector<int>> dp(H+1, vector<int>(W+1, 1e9+7));
    dp[0][1] = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 1; j <= W; j++) {
            if (j >= A[i] && j <= B[i]) continue;
            dp[i+1][j] = min(dp[i+1][j], dp[i][j] + 1);
            dp[i][j+1] = min(dp[i][j+1], dp[i][j] + 1);
        }
    }

    for (int i = 1; i <= H; i++) {
        if (dp[i][W] == 1e9+7) {
            cout << -1 << endl;
        } else {
            cout << dp[i][W] << endl;
        }
    }

    return 0;
}