#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    // Initialize the dynamic programming table
    vector<vector<vector<vector<int>>>> dp(N + 1, vector<vector<vector<int>>>(4, vector<vector<int>>(4, vector<int>(4, 0))));
    
    // Base case: strings of length 3 (N = 3)
    for (int c1 = 0; c1 < 4; c1++) {
        for (int c2 = 0; c2 < 4; c2++) {
            for (int c3 = 0; c3 < 4; c3++) {
                if (c1 != 0 && c2 != 0 && c3 != 0 && c2 != 3 && c3 != 3) {
                    dp[3][c1][c2][c3] = 1;
                }
            }
        }
    }
    
    // Dynamic programming approach
    for (int n = 3; n <= N; n++) {
        for (int c1 = 0; c1 < 4; c1++) {
            for (int c2 = 0; c2 < 4; c2++) {
                for (int c3 = 0; c3 < 4; c3++) {
                    for (int c4 = 0; c4 < 4; c4++) {
                        // Check if the current substring c2c3c4 violates the condition
                        if (c2 == 0 && c3 == 2 && c4 == 1) continue;
                        if (c2 == 0 && c3 == 1 && c4 == 2) continue;
                        if (c1 == 0 && c3 == 2 && c4 == 1) continue;
                        if (c1 == 0 && c2 == 2 && c4 == 1) continue;
                        if (c1 == 2 && c2 == 0 && c4 == 1) continue;
                        
                        dp[n][c2][c3][c4] = (dp[n][c2][c3][c4] + dp[n - 1][c1][c2][c3]) % MOD;
                    }
                }
            }
        }
    }
    
    // Calculate the result by summing the number of strings that satisfy the condition
    int result = 0;
    for (int c1 = 0; c1 < 4; c1++) {
        for (int c2 = 0; c2 < 4; c2++) {
            for (int c3 = 0; c3 < 4; c3++) {
                result = (result + dp[N][c1][c2][c3]) % MOD;
            }
        }
    }
    
    cout << result << endl;

    return 0;
}