#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N;
    long long K;
    std::cin >> N >> K;

    std::vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int maxBit = 0;
    for (int i = 0; i < N; i++) {
        maxBit = std::max(maxBit, 63 - __builtin_clzll(A[i]));
    }

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(maxBit + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= maxBit; j++) {
            for (int k = 0; k <= 1; k++) {
                if (k == 0) {
                    dp[i + 1][j] += dp[i][j];
                } else {
                    long long val = (A[i] >> j) & 1;
                    if (val == 0) {
                        dp[i + 1][j] += dp[i][j];
                    } else {
                        dp[i + 1][j + 1] += dp[i][j];
                    }
                }
                dp[i + 1][j] %= MOD;
                dp[i + 1][j + 1] %= MOD;
            }
        }
    }

    long long ans = 0;
    for (int j = 0; j <= maxBit; j++) {
        if ((K >> j) & 1) {
            ans += dp[N][j];
            ans %= MOD;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}