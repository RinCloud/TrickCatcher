#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> A(2*N, vector<int>(2*N));
    for(int i=0;i<2*N;i++) {
        for(int j=0;j<2*N;j++) {
            char c;
            cin >> c;
            A[i][j] = c - '0';
        }
    }
    
    vector<vector<ll>> dp(1<<N, vector<ll>(2*N, -1));
    
    dp[0][0] = 1;
    for(int mask=0;mask<(1<<N);mask++) {
        for(int i=0;i<2*N;i++) {
            if(dp[mask][i] == -1) continue;
            for(int j=0;j<2*N;j++) {
                if(A[i][j] && !(mask & (1<<(j/2)))) {
                    dp[mask | (1<<(j/2))][j] += dp[mask][i];
                }
            }
        }
    }
    
    ll ans = 0;
    for(int i=0;i<2*N;i++) {
        ans += dp[(1<<N)-1][i];
    }
    
    cout << ans << endl;
    
    return 0;
}