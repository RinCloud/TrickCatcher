#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vector<int> l(M), r(M);
    for (int i = 0; i < M; i++) {
        cin >> l[i] >> r[i];
    }

    vector<vector<int>> dp(M+1, vector<int>(N+1));
    dp[0][0] = 1;
    for (int i = 1; i <= M; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = dp[i-1][j];
        }
        vector<int> sum(N+1);
        sum[0] = dp[i][0];
        for (int j = 1; j <= N; j++) {
            sum[j] = (sum[j-1] + dp[i][j]) % MOD;
        }
        for (int j = 0; j <= N; j++) {
            if (j >= l[i-1]) {
                dp[i][j] = sum[j-l[i-1]];
            }
            if (j >= r[i-1]) {
                dp[i][j] = (dp[i][j] - sum[j-r[i-1]-1] + MOD) % MOD;
            }
        }
    }
    
    int ans = 0;
    for (int j = 0; j <= N; j++) {
        ans = (ans + dp[M][j]) % MOD;
    }
    cout << ans << endl;
    
    return 0;
}