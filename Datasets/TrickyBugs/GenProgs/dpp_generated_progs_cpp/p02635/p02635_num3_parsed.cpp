#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

long long power(long long x, long long y) {
    long long res = 1;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % MOD;
        x = (x * x) % MOD;
        y = y >> 1;
    }
    return res;
}

long long inv(long long x) {
    return power(x, MOD - 2);
}

int main() {
    string S;
    long long K;
    cin >> S >> K;
    int N = S.size();
    vector<vector<long long>> dp(N + 1, vector<long long>(K + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= K; j++) {
            dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % MOD;
            for (int k = i + 1; k < N; k++) {
                if (S[k] == '1') {
                    dp[k + 1][j + 1] = (dp[k + 1][j + 1] + dp[i][j]) % MOD;
                }
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i <= K; i++) {
        ans = (ans + dp[N][i]) % MOD;
    }

    cout << ans << endl;

    return 0;
}