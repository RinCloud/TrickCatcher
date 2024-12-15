#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

const long long MOD = 998244353;

struct robot {
    int x;
    int d;
};

bool cmp(const robot& r1, const robot& r2) {
    return r1.x < r2.x;
}

long long exp_mod(long long base, long long exp) {
    if (exp == 0) {
        return 1;
    }
    long long half = exp_mod(base, exp / 2);
    long long result = (half * half) % MOD;
    if (exp % 2 == 1) {
        result = (result * base) % MOD;
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<robot> robots(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> robots[i].x >> robots[i].d;
    }
    
    std::sort(robots.begin(), robots.end(), cmp);
    
    std::vector<long long> dp(n);
    std::vector<long long> prefix_sum(n + 1);
    
    for (int i = n - 1; i >= 0; --i) {
        dp[i] = 1;
        auto it = std::upper_bound(robots.begin() + i + 1, robots.end(), robot{robots[i].x + robots[i].d - 1, -1}, cmp);
        int j = std::distance(robots.begin(), it);
        dp[i] += prefix_sum[i+1] - prefix_sum[j+1];
        dp[i] %= MOD;
        dp[i] += MOD;
        dp[i] %= MOD;
        prefix_sum[i] = prefix_sum[i+1] + dp[i];
        prefix_sum[i] %= MOD;
    }
    
    long long result = exp_mod(2, n) - 1;
    result += MOD;
    result %= MOD;

    std::cout << result << std::endl;
    
    return 0;
}