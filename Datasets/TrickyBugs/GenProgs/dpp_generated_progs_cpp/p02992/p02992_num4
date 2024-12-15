#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    // Create a dynamic programming array to store the number of sequences
    // dp[i][j] represents the number of sequences of length i ending with j
    // dp[i][j] = dp[i-1][1] + dp[i-1][2] + ... + dp[i-1][j] for j <= N
    int dp[K+1][N+1];
    for (int i = 0; i <= K; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = 0;
        }
    }

    // Initialize dp array for K = 1
    for (int j = 1; j <= N; j++) {
        dp[1][j] = 1;
    }

    // Calculate the number of sequences for K > 1
    for (int i = 2; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            // Sum up the number of sequences for previous length
            for (int k = 1; k <= j; k++) {
                dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;
            }
        }
    }

    // Calculate the total number of sequences for length K
    int totalSeq = 0;
    for (int j = 1; j <= N; j++) {
        totalSeq = (totalSeq + dp[K][j]) % MOD;
    }

    cout << totalSeq << endl;

    return 0;
}