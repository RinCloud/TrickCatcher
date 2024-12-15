#include <iostream>
#include <vector>
#include <algorithm>

const long long MOD = 998244353;
const int MAX_N = 200005;

struct Robot {
    int x, d;

    bool operator<(const Robot& other) const {
        return x < other.x;
    }
};

int main() {
    int n;
    std::cin >> n;

    std::vector<Robot> robots(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> robots[i].x >> robots[i].d;
    }

    std::sort(robots.begin(), robots.end());

    std::vector<long long> dp(n, 0);
    std::vector<int> next(n, -1);

    long long result = 1;

    for (int i = n - 1; i >= 0; --i) {
        dp[i] = 1;
        int j = i + 1;
        while (j < n && robots[j].x < robots[i].x + robots[i].d) {
            if (dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                next[i] = j;
            }
            ++j;
        }
        if (dp[i] > result) {
            result = dp[i];
        }
    }

    std::cout << result << std::endl;

    return 0;
}