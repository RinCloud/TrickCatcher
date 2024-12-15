#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> dp(K + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= K; i++) {
        dp[i] = (dp[i - 1] * N) % MOD;
    }

    for (int i = 1; i <= K; i++) {
        dp[i] = (dp[i] + dp[i - 1]) % MOD;
    }

    long long ans = dp[K];
    cout << ans << endl;

    return 0;
}