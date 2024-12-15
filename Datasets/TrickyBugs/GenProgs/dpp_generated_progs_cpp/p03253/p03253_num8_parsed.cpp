#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> dp(M + 1, 0);
    dp[1] = 1;

    for (int i = 2; i <= M; i++) {
        dp[i] = (dp[i] + 1) % MOD;
        for (int j = 2 * i; j <= M; j += i) {
            dp[j] = (dp[j] + dp[i]) % MOD;
        }
    }

    int ans = 1;
    for (int i = 2; i <= M; i++) {
        ans = (ans + dp[i]) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}
