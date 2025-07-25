#include<bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(),x.end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define debug(v) cout<<#v<<":";for(auto x:v){cout<<x<<' ';}cout<<endl;
#define INF 1000000000
#define mod 1000000007
using ll=long long;
const ll LINF=1001002003004005006ll;

ll f(ll a,ll b,ll x){
    // 不可能
    if(((a&1)^(b&1))!=(x&1)){
        return LINF;
    }
    if(x==0){
        if(a>=b) return (a-b)/2;
        else return LINF;
    }
    ll ret=2*f(a/2,b/2,x/2);
    return ret;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int n;cin>>n;
    ll a,b,x=0;
    cin>>a>>b;
    for(int i=0;i<n-2;i++){
        ll t;cin>>t;
        x^=t;
    }
    ll res=f(a,b,x);
    if(res>=a) cout<<-1<<endl;
    else cout<<res<<endl;
    return 0;
}
