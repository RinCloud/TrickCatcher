#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    
    vector<int> l(M), r(M);
    for (int i = 0; i < M; i++) {
        cin >> l[i] >> r[i];
    }
    
    vector<vector<int>> dp(N + 1, vector<int>(N + 1));
    dp[0][0] = 1;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N; j++) {
            if (j > 0) {
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j - 1]) % MOD;
            }
            dp[i + 1][j] = (dp[i + 1][j] + dp[i][j + 1]) % MOD;
        }
        for (int j = 0; j < M; j++) {
            if (i + 1 >= l[j] && i + 1 <= r[j]) {
                for (int k = i + 1; k <= r[j]; k++) {
                    dp[k][0] = (dp[k][0] + dp[i + 1][k]) % MOD;
                }
            }
        }
    }
    
    int ans = 0;
    for (int j = 0; j <= N; j++) {
        ans = (ans + dp[N][j]) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}