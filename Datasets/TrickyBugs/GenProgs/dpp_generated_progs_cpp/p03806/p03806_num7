#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int N, Ma, Mb;
    cin >> N >> Ma >> Mb;

    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    const int INF = INT_MAX / 2;
    const int MAX_M = 400;

    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(MAX_M + 1, vector<int>(MAX_M + 1, INF)));
    dp[0][0][0] = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= MAX_M; ++j) {
            for (int k = 0; k <= MAX_M; ++k) {
                if (dp[i][j][k] == INF) continue;
                dp[i + 1][j][k] = min(dp[i + 1][j][k], dp[i][j][k]);
                dp[i + 1][j + a[i]][k + b[i]] = min(dp[i + 1][j + a[i]][k + b[i]], dp[i][j][k] + c[i]);
            }
        }
    }

    int ans = INF;
    for (int i = 1; i <= MAX_M; ++i) {
        for (int j = 1; j <= MAX_M; ++j) {
            if (i * Mb == j * Ma) {
                ans = min(ans, dp[N][i][j]);
            }
        }
    }

    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}