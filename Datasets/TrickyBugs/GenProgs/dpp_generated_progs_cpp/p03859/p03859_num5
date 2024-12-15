#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

const int mod = 1000000007;

int dp[3005][3005][2];

int main() {
    int n, m;
    std::cin >> n >> m;
    std::string s;
    std::cin >> s;
    std::vector<std::pair<int, int>> intervals;
    intervals.push_back({0, 0});
    for (int i = 0; i < m; ++i) {
        int l, r;
        std::cin >> l >> r;
        intervals.push_back({l, r});
    }
    intervals.push_back({n + 1, n + 1});

    std::sort(intervals.begin(), intervals.end());

    memset(dp, 0, sizeof(dp));
    dp[0][0][0] = 1;

    for (int i = 1; i <= m + 1; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int k = 0; k < 2; ++k) {
                int cur_l = intervals[i - 1].first;
                int cur_r = intervals[i - 1].second;
                int nxt_l = intervals[i].first;
                int nxt_r = intervals[i].second;

                if (j < cur_l || j >= cur_r)
                    dp[i][j][k] = dp[i - 1][j][k];
                else {
                    if (k == 0) {
                        dp[i][j][k] = (dp[i - 1][j][k] + dp[i - 1][j][1 - k]) % mod;
                        if (j < nxt_l)
                            dp[i][j][k] = (dp[i][j][k] + dp[i - 1][j + 1][k]) % mod;
                    } else {
                        if (j >= nxt_l && j < nxt_r)
                            dp[i][j][k] = (dp[i - 1][j - 1][k] + dp[i][j + 1][k]) % mod;
                        else
                            dp[i][j][k] = dp[i - 1][j - 1][k];
                    }
                }
            }
        }
    }

    int ans = dp[m + 1][0][0];
    std::cout << ans << std::endl;

    return 0;
}