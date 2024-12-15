#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int dp[75][75][75];
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    dp[0][0][0] = 1;
    for(int i = 0; i <= k; i++){
        for(int r = 0; r <= n; r++){
            for(int b = 0; b <= n; b++){
                if(dp[i][r][b] == 0) continue;
                if(s[i] == 'r'){
                    for(int j = 0; j <= n - r; j++){
                        dp[i + 1][r + j][b] = (dp[i + 1][r + j][b] + dp[i][r][b]) % mod;
                    }
                }
                else if(s[i] == 'b'){
                    for(int j = 0; j <= n - b; j++){
                        dp[i + 1][r][b + j] = (dp[i + 1][r][b + j] + dp[i][r][b]) % mod;
                    }
                }
                else{ // s[i] == '?'
                    for(int j = 0; j <= n - r; j++){
                        dp[i + 1][r + j][b] = (dp[i + 1][r + j][b] + dp[i][r][b]) % mod;
                    }
                    for(int j = 0; j <= n - b; j++){
                        dp[i + 1][r][b + j] = (dp[i + 1][r][b + j] + dp[i][r][b]) % mod;
                    }
                }
            }
        }
    }
    int ans = dp[k][n][n];
    cout << ans << endl;
    return 0;
}