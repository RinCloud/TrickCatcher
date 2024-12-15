#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for(int i=0;i<n;i++)
const int INF=1000000000;

int main(){
    ll N;cin>>N;
    ll info[N];
    rep(i,N){
        cin>>info[i];
        info[i]-=i;
    }
    sort(info,info+N);
    ll a=info[N/2];
    ll ans;
    rep(i,N)ans+=abs(a-info[i]);
    cout<<ans<<endl;
    return 0;
}
