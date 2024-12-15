#include <iostream>
#include <vector>
#include <algorithm>
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

    vector<vector<int>> dp(N+1, vector<int>(N+1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            for (int k = 0; k <= B[i]; k++) {
                int cnt = A[i] - k;
                if (cnt < 0 || j + k > i + 1)
                    continue;

                dp[i+1][j+k] = (dp[i+1][j+k] + (1LL * dp[i][j] * dp[cnt][k]) % MOD) % MOD;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i <= N; i++) {
        int prod = 1;
        for (int j = 0; j < N; j++) {
            prod = (1LL * prod * (A[j] - max(0, i - B[j]))) % MOD;
        }
        ans = (ans + 1LL * dp[N][i] * prod) % MOD;
    }

    cout << ans << endl;

    return 0;
}