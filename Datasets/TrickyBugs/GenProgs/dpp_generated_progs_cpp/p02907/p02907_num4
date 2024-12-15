#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>

const int MOD = 998244353;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i] >> B[i];
    }

    std::vector<int> sumA(N, 0);
    std::partial_sum(A.begin(), A.end(), sumA.begin());

    std::vector<std::vector<long long>> dp(N + 1, std::vector<long long>(sumA[N - 1] + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; ++i) {
        for (int j = i; j >= 0; --j) {
            for (int k = 0; k <= sumA[i] - B[i]; ++k) {
                dp[j + 1][k + B[i]] += dp[j][k];
                dp[j + 1][k + B[i]] %= MOD;
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i <= sumA[N - 1]; ++i) {
        long long fac = 1;
        for (int j = 0; j < N; ++j) {
            fac = fac * (sumA[j] - i) % MOD;
        }
        for (int j = 1; j <= N; ++j) {
            fac = fac * j % MOD;
        }
        ans = (ans + (dp[N][i] * fac) % MOD) % MOD;
    }

    std::cout << ans << std::endl;

    return 0;
}