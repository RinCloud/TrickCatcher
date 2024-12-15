#include <iostream>
#include <vector>

const int MOD = 924844033;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<std::vector<long long>> dp(N + 1, std::vector<long long>(N + 1));

    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }

    std::vector<long long> cnt(N + 1);
    cnt[0] = 1;
    cnt[1] = 1;
    for (int i = 2; i <= N; i++) {
        cnt[i] = 0;
        for (int j = 0; j < i; j++) {
            cnt[i] = (cnt[i] + cnt[j] * cnt[i - j - 1] % MOD * dp[i - 1][j]) % MOD;
        }
    }

    long long answer = cnt[N];
    for (int i = 1; i <= N; i++) {
        answer = (answer - cnt[i] * dp[N][i] % MOD + MOD) % MOD;
    }

    std::cout << answer << std::endl;

    return 0;
}