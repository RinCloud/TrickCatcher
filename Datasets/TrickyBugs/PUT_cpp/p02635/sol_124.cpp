#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define N 303
const int mod=998244353;
inline int read(){
	int x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=(x<<1)+(x<<3)+c-'0';
		c=getchar();
	}
	return x*f;
}
int n,m,gu,dp[N][N][N],a[N],ans,sum[N],s1[N][N],s2[N<<1][N<<1];
char s[N];
int main(){
	scanf("%s",s+1);
	n=strlen(s+1),m=read();
	s[++n]='0';
	m=min(n,m);
	for(int i=1;i<=n;++i){
		if(s[i]=='0')++gu;
		else ++a[gu+1];
	}
	for(int i=1;i<=gu;++i){
		sum[i]=a[i]+sum[i-1];
	}
	dp[0][0][0]=1;
	for(int i=1;i<=gu;++i){
		for(int k=0;k<=m;++k){
			s1[0][k]=dp[i-1][0][k];
			for(int j=1;j<=n-gu;++j){
				s1[j][k]=(s1[j-1][k]+dp[i-1][j][k])%mod;
			}
		}
		for(int k=sum[i]-a[i];k<=n-gu+min(n-gu,m)-a[i];++k){
			s2[k][0]=dp[i-1][0][k]%mod;
			for(int p=1;p<=k;++p){
				s2[k][p]=(s2[k][p-1]+dp[i-1][p][k-p])%mod;
			}
		}
		for(int j=sum[i];j<=n-gu;++j){
			int lim=min(j,n-sum[i-1]-gu);
			if(lim>a[i]){
				for(int k=0;k<=min(j,m);++k){
					dp[i][j][k]=1LL*(s1[j-(a[i]+1)][k]-s1[j-lim-1][k]+mod)%mod;
				}
			}
			for(int k=0;k<=min(j,m);++k){
				dp[i][j][k]=(dp[i][j][k]+s2[j+k-a[i]][j-max(0,a[i]-k)]-s2[j+k-a[i]][j-a[i]-1])%mod;
				dp[i][j][k]=(dp[i][j][k]<0?dp[i][j][k]+mod:dp[i][j][k]);
			}
		}
	}
	for(int k=0;k<=m;++k){
		ans=(ans+dp[gu][n-gu][k])%mod;
	}
	cout<<ans<<endl;
	return 0;
}

