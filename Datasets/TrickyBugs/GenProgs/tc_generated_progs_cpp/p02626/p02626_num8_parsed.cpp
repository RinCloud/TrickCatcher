#include<bits/stdc++.h>
using namespace std;
#define ALL(x) x.begin(),x.end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define debug(v) cout<<#v<<":";for(auto x:v){cout<<x<<' ';}cout<<endl;
#define INF 1000000000
#define mod 1000000007
using ll=long long;
const ll LINF=1001002003004005006ll;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
// ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
template<class T>bool chmax(T &a,const T &b){if(a<b){a=b;return true;}return false;}
template<class T>bool chmin(T &a,const T &b){if(b<a){a=b;return true;}return false;}

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
    chmin(ret,2*f((a-1)/2,(b+1)/2,x/2)+1);
    return ret;
}



signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int n;cin>>n;
    ll a,b,x=0;
    cin>>a>>b;
    rep(i,n-2){
        ll t;cin>>t;
        x^=t;
    }
    ll res=f(a,b,x);
    if(res>=a) cout<<-1<<endl;
    else cout<<res<<endl;
    return 0;
}
