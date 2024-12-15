#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    // Initialize a 2D array for dynamic programming
    // dp[i][j] represents the number of sequences of length i ending with the value j
    long long dp[101][1001] = {0};

    // Base case: for each value j, there is exactly 1 sequence of length 1 ending with j
    for (int j = 1; j <= N; j++) {
        dp[1][j] = 1;
    }

    // Populate the dynamic programming array
    for (int i = 2; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            // For each value j, determine the number of valid sequences ending with j
            // by summing up the number of sequences ending with all possible previous values
            for (int prev = 1; prev <= N; prev++) {
                if (prev * j <= N) {
                    dp[i][j] += dp[i - 1][prev];
                    dp[i][j] %= MOD;
                }
            }
        }
    }

    // Sum up the number of sequences of length K from all possible ending values
    long long result = 0;
    for (int j = 1; j <= N; j++) {
        result += dp[K][j];
        result %= MOD;
    }

    cout << result << endl;

    return 0;
}
