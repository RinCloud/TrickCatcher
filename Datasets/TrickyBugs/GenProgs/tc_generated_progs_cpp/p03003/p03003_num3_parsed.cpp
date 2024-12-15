
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll mod=1e9+7;
    ll n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int j=1;j<=m;j++)
    cin>>b[j];
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++)
    dp[i][0]=1;
    for(int i=0;i<=m;i++)
    dp[0][i]=1;
    for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i]==b[j])
			dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
			else
			dp[i][j]=(dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+mod)%mod;
		}
	}
	 cout<<dp[n][m]<<endl;
 }   
