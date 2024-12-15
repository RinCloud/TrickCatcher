#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> S(N);
    for (int i = 0; i < N; i++) {
        std::cin >> S[i];
    }

    std::vector<int> T(M);
    for (int i = 0; i < M; i++) {
        std::cin >> T[i];
    }

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(M + 1, 0));
    std::vector<std::vector<int>> prevCol(N + 1, std::vector<int>(M + 1, 0));
    std::vector<std::vector<int>> prevRow(N + 1, std::vector<int>(M + 1, 0));
    std::vector<std::vector<int>> prevCell(N + 1, std::vector<int>(M + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = (2 * dp[i - 1][j - 1] + 1) % MOD;
            } else {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1]) % MOD;
            }

            prevCol[i][j] = (dp[i][j] + prevCol[i - 1][j]) % MOD;
            prevRow[i][j] = (dp[i][j] + prevRow[i][j - 1]) % MOD;
            prevCell[i][j] = (dp[i][j] + prevCell[i - 1][j - 1]) % MOD;
        }
    }

    int answer = (dp[N][M] + prevCol[N][M] + prevRow[N][M] - prevCell[N][M] + MOD) % MOD;
    std::cout << answer << std::endl;

    return 0;
}