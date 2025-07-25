#include<cstdio>
#include<algorithm>
#define MAXN 100000
#define MAXK 1000
using namespace std;
struct node
{
	int x,y,opt;
}poi[MAXN+5];
int dp[MAXK+5][MAXK+5],ctr[MAXK+5][MAXK+5];
int n,k;
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		int a,b,tot=0,optnum;
		char opt;
		scanf("%d %d %c",&a,&b,&opt);
		if(opt=='B')		optnum=1;
		else if(opt=='W')	optnum=0;
		tot+=a/k; a%=k;
		tot+=b/k; b%=k;
		poi[i].x=a; poi[i].y=b;
		poi[i].opt=optnum; // fixed here
	}
	for(int i=1;i<=n;i++)
	{
		int x=poi[i].x,y=poi[i].y,opt=poi[i].opt;

		ctr[0][0]++; // fixed here
		ctr[x+1][0]--; 
		ctr[0][y+1]--;
		ctr[x+1][y+1]++;

		if(opt==1) {
			ctr[k][0]--; 
			ctr[0][k]--;
			ctr[k][y+1]++; 
			ctr[x+1][k]++; // fixed here
		}

	}
	int ans=0;
	for(int y=0;y<=k;y++) // fixed here
		for(int x=0;x<=k;x++) // fixed here
		{
			dp[x][y]=dp[x-1][y]+dp[x][y-1]-dp[x-1][y-1]+ctr[x][y]; // fixed here
			ans=max(ans,max(dp[x][y],n-dp[x][y]));
		}
	printf("%d\n",ans);
	return 0;
}
