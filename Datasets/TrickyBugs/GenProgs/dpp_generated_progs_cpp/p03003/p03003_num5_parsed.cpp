#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> S(N);
    vector<int> T(M);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> T[i];
    }

    vector<vector<int>> dp(N+1, vector<int>(M+1, 0));
    unordered_map<int, int> last_seen;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 1;
            } else if (S[i-1] != T[j-1]) {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + MOD) % MOD;
            } else {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
                if (last_seen.count(S[i-1]) > 0) {
                    int prev = last_seen[S[i-1]];
                    dp[i][j] = (dp[i][j] - dp[prev-1][j-1] + MOD) % MOD;
                }
            }
            last_seen[S[i-1]] = i;
        }
    }

    cout << dp[N][M] << endl;

    return 0;
}