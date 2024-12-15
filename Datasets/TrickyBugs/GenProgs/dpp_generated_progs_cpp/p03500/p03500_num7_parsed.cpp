#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> d(60, 0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 60; j++) {
            if (A[i] & (1LL << j)) {
                d[j]++;
            }
        }
    }

    int ans = 0;
    vector<vector<vector<long long>>> dp(60, vector<vector<long long>>(2, vector<long long>(2, 0)));
    dp[60][0][0] = 1;

    for (int i = 59; i >= 0; i--) {
        if ((K >> i) & 1) {
            dp[i][1][1] = dp[i + 1][1][1] * 2 % MOD;
            dp[i][1][0] = (dp[i + 1][1][0] * 2 + dp[i + 1][0][0] * d[i]) % MOD;
            dp[i][0][0] = dp[i + 1][0][0] * (d[i] + 1) % MOD;
        } else {
            dp[i][0][0] = dp[i + 1][0][0] * d[i] % MOD;
            dp[i][0][1] = dp[i + 1][0][1];
            dp[i][1][0] = dp[i + 1][1][0] * (d[i] + 1) % MOD;
            dp[i][1][1] = dp[i + 1][1][1];
        }
    }

    cout << (dp[0][1][0] + dp[0][0][0]) % MOD << endl;
    return 0;
}