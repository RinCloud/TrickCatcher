#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  long long n, k, mod=1e9+7;
  cin>>n>>k;
  long long b=1,r=n-k+1;
  int dp[n+1][n+1];

  for(int i=0; i<=n; i++){
    dp[i][0]=1;dp[i][i]=1;
    for(int j=1; j<i; j++){
      dp[i][j]=(dp[i-1][j]%mod+dp[i-1][j-1]%mod)%mod;
    }
  }

  for(long long i=1 ; i<=k;i++ ){
    long long ans = 0;
    for(int j = 0; j <= min(i, n-k+1); j++){
      ans = (ans%mod + (dp[n-k+1][j]%mod * dp[k-1][i-j-1]%mod)%mod)%mod;
    }
    cout << ans << endl;
  }
}
