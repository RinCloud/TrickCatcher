#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<int> A(H), B(H);
    for(int i=0; i<H; i++)
        cin >> A[i] >> B[i];
    
    vector<vector<int>> dp(H+1, vector<int>(W+1, INF));
    dp[0][1] = 0;
    
    for(int i=1; i<=H; i++) {
        for(int j=1; j<=W; j++) {
            if(j < A[i-1] || j > B[i-1]) {
                dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
            }
            if(i > 1 && j >= A[i-2] && j <= B[i-2]) {
                dp[i][j] = min(dp[i][j], dp[i-1][j]);
            }
        }
    }
    
    for(int i=1; i<=H; i++) {
        int ans = INF;
        for(int j=A[i-1]; j<=B[i-1]; j++) {
            ans = min(ans, dp[i][j]);
        }
        if(ans == INF) ans = -1;
        cout << ans << "\n";
    }
    
    return 0;
}