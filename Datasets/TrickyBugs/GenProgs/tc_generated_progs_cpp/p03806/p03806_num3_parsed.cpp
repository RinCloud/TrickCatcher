#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (1<<29)
#define rep(i,n) for(int i=0;i<(n);i++)
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return a/gcd(a,b)*b;
}
int dp[41][411][411],a[41],b[41],c[41],n,ma,mb,ans=INF;
signed main(){
	cin>>n>>ma>>mb;
	rep(i,n)cin>>a[i]>>b[i]>>c[i];
	rep(i,41)rep(j,411)rep(k,411)dp[i][j][k]=INF;
	dp[0][0][0]=0;
	for(int i=1;i<=n;i++){
	    rep(j,411){
	        rep(k,411){
	            if(j<a[i-1]||k<b[i-1])dp[i][j][k]=dp[i-1][j][k];
	            else dp[i][j][k]=min(dp[i-1][j][k],dp[i-1][j-a[i-1]][k-b[i-1]]+c[i-1]);
	        }
	    }
	}
	for(int i=1;ma*i<411&&mb*i<411;i++)ans=min(ans,dp[n][ma*i][mb*i]);
	if(ans==INF)cout<<-1<<endl;
	else cout<<ans<<endl;
	return 0;
}
