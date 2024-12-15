#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    // Initialize a 2D array to store the count of sequences
    // dp[i][j] represents the count of sequences of length i with product j
    long long dp[N + 1][M + 1];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            dp[i][j] = 0;
        }
    }

    // Base case: dp[0][0] = 1
    dp[0][0] = 1;

    // Dynamic programming approach
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            // For each value i, check all factors from 1 to j
            // and add the count of sequences to dp[i][j]
            for (int k = 1; k <= j; k++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j / k]) % MOD;
            }
        }
    }

    // The result is stored in dp[N][M]
    cout << dp[N][M] << endl;

    return 0;
}