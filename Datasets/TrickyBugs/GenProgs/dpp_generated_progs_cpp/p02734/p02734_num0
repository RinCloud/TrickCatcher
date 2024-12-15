#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    int N, S;
    std::cin >> N >> S;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    std::vector<std::vector<int>> dp(N, std::vector<int>(S + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i < N; i++) {
        for (int j = 0; j <= S; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= A[i]) {
                dp[i][j] += dp[i - 1][j - A[i]];
                dp[i][j] %= MOD;
            }
        }
    }

    int result = 0;
    for (int i = 0; i < N; i++) {
        result += dp[i][S];
        result %= MOD;
    }

    std::cout << result << std::endl;

    return 0;
}