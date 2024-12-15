#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    vector<int> m(N+1);
    vector<int> p(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> m[i] >> p[i];
    }

    vector<vector<long long>> dp(N+1, vector<long long>(X+1, -1));
    dp[0][0] = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= X; j++) {
            if (dp[i-1][j] != -1) {
                int cmin = max(0, j - m[i] * D);
                int cmax = min(X, j + m[i] * D);
                for (int k = cmin; k <= cmax; k++) {
                    dp[i][k] = max(dp[i][k], dp[i-1][j] + (k - j) / m[i]);
                }
            }
        }
    }

    long long ans = 0;
    for (int j = 0; j <= X; j++) {
        ans = max(ans, dp[N][j]);
    }

    cout << ans << endl;

    return 0;
}