#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    // Initialize dp table
    vector<vector<vector<vector<int>>>> dp(N+1, vector<vector<vector<int>>>(4, vector<vector<int>>(4, vector<int>(4, 0))));
    dp[0][3][3][3] = 1;

    // Loop through the length of the string
    for (int i = 0; i < N; i++) {
        // Loop through the last three characters
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = 0; l < 4; l++) {
                    // Loop through the current character
                    for (int m = 0; m < 4; m++) {
                        if (k == 0 && l == 2 && m == 1) continue;
                        if (k == 0 && j == 2 && m == 1) continue;
                        if (j == 0 && k == 2 && m == 1) continue;
                        if (j == 0 && k == 1 && m == 2) continue;
                        if (j == 2 && k == 0 && m == 1) continue;

                        dp[i+1][k][l][m] += dp[i][j][k][l];
                        dp[i+1][k][l][m] %= MOD;
                    }
                }
            }
        }
    }

    // Calculate the final result
    int result = 0;
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 4; k++) {
            for (int l = 0; l < 4; l++) {
                result += dp[N][j][k][l];
                result %= MOD;
            }
        }
    }

    cout << result << endl;

    return 0;
}