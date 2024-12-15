#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 998244353;

struct Robot {
    int start;
    int distance;
};

int main() {
    int N;
    std::cin >> N;

    std::vector<Robot> robots(N);
    for (int i = 0; i < N; i++) {
        std::cin >> robots[i].start >> robots[i].distance;
    }

    std::sort(robots.begin(), robots.end(), [](const Robot& r1, const Robot& r2) {
        return r1.start < r2.start;
    });

    std::vector<long long> dp(N + 1, 0);
    std::vector<long long> prefix(N + 2, 0);

    dp[N] = 1;
    prefix[N + 1] = 1;

    for (int i = N - 1; i >= 0; i--) {
        int right = std::upper_bound(robots.begin() + i + 1, robots.end(), robots[i].start + robots[i].distance) - robots.begin();
        int count = prefix[i + 1] - prefix[right + 1];
        dp[i] = (dp[i + 1] + count) % MOD;
        prefix[i] = (prefix[i + 1] + dp[i]) % MOD;
    }

    std::cout << dp[0] << std::endl;

    return 0;
}