#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main() {
    int H, W;
    std::cin >> H >> W;

    std::vector<int> A(H);
    std::vector<int> B(H);
    for (int i = 0; i < H; ++i) {
        std::cin >> A[i] >> B[i];
    }

    std::vector<std::vector<int>> dp(H+1, std::vector<int>(W+1, std::numeric_limits<int>::max()));
    dp[0][1] = 0;

    for (int i = 0; i < H; ++i) {
        for (int j = A[i]; j <= B[i]; ++j) {
            dp[i+1][j] = std::min(dp[i+1][j], dp[i][j]+1);
        }

        for (int j = 1; j <= W; ++j) {
            dp[i+1][j] = std::min(dp[i+1][j], dp[i+1][j-1]);
        }

        for (int j = B[i]+1; j <= W; ++j) {
            dp[i+1][j] = std::min(dp[i+1][j], dp[i][j]);
        }
    }

    for (int i = 1; i <= H; ++i) {
        if (dp[i][W] == std::numeric_limits<int>::max()) {
            std::cout << "-1" << std::endl;
        } else {
            std::cout << dp[i][W] << std::endl;
        }
    }

    return 0;
}