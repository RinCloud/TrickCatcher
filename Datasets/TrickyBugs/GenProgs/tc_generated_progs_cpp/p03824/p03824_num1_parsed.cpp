#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
typedef long long ll;
typedef unordered_set<ll> myset; // fix name conflict with STL set
#define N 100010
#define D 20
ll n;
vector<ll> g[N];
myset solve(ll x,ll from){
  vector<myset> v; // fix name conflict with STL set
  for(auto y:g[x])if(y!=from)v.push_back(solve(y,x));
  ll clash=-1;
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
  myset res; res.insert(gen); // fix name conflict with STL set
  for(ll i=gen+1;i<D;i++){
    int cnt=0;
    for(auto x:v)if(x.find(i)!=x.end())cnt++;
    if(cnt>0)res.insert(i); // fix name conflict with STL set
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
  myset res=solve(1,0); // fix name conflict with STL set
  ll ans=0;
  for(auto x:res)ans=max(ans,x);
  cout<<ans<<endl;
  return 0;
}
