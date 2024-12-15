#include <iostream>
#include <vector>

const int MOD = 1000000007;

int countStrings(int N) {
    std::vector<std::vector<std::vector<std::vector<int>>>> dp(N+1,
        std::vector<std::vector<std::vector<int>>>(4,
            std::vector<std::vector<int>>(4,
                std::vector<int>(4, 0))));

    dp[0][0][0][0] = 1;

    for (int i = 0; i < N; ++i) {
        for (int a = 0; a < 4; ++a) {
            for (int b = 0; b < 4; ++b) {
                for (int c = 0; c < 4; ++c) {
                    for (int d = 0; d < 4; ++d) {
                        if (b == 0 && c == 1 && d == 2) continue; // Disallowed substring (AGC)
                        if (b == 1 && c == 0 && d == 2) continue; // Disallowed substring (GAC)
                        if (b == 0 && c == 2 && d == 1) continue; // Disallowed substring (ACG)
                        if (a == 0 && c == 1 && d == 2) continue; // Disallowed substring (AGC)
                        if (a == 0 && b == 1 && d == 2) continue; // Disallowed substring (AGC)

                        dp[i+1][b][c][d] = (dp[i+1][b][c][d] + dp[i][a][b][c]) % MOD;
                    }
                }
            }
        }
    }

    int result = 0;
    for (int a = 0; a < 4; ++a) {
        for (int b = 0; b < 4; ++b) {
            for (int c = 0; c < 4; ++c) {
                result = (result + dp[N][a][b][c]) % MOD;
            }
        }
    }

    return result;
}

int main() {
    int N;
    std::cin >> N;

    int answer = countStrings(N);
    std::cout << answer << std::endl;

    return 0;
}