#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> nums(N + 1);
    for (int i = 0; i <= N; i++) {
        nums[i] = 1e100 + i;
    }

    int count = min(N - K + 1, K);
    long long sum = 0;
    int combinations = 1;
    for (int i = 0; i < count; i++) {
        sum += nums[i];
        sum %= MOD;
        combinations *= (N - i);
        combinations /= (i + 1);
        combinations %= MOD;
    }

    vector<long long> dp(sum + 1, 0);
    dp[sum] = 1;
    for (int i = count; i <= N; i++) {
        for (int j = sum; j >= nums[i]; j--) {
            dp[j - nums[i]] = (dp[j - nums[i]] + dp[j]) % MOD;
        }
    }

    long long ans = 0;
    for (int i = 0; i <= sum; i++) {
        ans += dp[i];
        ans %= MOD;
    }
    
    cout << ans << endl;

    return 0;
}