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

    vector<int> sum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        sum[i + 1] = sum[i] + (S[i] - '0');
    }

    vector<int> dp(N + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= M; i++) {
        int l, r;
        cin >> l >> r;

        vector<int> nextDp(N + 1, 0);
        for (int j = 0; j <= N; j++) {
            int cnt = sum[r] - sum[l - 1];

            if (j < cnt) {
                nextDp[j] = dp[j];
            } else {
                nextDp[j] = (dp[j] + dp[j - cnt]) % MOD;
            }
        }

        dp = nextDp;
    }

    cout << dp[N] << endl;

    return 0;
}