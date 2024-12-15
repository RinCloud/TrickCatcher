#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

const long long MOD = 998244353;

int main() {
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> robots(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> robots[i].first >> robots[i].second;
    }

    std::sort(robots.begin(), robots.end());

    std::vector<long long> dp(N+1, 0);
    dp[0] = 1;

    std::vector<long long> sum(N+1, 0);
    sum[0] = 1;

    for (int i = 0; i < N; ++i) {
        int l = i + 1;
        int r = std::upper_bound(robots.begin(), robots.end(), std::make_pair(robots[i].first + robots[i].second, 0)) - robots.begin();

        dp[l] = (sum[r] - sum[l] + MOD) % MOD;
        sum[l] = (sum[l-1] + dp[l]) % MOD;
        sum[r] = (sum[r] + dp[l]) % MOD;
    }

    long long result = std::accumulate(dp.begin(), dp.end(), 0LL) % MOD;
    std::cout << result << std::endl;

    return 0;
}