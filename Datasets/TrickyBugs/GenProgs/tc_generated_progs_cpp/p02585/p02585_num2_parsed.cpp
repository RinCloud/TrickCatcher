#include<bits/stdc++.h>
using namespace std;
long long a[5010],c[5010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,m,ans=-1e18;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    cin>>c[i];
    for(int i=1;i<=n;i++){
        long long s=i,p=0,sum=0,k=0;
        while (true){
            if(s==i&&p)
                break;
            s=a[s];
            sum+=c[s];
            ans=max(ans,sum);
            p++;
            if(p > m)
                break;
        }
        if(m==p)
            continue;
        sum *= (m-p)/p;
        ans=max(ans,sum);
        for(int j=1;j<=(m-p)%p;j++){
            s=a[s];
            sum+=c[s];
            ans=max(ans,sum);
        }
    }
    cout<<ans<<"\n";
    return 0;
}
