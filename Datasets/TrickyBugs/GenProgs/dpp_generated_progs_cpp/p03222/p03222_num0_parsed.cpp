#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<int>> dp(H + 1, vector<int>(W + 2, 0));
    dp[0][1] = 1;
    
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j + 1] + dp[i - 1][j - 1]) % MOD;
        }
    }
    
    cout << dp[H][K] << endl;

    return 0;
}