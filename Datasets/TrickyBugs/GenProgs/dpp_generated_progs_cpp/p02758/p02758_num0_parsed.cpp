#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> robots(N);
    for (int i = 0; i < N; i++) {
        int X, D;
        cin >> X >> D;
        robots[i] = make_pair(X, D);
    }
    
    sort(robots.begin(), robots.end());
    
    vector<int> dp(N, 0);
    int sum = 1;
    for (int i = N - 1; i >= 0; i--) {
        dp[i] = sum;
        int idx = lower_bound(robots.begin(), robots.end(), make_pair(robots[i].first + robots[i].second, -1)) - robots.begin();
        if (idx < N) {
            sum += dp[idx];
            sum %= MOD;
        }
    }
    
    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += dp[i];
        ans %= MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}