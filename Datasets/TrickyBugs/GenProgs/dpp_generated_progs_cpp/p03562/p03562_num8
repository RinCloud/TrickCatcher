#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int N, X;
    std::cin >> N >> X;

    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(X + 1));
    dp[0][0] = 1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= X; ++j) {
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][j] %= MOD;

            int x2 = A[i] * 2;
            if (x2 <= X) {
                dp[i + 1][j] += dp[i][j];
                dp[i + 1][j] %= MOD;
            }

            int xor_val = A[i] ^ j;
            dp[i + 1][xor_val] += dp[i][j];
            dp[i + 1][xor_val] %= MOD;
        }
    }

    int result = 0;
    for (int i = 0; i <= X; ++i) {
        result += dp[N][i];
        result %= MOD;
    }

    std::cout << result << std::endl;

    return 0;
}