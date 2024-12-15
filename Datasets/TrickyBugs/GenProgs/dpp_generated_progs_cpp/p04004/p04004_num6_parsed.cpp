#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>>(M + 1, vector<long long>(K + 1, 0)));
    
    // Initialize base cases
    dp[0][0][0] = 1;
    
    // Dynamic programming
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            for (int k = 0; k <= K; k++) {
                if (i < N) {
                    dp[i + 1][j][k] = (dp[i + 1][j][k] + dp[i][j][k]) % MOD;
                }
                if (j < M) {
                    dp[i][j + 1][k] = (dp[i][j + 1][k] + dp[i][j][k]) % MOD;
                }
                if (k < K) {
                    dp[i][j][k + 1] = (dp[i][j][k + 1] + dp[i][j][k]) % MOD;
                }
            }
        }
    }

    // Calculate Alice's victory count
    long long count = 0;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            for (int k = 0; k <= K; k++) {
                if ((i + j + k) > 0 && ((i + j + k) % 3) == 0) {
                    count = (count + dp[i][j][k]) % MOD;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}