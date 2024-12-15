#include <iostream>
#include <vector>
#include <unordered_map>

const int MOD = 1000000007;

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> S(N);
    std::vector<int> T(M);

    for (int i = 0; i < N; i++) {
        std::cin >> S[i];
    }

    for (int i = 0; i < M; i++) {
        std::cin >> T[i];
    }

    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(M + 1, 0));
    std::unordered_map<int, int> last_occurrence;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + MOD) % MOD;

                if (S[i - 1] == T[j - 1]) {
                    int index = last_occurrence[S[i - 1]];
                    dp[i][j] = (dp[i][j] + dp[index][j - 1]) % MOD;
                }
            }

            last_occurrence[S[i - 1]] = i;
        }
    }

    std::cout << dp[N][M] << std::endl;

    return 0;
}