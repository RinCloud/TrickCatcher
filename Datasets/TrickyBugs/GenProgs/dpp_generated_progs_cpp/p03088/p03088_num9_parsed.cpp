#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
    int N;
    std::cin >> N;

    std::vector<std::vector<std::vector<int>>> dp(N + 1, std::vector<std::vector<int>>(4, std::vector<int>(4, std::vector<int>(4, 0))));
    // dp[i][j][k][l] represents the number of strings of length i with the last three characters being j, k, l
    // The value represents the number of valid strings modulo MOD

    // Initialize the base cases
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 4; k++) {
            for (int l = 0; l < 4; l++) {
                if (j == 0 && k == 2 && l == 1) {
                    continue;  // Exclude the case of AGC as a substring
                }
                if (j == 0 && k == 1 && l == 2) {
                    continue;  // Exclude the case of GAC as a substring
                }
                if (j == 1 && k == 0 && l == 2) {
                    continue;  // Exclude the case of CAG as a substring
                }
                dp[3][j][k][l] = 1;  // The strings of length 3 with the last three characters being j, k, l
            }
        }
    }

    for (int i = 4; i <= N; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = 0; l < 4; l++) {
                    for (int m = 0; m < 4; m++) {
                        if (j == 0 && k == 2 && l == 1 && m == 3) {
                            continue;  // Exclude the case of AGCX as a substring
                        }
                        if (j == 0 && k == 2 && l == 3 && m == 1) {
                            continue;  // Exclude the case of AGXC as a substring
                        }
                        if (j == 0 && k == 1 && l == 2 && m == 3) {
                            continue;  // Exclude the case of GACX as a substring
                        }
                        if (j == 0 && k == 1 && l == 3 && m == 2) {
                            continue;  // Exclude the case of GAXC as a substring
                        }
                        if (j == 0 && k == 3 && l == 1 && m == 2) {
                            continue;  // Exclude the case of GCAX as a substring
                        }
                        if ((j == 1 && k == 0 && l == 2 && m == 3) || (j == 2 && k == 0 && l == 1 && m == 3)) {
                            continue;  // Exclude the cases of CAGX and AGCX as substrings
                        }
                        dp[i][k][l][m] = (dp[i][k][l][m] + dp[i - 1][j][k][l]) % MOD;
                    }
                }
            }
        }
    }

    int result = 0;
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 4; k++) {
            for (int l = 0; l < 4; l++) {
                result = (result + dp[N][j][k][l]) % MOD;
            }
        }
    }

    std::cout << result << std::endl;

    return 0;
}