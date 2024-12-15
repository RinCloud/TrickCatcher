#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;

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

    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));

    unordered_map<int, int> last_index;

    for (int i = 0; i < N; i++) {
        int current = S[i];
        if (last_index.count(current)) {
            dp[i + 1][0] = (dp[i][0] + dp[last_index[current]][0] + 1) % MOD;
        } else {
            dp[i + 1][0] = (dp[i][0] + 1) % MOD;
        }
        last_index[current] = i + 1;
    }

    last_index.clear();

    for (int j = 0; j < M; j++) {
        int current = T[j];
        if (last_index.count(current)) {
            dp[0][j + 1] = (dp[0][j] + dp[0][last_index[current]] + 1) % MOD;
        } else {
            dp[0][j + 1] = (dp[0][j] + 1) % MOD;
        }
        last_index[current] = j + 1;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] + 1) % MOD;
            } else {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1]) % MOD;
                if (dp[i][j] < 0) {
                    dp[i][j] += MOD;
                }
            }
        }
    }

    cout << dp[N][M] << endl;

    return 0;
}