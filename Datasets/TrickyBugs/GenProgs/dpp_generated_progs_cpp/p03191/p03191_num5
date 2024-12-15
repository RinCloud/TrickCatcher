#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N;
    cin >> N;
    vector<int> A(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> A[i];
    }

    vector<int> cnt(N + 1, 0);
    vector<int> d(2 * N + 1, 0);

    int idx = 0;
    for (int i = 0; i < 2 * N; i++) {
        if (A[i] != -1) {
            if (cnt[A[i]] == 1) {
                cout << "0" << endl;
                return 0;
            }
            cnt[A[i]] = 1;
            d[A[i]] = i + 1;
        }
        else {
            while (cnt[idx] == 1) {
                idx++;
            }
            A[i] = idx;
            cnt[idx] = 1;
            d[idx] = i + 1;
        }
    }

    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            int x = d[2 * (i + 1) - 1];
            int y = d[2 * (i + 1)];
            if (x > y) {
                swap(x, y);
            }
            if (x > 2 * j + 1 || y <= 2 * j + 1) {
                continue;
            }
            dp[i + 1][j + 1] += dp[i][j];
            dp[i + 1][j + 1] %= MOD;
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][j] %= MOD;
        }
    }

    int ans = dp[N][N];
    for (int i = 1; i <= N; i++) {
        ans = (ans * i) % MOD;
    }

    cout << ans << endl;

    return 0;
}