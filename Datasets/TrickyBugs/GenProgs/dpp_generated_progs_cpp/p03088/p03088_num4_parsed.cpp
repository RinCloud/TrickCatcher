#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<vector<vector<vector<int>>>> dp(N + 1, vector<vector<vector<int>>>(4, vector<vector<int>>(4, vector<int>(4, 0))));
    dp[0][3][3][3] = 1;

    for (int i = 0; i < N; i++) {
        for (int a = 0; a < 4; a++) {
            for (int b = 0; b < 4; b++) {
                for (int c = 0; c < 4; c++) {
                    for (int d = 0; d < 4; d++) {
                        if (b == 0 && c == 1 && d == 2) continue; // Check for AGC substring
                        if (b == 1 && c == 0 && d == 2) continue; // Check for AGC substring
                        if (b == 0 && c == 2 && d == 1) continue; // Check for AGC substring
                        if (a == 0 && c == 1 && d == 2) continue; // Check for AGC substring
                        if (a == 0 && b == 1 && d == 2) continue; // Check for AGC substring

                        dp[i + 1][b][c][d] += dp[i][a][b][c];
                        dp[i + 1][b][c][d] %= MOD;
                    }
                }
            }
        }
    }

    int ans = 0;
    for (int a = 0; a < 4; a++) {
        for (int b = 0; b < 4; b++) {
            for (int c = 0; c < 4; c++) {
                ans += dp[N][a][b][c];
                ans %= MOD;
            }
        }
    }

    cout << ans << endl;

    return 0;
}