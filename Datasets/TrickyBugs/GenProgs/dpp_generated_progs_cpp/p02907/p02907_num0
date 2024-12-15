#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<int> dp(401, 0);
    dp[0] = 1;

    for (int i = 0; i < N; i++) {
        vector<int> next_dp(401, 0);
        for (int j = 0; j <= 400; j++) {
            for (int k = 0; k <= B[i]; k++) {
                if (j + k <= 400) {
                    next_dp[j + k] = (next_dp[j + k] + dp[j] * (1LL * A[i] * (N - i) % MOD) % MOD) % MOD;
                }
            }
        }
        dp = next_dp;
    }

    int ans = 0;
    for (int i = 0; i <= 400; i++) {
        ans = (ans + dp[i]) % MOD;
    }

    cout << ans << endl;

    return 0;
}