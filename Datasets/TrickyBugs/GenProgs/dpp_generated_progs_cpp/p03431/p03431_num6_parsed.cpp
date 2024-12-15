#include <iostream>
#include <vector>

#define MOD 998244353

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> dp(K+1, 0);
    vector<long long> sum(K+1, 0);
    dp[0] = 1;
    sum[0] = 1;

    for (int i = 1; i <= K; i++) {
        if (i >= N) {
            dp[i] = (sum[i-1] - sum[i-N] + MOD) % MOD;
        } else {
            dp[i] = sum[i-1];
        }
        sum[i] = (sum[i-1] + dp[i]) % MOD;
    }

    cout << dp[K] << endl;

    return 0;
}