#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

const int MOD = 998244353;

int main() {
    int N;
    std::cin >> N;

    std::vector<int> X(N), D(N);
    for (int i = 0; i < N; i++) {
        std::cin >> X[i] >> D[i];
    }

    std::vector<int> cnt(N, 0);
    for (int i = 0; i < N; i++) {
        if (D[i] > 0) {
            int idx = std::lower_bound(X.begin(), X.end(), X[i] + D[i]) - X.begin();
            cnt[i] += idx - i - 1;
        } else {
            int idx = std::lower_bound(X.begin(), X.end(), X[i]) - X.begin();
            cnt[i] += i - idx - 1;
        }
    }

    std::vector<int> ans(N + 1, 0);
    ans[0] = 1;
    for (int i = 0; i < N; i++) {
        std::vector<int> dp(cnt[i] + 1, 0);
        dp[0] = 1;
        for (int j = 0; j < cnt[i]; j++) {
            dp[j + 1] = (dp[j + 1] + dp[j]) % MOD;
            dp[j + 1] = (dp[j + 1] + ans[i] * 2) % MOD;
        }
        dp[cnt[i]] = (dp[cnt[i]] + ans[i]) % MOD;
        ans[i + 1] = dp[cnt[i]];
    }

    std::cout << ans[N] << std::endl;

    return 0;
}