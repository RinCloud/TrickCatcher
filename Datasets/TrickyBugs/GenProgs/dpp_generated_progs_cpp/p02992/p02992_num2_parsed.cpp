#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    // Initialize dp table
    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));

    // Base case: when length is 1
    for (int i = 1; i <= N; i++) {
        dp[1][i] = 1;
    }

    for (int len = 2; len <= K; len++) {
        for (int prod = 1; prod <= N; prod++) {
            for (int num = 1; num <= min(prod, N / prod); num++) {
                dp[len][prod] = (dp[len][prod] + dp[len - 1][num]) % MOD;
            }
        }
    }

    // Calculate the sum of all sequences of length K
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans = (ans + dp[K][i]) % MOD;
    }

    cout << ans << endl;

    return 0;
}