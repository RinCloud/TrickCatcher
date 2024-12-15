#include<iostream>
using namespace std;
#define int long long
#define rep(i,N) for(int(i)=0;(i)<(N);(i)++)

const int MOD = 1e9+7;
signed main(){
    int N;
    cin >> N;
    
    int dp[110][4][4][4];
    int A=0, G=1, C=2, T=3;

    rep(a,4)rep(b,4)rep(c,4) dp[3][a][b][c] = 1;

    dp[3][A][G][C] = 0;
    dp[3][A][C][G] = 0;
    dp[3][G][A][C] = 0;

    for(int i=4;i<=N;i++){
        rep(a,4)rep(b,4)rep(c,4)rep(d,4){
            if(b == A && c == G && d == C) continue;
            if(b == A && c == C && d == G) continue;
            if(b == G && c == A && d == C) continue;
            if(a == A && c == G && d == C) continue;
            if(a == A && b == G && d == C) continue;
            (dp[i][b][c][d] += dp[i-1][a][b][c]) %= MOD;
        }
    }

    int ans = 0;
    rep(a,4)rep(b,4)rep(c,4){
        (ans += dp[N][a][b][c]) %= MOD;
    }

    cout << ans << endl;
}