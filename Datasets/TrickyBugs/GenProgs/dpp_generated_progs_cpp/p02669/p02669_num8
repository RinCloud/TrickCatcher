#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

typedef long long ll;

ll findMinCoins(ll N, ll A, ll B, ll C, ll D) {
    vector<ll> dp(N + 1, INT_MAX);
    dp[0] = 0;

    for (ll i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + A);
        }
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + B);
        }
        if (i % 5 == 0) {
            dp[i] = min(dp[i], dp[i / 5] + C);
        }
        dp[i] = min(dp[i], dp[i - 1] + D);
    }
    return dp[N];
}

int main() {
    ll T;
    cin >> T;

    while (T--) {
        ll N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        ll minCoins = findMinCoins(N, A, B, C, D);
        cout << minCoins << endl;
    }

    return 0;
}