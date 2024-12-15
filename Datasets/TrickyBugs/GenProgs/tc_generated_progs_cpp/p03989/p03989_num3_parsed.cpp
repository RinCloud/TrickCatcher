#include <bits/stdc++.h>
using namespace std;
const int N=2050,mod=924844033;
int n,k,m,ans,jc[N]= {1},f[N*2][N][2];
bool ed[N],vis[N][2];
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; i++)
		for(int j=0; j<2; j++)
			if(!vis[i][j])
			{
				int cnt=0;
				for(int x=i,y=j; x<=n; x+=k,y^=1)
				{
					cnt++;
					vis[x][y]=true;
				}
				m+=cnt;
				ed[m]=true;
			}
	f[0][0][0]=1; // fix the starting index
	for(int i=0; i<m; i++) // fix loop ending condition
		for(int j=0; j<=n; j++)
		{
			f[i+1][j][0]=(f[i+1][j][0]+f[i][j][0]+f[i][j][1])%mod; // fix modulo operation position
			if(!ed[i]) // fix array index
				f[i+1][j+1][1]=(f[i+1][j+1][1]+f[i][j][0])%mod; // fix modulo operation position
		}
	for(int i=1; i<=n; i++)
		jc[i]=(1LL*jc[i-1]*i)%mod; // fix modulo operation position
	ans=jc[n];
	for(int i=1; i<=n; i++)
		if(i&1)
			ans=(ans-(1LL*(f[m][i][0]+f[m][i][1])%mod*jc[n-i])%mod+mod)%mod; // fix modulo operation position
		else
			ans=(ans+(1LL*(f[m][i][0]+f[m][i][1])%mod*jc[n-i])%mod)%mod; // fix modulo operation position
	printf("%d\n",ans);
}
