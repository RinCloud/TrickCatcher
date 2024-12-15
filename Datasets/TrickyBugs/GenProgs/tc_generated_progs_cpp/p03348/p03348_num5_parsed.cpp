#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 9223372036854775807LL
#define N 150
vector<int> g[N];
int dep[N],a[N],n,i,u[N],v[N],rt,rt2,j,psz;
bool zw;
void dfs(int now,int lst)
{
	int cnt=0;
	for (int ii=0;ii<g[now].size();ii++) if (g[now][ii]!=lst) cnt++;
	dep[now]=dep[lst]+1;a[dep[now]]=max(a[dep[now]],cnt);if (dep[now]>psz) zw=true;
	for (int ii=0;ii<g[now].size();ii++) if (g[now][ii]!=lst) dfs(g[now][ii],now);
}	
int main()
{
	scanf("%d",&n);
	for (i=1;i<n;i++){
		int x,y;scanf("%d%d",&x,&y);u[i]=x;v[i]=y;
		g[x].push_back(y);g[y].push_back(x);
	}rt=1;dfs(1,0);for (i=1;i<=n;i++) if (dep[i]>dep[rt]) rt=i;
	dfs(rt,0);rt2=rt;for (i=1;i<=n;i++) if (dep[i]>dep[rt2]) rt2=i;
	psz=dep[rt2]+1>>1;printf("%d ",psz);
	long long ans=INF;
	if (dep[rt2]&1){
	for (i=1;i<=n;i++){zw=false;
		for (j=1;j<=psz;j++) a[j]=1;
		dfs(i,0);
		long long tot=1;
		for (j=1;j<=psz;j++) if (tot>=ans/a[j]) zw=true;else tot=tot*a[j];
		if (!zw) ans=tot;
	}
	}
	for (i=1;i<n;i++){zw=false;
		for (j=1;j<=psz;j++) a[j]=1;
		int temp = dep[v[i]];
		dep[v[i]]=0;dfs(u[i],v[i]);dep[u[i]]=0;dfs(v[i],u[i]);
		long long tot=2;
		for (j=1;j<=psz;j++) if (tot>=ans/a[j]) zw=true;else tot=tot*a[j];
		if (!zw) ans=tot;
		dep[v[i]] = temp;
	}printf("%lld\n",ans);
	return 0;
}
