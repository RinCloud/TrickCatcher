#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if ((i + 1) * A + j * B <= N) {
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % MOD;
            }
            if (i * A + (j + 1) * B <= N) {
                dp[i][j + 1] = (dp[i][j + 1] + dp[i][j]) % MOD;
            }
        }
    }

    int result = 0;
    for (int i = 0; i <= N; i++) {
        result = (result + dp[i][N % B]) % MOD;
    }

    std::cout << result << std::endl;

    return 0;
}