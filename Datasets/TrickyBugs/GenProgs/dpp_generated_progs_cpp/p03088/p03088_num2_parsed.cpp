#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int main() {
    int N;
    std::cin >> N;

    // Initialize a 2D vector to store the number of valid strings
    std::vector<std::vector<std::vector<std::vector<long long>>>> dp(N + 1,
        std::vector<std::vector<std::vector<long long>>>(4,
            std::vector<std::vector<long long>>(4,
                std::vector<long long>(4))));

    // Base case
    dp[0][3][3][3] = 1;

    // Iterate over the length of the string
    for (int i = 0; i < N; ++i) {
        // Iterate over the last character
        for (int j = 0; j < 4; ++j) {
            // Iterate over the second last character
            for (int k = 0; k < 4; ++k) {
                // Iterate over the third last character
                for (int l = 0; l < 4; ++l) {
                    // Check if the current string is valid
                    if (dp[i][j][k][l] == 0) {
                        continue;
                    }

                    // Iterate over the possible next character
                    for (int m = 0; m < 4; ++m) {
                        // Check if 'AGC' is present as a substring
                        if (k == 0 && l == 1 && m == 2) {
                            continue;
                        }
                        if (k == 0 && l == 2 && m == 1) {
                            continue;
                        }
                        if (j == 0 && l == 1 && m == 2) {
                            continue;
                        }
                        if (j == 0 && k == 1 && m == 2) {
                            continue;
                        }
                        if (k == 1 && l == 0 && m == 2) {
                            continue;
                        }

                        // Add the number of valid strings
                        dp[i + 1][m][j][k] += dp[i][j][k][l];
                        dp[i + 1][m][j][k] %= MOD;
                    }
                }
            }
        }
    }

    long long ans = 0;
    // Iterate over the last character
    for (int j = 0; j < 4; ++j) {
        // Iterate over the second last character
        for (int k = 0; k < 4; ++k) {
            // Iterate over the third last character
            for (int l = 0; l < 4; ++l) {
                ans += dp[N][j][k][l];
                ans %= MOD;
            }
        }
    }

    std::cout << ans << std::endl;

    return 0;
}