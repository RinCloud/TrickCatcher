#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    vector<vector<int>> dp(N+1, vector<int>(1 << N));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < (1 << N); j++) {
            for (int k = 0; k < (1 << (i - 1)); k++) {
                if (j & (1 << k)) continue;
                bool valid = true;
                for (int l = 0; l < M; l++) {
                    if (A[l] >= (1 << (N - i + 1))) break;
                    if (A[l] >= (1 << (N - i)) && A[l] < (1 << (N - i + 1)) && (j & (1 << A[l] - 1))) {
                        valid = false;
                        break;
                    }
                }
                if (valid) dp[i][j] = (dp[i][j] + dp[i-1][j ^ (1 << k)]) % MOD;
            }
        }
    }

    cout << dp[N][0] << endl;

    return 0;
}