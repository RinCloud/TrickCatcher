#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<long long> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    vector<vector<long long>> dp(N, vector<long long>(2, 0));

    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 1; i < N; i++) {
        if (h[i] == h[i-1]) {
            dp[i][0] = (3 * dp[i-1][0] + 2 * dp[i-1][1]) % MOD;
            dp[i][1] = (2 * dp[i-1][0] + 2 * dp[i-1][1]) % MOD;
        } else if (h[i] > h[i-1]) {
            dp[i][0] = (2 * dp[i-1][0] + dp[i-1][1]) % MOD;
            dp[i][1] = (dp[i-1][0] + dp[i-1][1]) % MOD;
        } else {
            dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD;
            dp[i][1] = (2 * dp[i-1][0] + dp[i-1][1]) % MOD;
        }
    }

    cout << (dp[N-1][0] + dp[N-1][1]) % MOD << endl;

    return 0;
}