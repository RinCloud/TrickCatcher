#include <iostream>
#include <vector>
#include <limits>

int main() {
    int H, W;
    std::cin >> H >> W;

    std::vector<int> A(H);
    std::vector<int> B(H);
    for (int i = 0; i < H; ++i) {
        std::cin >> A[i] >> B[i];
    }

    std::vector<std::vector<long long>> dp(H, std::vector<long long>(W + 2, std::numeric_limits<long long>::max()));

    dp[0][1] = 0;
    for (int i = 1; i <= W; ++i) {
        dp[0][i + 1] = dp[0][i] + 1;
    }

    for (int i = 1; i < H; ++i) {
        for (int j = A[i - 1]; j <= B[i - 1]; ++j) {
            dp[i][1] = std::min(dp[i][1], dp[i - 1][j + 1] + 1);
        }
        dp[i][1] = std::min(dp[i][1], dp[i - 1][A[i - 1]] + 1);
        for (int j = 2; j <= W + 1; ++j) {
            dp[i][j] = dp[i][j - 1] + 1;
        }
    }

    for (int i = 0; i < H; ++i) {
        std::cout << dp[i][W + 1] << std::endl;
    }

    return 0;
}