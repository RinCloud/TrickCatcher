#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
typedef long long ll;
typedef unordered_set<ll> set;
#define N 100010
#define D 20
ll n;
vector<ll> g[N];
set solve(ll x,ll from){
  vector<set> v;
  for(auto y:g[x])if(y!=from)v.push_back(solve(y,x));
  ll clash=0;
  for(ll i=D;i-1;i--){
    int cnt=0;
    for(auto x:v)if(x.find(i)!=x.end())cnt++;
    if(cnt>=2){clash=i; break;}
  }
  ll gen;
  for(ll i=clash+1;;i++){
    int cnt=0;
    for(auto x:v)if(x.find(i)!=x.end())cnt++;
    if(cnt==0){gen=i; break;}
  }
  set res; res.insert(gen);
  for(ll i=gen+1;i<D;i++){
    int cnt=0;
    for(auto x:v)if(x.find(i)!=x.end())cnt++;
    if(cnt>0)res.insert(i);
  }
  return res;
}
int main(){
  cin>>n;
  for(int i=0;i<n-1;i++){
    ll a,b;cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  set res=solve(1,0);
  ll ans=0;
  for(auto x:res)ans=max(ans,x);
  cout<<ans<<endl;
  return 0;
}