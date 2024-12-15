#include <iostream>
#include <vector>

const int MOD = 1000000007;

int countSequences(int N, int M) {
    std::vector<int> dp(M + 1, 0);
    dp[M] = 1;

    for (int i = M; i >= 1; i--) {
        for (int j = 2 * i; j <= M; j += i) {
            dp[i] -= dp[j];
            if (dp[i] < 0)
                dp[i] += MOD;
        }
    }

    int res = 0;
    for (int i = 1; i <= M; i++) {
        if (M % i != 0)
            continue;
        res = (res + 1LL * dp[i] * dp[i] % MOD) % MOD;
    }

    return res;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    int result = countSequences(N, M);
    std::cout << result << std::endl;

    return 0;
}