#include <iostream>
#include <vector>
#include <algorithm>

const long long MOD = 1000000007;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(2 * N);
    for (int i = 0; i < 2 * N; ++i) {
        std::cin >> A[i];
    }

    std::vector<int> positions(N + 1, -1);
    std::vector<int> unknowns;
    for (int i = 0; i < 2 * N; ++i) {
        if (A[i] != -1) {
            positions[A[i]] = i;
        } else {
            unknowns.push_back(i);
        }
    }

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(N + 1));
    dp[0][0] = 1;

    for (int n = 1; n <= N; ++n) {
        for (int k = 0; k <= n; ++k) {
            if (k == 0) {
                dp[n][k] = 1LL * (unknowns[n - 1] - n + 1) * dp[n - 1][k + 1] % MOD;
            } else if (k == n) {
                dp[n][k] = 1LL * (unknowns[n - 1] - positions[n]) * dp[n - 1][k - 1] % MOD;
            } else {
                dp[n][k] = (1LL * (unknowns[n - 1] - n + 1) * dp[n - 1][k + 1] + 1LL * (unknowns[n - 1] - positions[n]) * dp[n - 1][k - 1]) % MOD;
            }
        }
    }

    std::cout << dp[N][0] << std::endl;

    return 0;
}