#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vector<pair<int, int>> intervals(M);
    for (int i = 0; i < M; i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }

    vector<vector<int>> prefix(M + 1, vector<int>(N + 1, 0));
    for (int i = 0; i < M; i++) {
        vector<int> cnt(N + 1, 0);
        for (int j = intervals[i].first; j <= intervals[i].second; j++) {
            cnt[j]++;
        }
        for (int j = 1; j <= N; j++) {
            cnt[j] += cnt[j - 1];
        }
        prefix[i + 1] = cnt;
    }

    vector<int> dp2(N + 1, 0);
    dp2[0] = 1;
    for (int i = 0; i < M; i++) {
        vector<int> ndp(N + 1, 0);
        for (int j = 0; j <= N; j++) {
            int sum = 0;
            for (int k = 0; k <= j; k++) {
                sum = (sum + (1LL * dp[j][k] * dp2[k] % MOD) * dp[N - prefix[i + 1][j]][k]) % MOD;
            }
            ndp[j] = sum;
        }
        dp2 = ndp;
    }

    int ans = 0;
    for (int j = 0; j <= N; j++) {
        ans = (ans + dp2[j]) % MOD;
    }
    cout << ans << endl;

    return 0;
}