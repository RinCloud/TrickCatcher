#include <iostream>
#include <vector>
#include <climits>

int main() {
    int H, N;
    std::cin >> H >> N;

    std::vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i] >> B[i];
    }

    std::vector<int> dp(H + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= H; j++) {
            if (dp[j] != INT_MAX) {
                dp[j + A[i]] = std::min(dp[j + A[i]], dp[j] + B[i]);
            }
        }
    }

    int ans = INT_MAX;
    for (int i = H; i <= H; i++) {
        ans = std::min(ans, dp[i]);
    }

    std::cout << ans << std::endl;

    return 0;
}