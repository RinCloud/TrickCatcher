#include<bits/stdc++.h>
using namespace std;
int n,m,k=0;
int dist[2][100005];
int vis[100005];
vector<int> v[100005];
inline void dfs(int x,int l,int k)
{
	vis[x]=1;
	dist[l][x]=k;
	for (int i=0;i<v[x].size();i++)
	{
		if (vis[v[x][i]]==0)
			dfs(v[x][i],l,k+1);
	}
}
int main()
{
	scanf("%d",&n);
	for (int i=0;i<n-1;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		x--,y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(vis,0,sizeof(vis));
	dfs(0,0,0);
	memset(vis,0,sizeof(vis));
	dfs(n-1,1,0);
	int f,s;
	for (int i=0;i<n;i++)
	{
		if (dist[0][i]<=dist[1][i])
			f++;
		else
			s++;
	}
	if (f>s)
		printf("Fennec");
	else
		printf("Snuke");
	return 0;
}