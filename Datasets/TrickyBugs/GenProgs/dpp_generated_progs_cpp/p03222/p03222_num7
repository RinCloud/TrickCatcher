#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int amidakujiCount(int H, int W, int K) {
    vector<vector<int>> dp(H + 1, vector<int>(W + 2, 0));
    dp[0][K] = 1;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
        }
    }

    return dp[H][1];
}

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    
    int ans = amidakujiCount(H, W, K);
    cout << ans << endl;

    return 0;
}