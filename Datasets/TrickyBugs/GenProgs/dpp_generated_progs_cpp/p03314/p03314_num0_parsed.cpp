#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N, K, M;
    std::cin >> N >> K >> M;

    std::vector<int> A(M);
    for (int i = 0; i < M; i++) {
        std::cin >> A[i];
    }

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(K + 1, 0));
    std::vector<std::vector<int>> prefix(N + 1, std::vector<int>(K + 1, 0));

    for (int i = 1; i <= N; i++) {
        dp[i][1] = 1;
        prefix[i][1] = (prefix[i - 1][1] + dp[i][1]) % MOD;
    }

    for (int i = 2; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            dp[j][i] = (prefix[j - 1][i - 1] - (j - i - 1 >= 0 ? prefix[j - i - 1][i - 1] : 0) + MOD) % MOD;
            prefix[j][i] = (prefix[j - 1][i] + dp[j][i]) % MOD;
        }
    }

    std::vector<long long> count(N + 1, 0);
    for (int i = 0; i < M; i++) {
        for (int j = 1; j <= N; j++) {
            if (A[i] > K) continue;
            count[j] = (count[j] + count[j - 1] * dp[j][A[i]]) % MOD;
        }
    }

    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        ans = (ans + count[i]) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}