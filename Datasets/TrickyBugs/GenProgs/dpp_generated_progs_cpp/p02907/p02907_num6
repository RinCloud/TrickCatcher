#include <iostream>
#include <vector>

using namespace std;
const int MOD = 998244353;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    int S = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        S += A[i];
    }

    vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(S+1, vector<int>(N+1, 0)));
    dp[0][0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            for (int k = 0; k <= i; k++) {
                if (dp[i-1][j][k] > 0) {
                    int x = (dp[i-1][j][k] * (S-j)) % MOD;
                    int y = (dp[i-1][j][k] * A[i-1]) % MOD;

                    for (int m = 0; m <= min(j, B[i-1]); m++) {
                        dp[i][j+m][k+(m>=1)] = (dp[i][j+m][k+(m>=1)] + x) % MOD;
                    }

                    for (int m = 1; m <= min(S-j, A[i-1]-1); m++) {
                        dp[i][j+m][k+1] = (dp[i][j+m][k+1] + y) % MOD;
                    }
                }
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= S; j++) {
        for (int k = 1; k <= N; k++) {
            ans = (ans + dp[N][j][k]) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}