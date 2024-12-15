#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(K+1, vector<int>(N+1, 0)); // dp[i][j] represents the number of sequences of length i ending with number j
    dp[0][0] = 1;

    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= j; k++) {
                dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;
            }
        }
    }

    int totalSeq = 0;
    for (int i = 1; i <= N; i++) {
        totalSeq = (totalSeq + dp[K][i]) % MOD;
    }

    cout << totalSeq << endl;

    return 0;
}
