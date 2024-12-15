#include <iostream>
#include <vector>

long long countCardSelections(int N, int A, const std::vector<int>& cards) {
    std::vector<std::vector<long long>> dp(N + 1, std::vector<long long>(A * N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= A * N; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j - cards[i - 1] >= 0) {
                dp[i][j] += dp[i - 1][j - cards[i - 1]];
            }
        }
    }

    return dp[N][A * N];
}

int main() {
    int N, A;
    std::cin >> N >> A;

    std::vector<int> cards(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> cards[i];
    }

    long long ways = countCardSelections(N, A, cards);
    std::cout << ways << std::endl;

    return 0;
}