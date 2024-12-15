#include<bits/stdc++.h>
using namespace std;
int a[13][13],b[13],c[13];
int main()
{
	int n,m,k,ans=INT_MAX;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&c[i]);
		for(int j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	}
	for(int i=0;i<(1<<n);i++)
	{
		int cost=0;
		for(int j=1;j<=m;j++) b[j]=0;
		for(int j=1;j<=n;j++)
			if(i&(1<<(j-1)))
			{
				cost+=c[j];
				for(int l=1;l<=m;l++)b[l]+=a[j][l];
			}
		bool flag=true;
		for(int j=1;j<=m;j++)if(b[j]<k)flag=false;
		if(flag) ans=min(ans,cost);
	}
	if(ans!=INT_MAX) cout<<ans;
	else cout<<-1;
}