#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    vector<int> m(N + 1);
    vector<int> p(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> m[i] >> p[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(N + 1, -1));
    dp[0][0] = X;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            // Don't make any doughnut i
            dp[i][j] = dp[i - 1][j];

            // Try to make doughnut i
            if (j > 0 && dp[i - 1][j - 1] >= 0) {
                int doughnut_i = min(m[i], dp[i - 1][j - 1] / D * D);
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] - doughnut_i * D + (dp[i - 1][j - 1] / D) * (D + p[i]) - doughnut_i);

                if (dp[i - 1][j - 1] >= (doughnut_i + 1) * D) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] - (doughnut_i + 1) * D + ((doughnut_i + 1) / D) * (D + p[i]) - (doughnut_i + 1));
                }
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= N; j++) {
        if (dp[N][j] >= 0) {
            ans = max(ans, j);
        }
    }

    cout << ans << endl;

    return 0;
}