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

    vector<vector<int>> dp(H, vector<int>(W + 1, -1));
    dp[0][0] = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j <= W; j++) {
            if (dp[i][j] == -1) continue;

            // Move right
            if (j + 1 <= W) {
                if (j + 1 >= A[i] && j + 1 <= B[i]) {
                    if (dp[i + 1][j + 1] == -1) {
                        dp[i + 1][j + 1] = dp[i][j];
                    } else {
                        dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
                    }
                } else {
                    if (dp[i + 1][j + 1] == -1) {
                        dp[i + 1][j + 1] = dp[i][j] + 1;
                    } else {
                        dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + 1);
                    }
                }
            }

            // Move down
            if (dp[i + 1][j] == -1) {
                dp[i + 1][j] = dp[i][j] + 1;
            } else {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + 1);
            }
        }
    }

    for (int i = 0; i < H; i++) {
        cout << dp[i][W] << endl;
    }

    return 0;
}