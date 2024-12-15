#include <iostream>
#include <vector>

const int MOD = 1000000007;

int countSequences(int N, int M) {
    std::vector<int> dp(M + 1, 0);
    dp[1] = 1;

    for (int i = 2; i <= M; i++) {
        for (int j = i; j <= M; j += i) {
            dp[j] = (dp[j] + dp[i - 1]) % MOD;
        }
    }

    int result = 0;
    for (int i = 1; i <= M; i++) {
        result = (result + dp[i]) % MOD;
    }

    return result;
}

int main() {
    int N, M;
    std::cin >> N >> M;

    int result = countSequences(N, M);
    std::cout << result << std::endl;

    return 0;
}
