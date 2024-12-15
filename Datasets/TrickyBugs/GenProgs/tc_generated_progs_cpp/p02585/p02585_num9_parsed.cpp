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
        long long s=i,sum=0,k=0;
        for(int j=1;j<=m;j++){
            s=a[s];
            sum+=c[s];
            ans=max(ans,sum);
            if(s==i){
                k=j;
                break;
            }
        }
        if(m==k||k==0)continue;
        sum=sum*((m-j)/k);
        ans=max(ans,sum);
        long long mm=(m-j)%k+1;
        s=i;
        for(int j=1;j<=mm;j++){
            s=a[s];
            sum+=c[s];
            ans=max(ans,sum);
        }
    }
    cout<<ans<<"\n";
    return 0;
}
