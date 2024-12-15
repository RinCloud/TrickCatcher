#include <iostream>
#include <vector>

#define MOD 998244353

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> dp(K+1, 0);
    dp[0] = 1;

    vector<int> prefixSum(K+1, 0);
    prefixSum[0] = 1;

    for (int i = 1; i <= K; i++) {
        prefixSum[i] = (prefixSum[i-1] + dp[i-1]) % MOD;
    }

    for (int i = 1; i <= K; i++) {
        dp[i] = (prefixSum[i] - prefixSum[max(i-N, 0)-1] + MOD) % MOD;
    }

    cout << dp[K] << endl;

    return 0;
}