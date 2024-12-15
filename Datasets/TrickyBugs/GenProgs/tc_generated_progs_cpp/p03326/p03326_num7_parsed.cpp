#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
ll x[1010],y[1010],z[1010];
int main(){
    ll n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    ll ans=0;
    for(int i=0;i<8;i++){
        ll num[3]={1,1,1};
        for(int j=0;j<3;j++){
            if(i&(1<<j)){
                num[j]*=-1;
            }
        }
        vector<P>v;
        for(int i=0;i<n;i++)v.push_back({-(num[0]*x[i]+num[1]*y[i]+num[2]*z[i]),i});
        sort(v.begin(),v.end());
        ll sum[3]={};
        for(int i=0;i<m;i++){
            sum[0]+=x[v[i].second];
            sum[1]+=y[v[i].second];
            sum[2]+=z[v[i].second];
        }
        ans=max(ans,abs(sum[0])+abs(sum[1])+abs(sum[2]));
    }
    cout<<ans<<endl;
    return 0;
}