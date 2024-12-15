#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(4, vector<int>(4, vector<int>(4, 0))));
    
    // Base case: the initial string contains a single character
    dp[0][0][0][0] = 1;

    // Calculate the number of valid strings of length i
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                for (int l = 0; l < 4; l++) {
                    // Check if AGC appears as a substring
                    for (int m = 0; m < 4; m++) {
                        if (k == 1 && l == 2 && m == 3) {
                            continue;
                        }
                        if (k == 2 && l == 1 && m == 3) {
                            continue;
                        }
                        if (j == 1 && l == 2 && m == 3) {
                            continue;
                        }
                        if (j == 1 && k == 2 && m == 3) {
                            continue;
                        }
                        dp[i + 1][k][l][m] = (dp[i + 1][k][l][m] + dp[i][j][k][l]) % MOD;
                    }
                }
            }
        }
    }
    
    // Calculate the total number of valid strings of length N
    int ans = 0;
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 4; k++) {
            for (int l = 0; l < 4; l++) {
                ans = (ans + dp[N][j][k][l]) % MOD;
            }
        }
    }

    cout << ans << endl;

    return 0;
}