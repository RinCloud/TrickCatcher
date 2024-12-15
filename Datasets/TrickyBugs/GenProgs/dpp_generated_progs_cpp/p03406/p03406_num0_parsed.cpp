#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    
    vector<vector<int>> dp(1 << N, vector<int>(N + 1, 0));
    dp[0][1] = 1;
    
    for (int i = 1; i < (1 << N); i++) {
        int cnt = __builtin_popcount(i);
        for (int j = 1; j <= N; j++) {
            if (dp[i][j] == 0) continue;
            for (int k = 0; k < N; k++) {
                if ((i >> k) & 1) continue;
                int win = (j == 1 || j == A[0]) ? A[0] : 1;
                dp[i | (1 << k)][win] = (dp[i | (1 << k)][win] + dp[i][j]) % MOD;
            }
        }
    }
    
    int ans = dp[(1 << N) - 1][1];
    cout << ans << endl;
    
    return 0;
}