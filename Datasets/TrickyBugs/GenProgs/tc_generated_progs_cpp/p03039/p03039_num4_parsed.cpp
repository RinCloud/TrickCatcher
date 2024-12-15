#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
typedef long long ll;
ll mod=1e9+7;
ll inv(ll a){
    ll n=mod-2,ans=1;
    while(n>0){
        if(n%2) ans=ans*a%mod;
        n=n/2;
        a=a*a%mod;
    }
    return ans;
}
ll nCr(ll n,ll r){
  ll ans=1;
  rep(i,r) ans=ans*(n-i)%mod*inv(i+1)%mod;
  return ans;
}
int main(){
  long long n,m,k,ans,a=0,b,x;
  cin>>n>>m>>k;
  rep(i,n)rep(j,m) a=(a+i+j)%mod;
  b=a;
  rep(i,n-1) b=(b+m*(i+1)-m*(n-i-1)+mod)%mod,a=(a+b)%mod;
  b=a;
  rep(i,m-1) b=(b+n*n*(i+1)-n*n*(m-i-1)+mod)%mod,a=(a+b)%mod;
  ans=(nCr(k,2)*nCr(n*m,k))%mod;
  ans=(a*ans)%mod;
  x=n*m*(n*m-1)%mod;
  cout<<ans*inv(x)%mod;
}