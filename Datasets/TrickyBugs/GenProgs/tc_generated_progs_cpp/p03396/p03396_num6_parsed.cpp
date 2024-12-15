#include<bits/stdc++.h>
using namespace std;
const int N=3000010;
int a[N],b[N],pre1[N],tagL[N],tagR[N],mn1[N],pre2[N],mn2[N],n,L;
typedef long long ll;
ll ans;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>L;
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=1;i<=n;++i){
        cin>>b[i];ans+=b[i]/(2*L)*2;
        b[i]%=2*L;
        if(!b[i])ans-=2,b[i]=2*L;
        if(b[i]<=2*(L-a[i]))tagR[i]=1;
        if(b[i]<=2*a[i])tagL[i]=1;
        if(!tagL[i]&&!tagR[i])ans++;
    }
    for(int i=1;i<=n;++i){
        pre1[i]=pre1[i-1]+tagL[i]-tagR[i];if(tagL[i]&&tagR[i])pre1[i]++;
        mn1[i]=min(mn1[i-1],pre1[i]);
    }
    mn2[n+1]=1;
    for(int i=n;i;--i){
        pre2[i]=pre2[i+1]+tagL[i]-tagR[i];if(tagL[i]&&tagR[i])pre2[i]--;
        mn2[i]=min(0,pre2[i]-pre2[i+1]+mn2[i+1]);
    }
    int ret=INT_MAX;
    for(int i=0;i<=n;++i){
        int d=1-min(mn1[i],pre1[i]+mn2[i+1]),s=pre1[i]+pre2[i+1]+d;
        ret=min(ret,d+s);
    }
    ans+=ret+n;
    cout<<ans*L<<'\n';
    return 0;
}
