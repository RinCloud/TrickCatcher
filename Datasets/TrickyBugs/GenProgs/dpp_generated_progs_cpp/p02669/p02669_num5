#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long minCoins(long long N, long long A, long long B, long long C, long long D) {
    vector<long long> dp(N+1, LLONG_MAX);
    dp[0] = 0;
    for (long long i = 0; i <= N; i++) {
        if (dp[i] == LLONG_MAX) {
            continue;
        }
        dp[i+1] = min(dp[i+1], dp[i] + D);
        dp[i] = min(dp[i], dp[i] + D);
        if (i * 2 <= N) {
            dp[i*2] = min(dp[i*2], dp[i] + A);
        }
        if (i * 3 <= N) {
            dp[i*3] = min(dp[i*3], dp[i] + B);
        }
        if (i * 5 <= N) {
            dp[i*5] = min(dp[i*5], dp[i] + C);
        }
    }
    return dp[N];
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        long long N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;
        long long ans = minCoins(N, A, B, C, D);
        cout << ans << endl;
    }
    return 0;
}