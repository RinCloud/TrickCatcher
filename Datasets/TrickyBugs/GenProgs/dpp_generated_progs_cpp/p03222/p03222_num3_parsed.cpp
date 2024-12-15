#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int H, W, K;
    std::cin >> H >> W >> K;

    std::vector<std::vector<int>> dp(H + 1, std::vector<int>(W));

    dp[0][0] = 1;

    for (int i = 1; i <= H; i++) {
        for (int j = 0; j < W; j++) {
            dp[i][j] = dp[i - 1][j] * ((j > 0 ? dp[i - 1][j - 1] : 1) + (j < W - 1 ? dp[i - 1][j + 1] : 1)) % MOD;
        }
    }

    std::cout << dp[H][K - 1] << std::endl;

    return 0;
}