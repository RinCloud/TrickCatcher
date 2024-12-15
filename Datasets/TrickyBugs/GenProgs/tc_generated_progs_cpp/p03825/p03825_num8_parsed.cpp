#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<iostream>
#define N 2100
#define mmod 1000000007
using namespace std;
int n,m,k,f[N],g[N],ans;
int main()
{
	scanf("%d%d%d",&n,&m,&k);
	f[0]=1;
	for(int i=1;;i++)
	{
		if((i-1)*(k-1)+k>n+m) break;
		int sum=(i-1)*(k-1),sa,sb;
		for(int j=0;j<=n;j++)
		{
			if(f[j]==0) continue;
      
			for(int a=0;a<k;a++)
			{
				sa=j+a;
				sb=sum-j+k-a-1;
      
				if(sa>n || sb>m || sb<0) continue;
				if((n-sa)%(k-1)==0 && (m-sb)%(k-1)==0) ans=(ans+f[j])%mmod;
			}
		}
		for(int j=0;j<=n;j++) g[j]=0;
		for(int j=0;j<=n;j++)
			for(int x=0;x<k;x++)
				g[j+x]=(g[j+x]+f[j])%mmod;
		for(int j=0;j<=n;j++) f[j]=g[j];
 	}

	printf("%d\n",ans);
	return 0;
}
