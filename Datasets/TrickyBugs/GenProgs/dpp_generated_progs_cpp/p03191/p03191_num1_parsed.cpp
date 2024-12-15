#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_set>
#include <cstring>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> A(2 * N);
    for (int i = 0; i < 2 * N; ++i) {
        cin >> A[i];
    }

    vector<int> num_unknown;
    for (int i = 0; i < 2 * N; ++i) {
        if (A[i] == -1) {
            num_unknown.push_back(i);
        }
    }

    int M = num_unknown.size();
    int dp[M + 1][M + 1];
    memset(dp, 0, sizeof(dp));

    dp[0][0] = 1;

    for (int i = 1; i <= M; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j > 0) {
                dp[i][j] = (dp[i][j] + (long long) dp[i - 1][j - 1] * (num_unknown[i - 1] - (j - 1))) % MOD;
            }
            if (i - j > j) {
                dp[i][j] = (dp[i][j] + (long long) dp[i - 1][j] * (num_unknown[i - 1] - (i - j))) % MOD;
            }
        }
    }

    int ans = 1;
    for (int i = 0; i < N; ++i) {
        ans = (ans * 2) % MOD;
    }

    cout << dp[M][N] * ans % MOD << endl;

    return 0;
}