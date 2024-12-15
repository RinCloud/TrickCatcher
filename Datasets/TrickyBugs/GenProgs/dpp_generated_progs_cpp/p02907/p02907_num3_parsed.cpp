#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N), B(N);
    int S = 0;
    for (int i = 0; i < N; i++) {
        std::cin >> A[i] >> B[i];
        S += A[i];
    }

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(S + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < S; j++) {
            for (int k = 0; k < A[i] && k + j <= S; k++) {
                dp[i + 1][j + k] = (dp[i + 1][j + k] + dp[i][j]) % MOD;
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= S; j++) {
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (j + B[i] <= S) {
                cnt = (cnt + dp[N][j + B[i]]) % MOD;
            }
        }
        ans = (ans + cnt) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}