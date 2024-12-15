#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int N, A, B;
    long long K;
    std::cin >> N >> A >> B >> K;

    std::vector<std::vector<long long>> dp(N + 1, std::vector<long long>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= K; j++) {
            if (j >= i * A) {
                dp[i][j] += dp[i - 1][j - i * A];
                dp[i][j] %= MOD;
            }
            if (j >= i * B) {
                dp[i][j] += dp[i - 1][j - i * B];
                dp[i][j] %= MOD;
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i <= N; i++) {
        long long cnt = dp[i][K];
        for (int j = 1; j <= N - i; j++) {
            cnt = (cnt * j) % MOD;
            cnt = (cnt * 499122177) % MOD;
        }
        ans += cnt;
        ans %= MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}