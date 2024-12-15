#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> dp(K + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= K; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (i >= j) {
                dp[i] += dp[i - j];
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[K] << endl;

    return 0;
}