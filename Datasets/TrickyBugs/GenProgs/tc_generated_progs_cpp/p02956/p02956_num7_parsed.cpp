#include<bits/stdc++.h>
#define lowbit(x) x&(-x)
#define ll long long
#define mod 998244353
using namespace std;
int x[200001];int y[200001];int lsh[200001];int cnt;ll ans=0;	int n;
struct point {
    int x,y;
    bool operator<(const point &gv)const{
        return gv.x<x;
    }
}p[200001];ll tree[200001];ll tree2[200001];
int query(int x1){int ans=0;
    for(;x1;x1-=lowbit(x1)) ans+=tree[x1]; return ans;
}
int query2(int x1){int ans=0;
    for(;x1;x1-=lowbit(x1)) ans+=tree2[x1]; return ans;
}
void add(int x1,int rt){
    for(;x1<=n;x1+=lowbit(x1)) tree[x1]+=rt;
}
void add2(int x1,int rt){
    for(;x1<=n;x1+=lowbit(x1)) tree2[x1]+=rt;
}
inline ll power(ll a,ll b)
{
    ll ans=1;
    for(;b;b>>=1,a=a*a%mod)
        if(b&1) ans=ans*a%mod;
    return ans;
}
int main(){
    memset(tree,0,sizeof(tree));
    cin>>n;
    for(int i=1; i<=n; i++) {
        scanf("%d%d",&x[i],&y[i]);
        lsh[i] = x[i];    
    }
    sort(lsh+1 , lsh+n+1);
    cnt = unique(lsh+1 , lsh+n+1) - lsh - 1;
    for(int i=1; i<=n; i++)
        x[i] = lower_bound(lsh+1 , lsh+cnt+1 ,x[i]) - lsh;
        
    for(int i=1; i<=n; i++) {
        lsh[i] = y[i];    
    }
    sort(lsh+1 , lsh+n+1);
    cnt = unique(lsh+1 , lsh+n+1) - lsh - 1;
    for(int i=1; i<=n; i++)
        y[i] = lower_bound(lsh+1 , lsh+cnt+1 ,y[i]) - lsh;
        
    for(int i=1; i<=n; i++){
        p[i].x=x[i];
        p[i].y=y[i];
    }
    sort(p+1,p+n+1);
    for(int i=1; i<=n; i++) tree2[i]=i&(-i);
    
    for(int i=1; i<=n; i++){
        add2(p[i].y,-1);
        int A1=query(p[i].y); int B1=query(n)-query(p[i].y); int C1=query2(p[i].y); int D1=query2(n)-query2(p[i].y);
        ll A2=power(2,A1), B2=power(2,B1), C2=power(2,C1), D2=power(2,D1);
        ans=(ans+(A2-1)%mod*(B2)%mod*(C2)%mod*(D2-1)%mod)%mod;
        ans=(ans+(A2)%mod*(B2-1)%mod*(C2-1)%mod*(D2)%mod)%mod;
        ans=(ans-(A2-1)%mod*(B2-1)%mod*(C2-1)%mod*(D2-1)%mod)%mod;
        ans=(ans+power(2,n-1))%mod;
        add(p[i].y,1);
    }
    cout<<ans;
}
