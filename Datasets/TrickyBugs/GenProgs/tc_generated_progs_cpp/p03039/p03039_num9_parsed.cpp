#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e9+7;

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
    for(ll i=1;i<=r;i++){
        ans=(ans*(n-i+1)%mod*inv(i)%mod)%mod;
    }
    return ans;
}

int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll ans=0;
    ans=(ans+(nCr(n*m-2,k-2)*(n*(n-1)/2)%mod*m%mod*(m-1)%mod)%mod)%mod;
    cout<<ans<<endl;
    return 0;
}
