#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    // Create a grid to represent the amidakuji
    vector<vector<int>> dp(H + 1, vector<int>(W + 1));

    // Initialize the base cases
    dp[0][1] = 1;

    // Dynamic programming to calculate the number of valid paths
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            dp[i][j] = (dp[i - 1][j - 1] * dp[i][j - 1] +
                        dp[i][j] * dp[i][j - 1] +
                        dp[i + 1][j - 1] * dp[i][j - 1]) % MOD;
        }
    }

    // Print the result
    cout << dp[H][K] << endl;

    return 0;
}