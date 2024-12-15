#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 998244353;

int main() {
    int N, A, B;
    long long K;
    cin >> N >> A >> B >> K;

    vector<long long> dp(N+1, 0);
    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        dp[i] = (dp[i-1] * 2) % MOD;
    }

    for (int i = 1; i <= N; i++) {
        long long count = dp[i-1];
        if (i <= K) {
            count -= dp[i-K-1];
        }
        if (count < 0) {
            count += MOD;
        }

        dp[i] = count;
        dp[i] = (dp[i] + dp[i-1]) % MOD;
    }

    long long ans = 0;
    for (int i = 0; i <= N; i++) {
        long long score = 0;
        score = (score + (dp[i] * A) % MOD) % MOD;
        score = (score + (dp[N-i] * B) % MOD) % MOD;

        if (score == K) {
            long long ways = (dp[i] * dp[N-i]) % MOD;
            ans = (ans + ways) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}