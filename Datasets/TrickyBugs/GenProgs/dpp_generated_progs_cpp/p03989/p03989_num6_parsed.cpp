#include <iostream>
#include <vector>

const int MOD = 924844033;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(N + 1));

    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }

    std::vector<int> factorial(N + 1, 1);
    for (int i = 2; i <= N; i++) {
        factorial[i] = (1LL * i * factorial[i - 1]) % MOD;
    }

    int ans = 0;
    for (int i = 0; i <= N; i++) {
        int sign = (i % 2 == 0) ? 1 : -1;
        int value = (1LL * factorial[N - i] * dp[N][i]) % MOD;

        ans = (ans + sign * value + MOD) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}