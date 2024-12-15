#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,n;
    scanf("%d%d",&h,&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)scanf("%d%d",&a[i],&b[i]);
    int dp[10005];
    for(int i=0;i<10005;i++)dp[i]=INT_MAX;
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=a[i];j<10005;j++){
            dp[j]=min(dp[j],dp[j-a[i]]+b[i]);
        }
    }
    int ans=INT_MAX;
    for(int i=h;i<10005;i++)ans=min(ans,dp[i]);
    printf("%d",ans);
}
