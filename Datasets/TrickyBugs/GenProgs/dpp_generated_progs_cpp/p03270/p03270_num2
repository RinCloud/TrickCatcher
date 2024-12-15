#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int K, N;
    cin >> K >> N;

    vector<vector<int>> dp(N+1, vector<int>(2*K+1, 0));

    // Base case
    dp[0][0] = 1;

    // Dynamic programming
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 2*K; j++) {
            for (int k = 1; k <= K; k++) {
                if (j - k >= 0 && j - k <= 2*K && k != j - k) {
                    dp[i][j] = (dp[i][j] + dp[i-1][j-k]) % MOD;
                }
            }
        }
    }

    // Print the results
    for (int i = 2; i <= 2*K; i++) {
        cout << dp[N][i] << endl;
    }

    return 0;
}