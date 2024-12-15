#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
ll dp[55][55][2505];

int main(){
  ll n,k;
  cin >> n >> k;
  dp[0][0][0]=1;
  for(ll i=1;i<=n;i++){
    for(ll j=0;j<=i;j++){
      for(ll x=0;x<=n*n;x+=2){
        dp[i][j][x]=(2*j+1)*dp[i-1][j][x-2*j]%mod+(j+1)*(j+1)*dp[i-1][j+1][x]%mod;
        if(j!=0) dp[i][j][x]+=dp[i-1][j-1][x-4*j+2];
        dp[i][j][x]%=mod;
      }
    }
  }
  // Print the number of permutations of {1,\ 2,\ ...,\ n} of oddness k, modulo 10^9+7.
  cout << dp[n][0][k] << endl;
}
