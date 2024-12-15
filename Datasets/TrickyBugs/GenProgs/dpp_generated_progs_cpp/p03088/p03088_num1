#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    // Create a 4-dimensional vector to store the number of valid strings
    vector<vector<vector<vector<int>>>> dp(N+1,
            vector<vector<vector<int>>>(4,
                    vector<vector<int>>(4, vector<int>(4, 0))));

    // Initialize the base case
    dp[0][3][3][3] = 1;

    // Iterate over the length of the string
    for (int len = 0; len < N; len++) {
        // Iterate over the last three characters
        for (int c1 = 0; c1 < 4; c1++) {
            for (int c2 = 0; c2 < 4; c2++) {
                for (int c3 = 0; c3 < 4; c3++) {
                    // Iterate over the next character
                    for (int nxt = 0; nxt < 4; nxt++) {
                        // Check if swapping characters violates the condition
                        if ((c2 == 0 && c1 == 1 && nxt == 2) || // AGC
                            (c2 == 1 && c1 == 0 && nxt == 2) || // GAC
                            (c2 == 0 && c1 == 2 && nxt == 1) || // ACG
                            (c3 == 0 && c1 == 1 && nxt == 2) || // AGC
                            (c3 == 0 && c2 == 1 && nxt == 2))   // ACG
                        {
                            continue;
                        }

                        // Update the count of valid strings
                        dp[len+1][c2][c1][nxt] = (dp[len+1][c2][c1][nxt] +
                                                dp[len][c3][c2][c1]) % MOD;
                    }
                }
            }
        }
    }

    // Calculate the sum of all counts of valid strings for the last three characters
    int ans = 0;
    for (int c1 = 0; c1 < 4; c1++) {
        for (int c2 = 0; c2 < 4; c2++) {
            for (int c3 = 0; c3 < 4; c3++) {
                ans = (ans + dp[N][c3][c2][c1]) % MOD;
            }
        }
    }

    // Print the result
    cout << ans << endl;

    return 0;
}