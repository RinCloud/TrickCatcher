#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = (1 << 16) + 5;
const int MAXM = 20;

int N, M;
int A[MAXM];
int dp[MAXN][MAXM];

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
    
    dp[0][0] = 1;
    for (int mask = 0; mask < (1 << N); mask++) {
        int tot = 0;
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                tot++;
            }
        }
        
        for (int i = 1; i <= M; i++) {
            dp[mask][i] = dp[mask][i - 1];
            int cur = (1 << N) - 1;
            for (int j = 0; j < i; j++) {
                cur &= ~(1 << (A[j] - 1));
            }
            while (__builtin_popcount(cur) > tot) {
                dp[mask][i] = (dp[mask][i] + dp[cur][i - 1]) % MOD;
                int x = cur & -cur, y = cur + x;
                cur = ((cur & ~y) / x >> 1) | y;
            }
        }
    }
    
    int ans = dp[(1 << N) - 1][M];
    cout << ans << endl;
    
    return 0;
}