#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

constexpr int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    vector<vector<int>> dp(1 << N, vector<int>(N + 1));
    dp[1][0] = 1;

    for (int mask = 1; mask < (1 << N); ++mask) {
        int numPlayers = __builtin_popcount(mask);
        for (int j = 0; j <= N; ++j) {
            dp[mask][j] = dp[mask][j] % MOD;
            for (int k = 0; k < M; ++k) {
                if (A[k] == numPlayers + j) {
                    dp[mask][j] = (dp[mask][j] + dp[mask ^ (1 << j)][j]) % MOD;
                }
            }
            dp[mask][j] = (dp[mask][j] + dp[mask ^ (1 << j)][j + 1]) % MOD;
        }
    }

    int ans = dp[(1 << N) - 1][0];
    cout << ans << endl;

    return 0;
}