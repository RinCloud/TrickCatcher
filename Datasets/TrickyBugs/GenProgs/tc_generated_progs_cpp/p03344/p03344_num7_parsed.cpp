#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
const int N=100010;
const ll INF=0x3f3f3f3f3f3f3f3f;
struct node{
	int v,next;
}edge[N<<1];
int last[N],le;
void add(int u,int v){
	edge[++le].v=v,edge[le].next=last[u],last[u]=le;
	edge[++le].v=u,edge[le].next=last[v],last[v]=le;
}
ll a[N],b[N],dp[N],sum[N];
int f[N],fa[N],pos[N],rt;
inline int find(int x){
	return f[x]==x?x:f[x]=find(f[x]);
}
inline bool cmp(int t1,int t2){
	return a[t1]<a[t2];
}
vector<int> G[N];
void dfs(int u){
	sum[u]=b[u];
	if (!G[u].size()){
		dp[u]=a[u]+b[u];
		return;
	}
	for (int i=G[u].size()-1;~i;--i){
		int v=G[u][i];
		dfs(v);
		sum[u]+=sum[v];
	}
	dp[u]=INF;
	for (int i=G[u].size()-1;~i;--i){
		int v=G[u][i];
		dp[u]=min(dp[u],max(dp[v],a[u])+sum[u]-sum[v]);
	}
}
int main(){
	int n,m;
	cin >> n >> m;
	for (int i=1;i<=n;++i){
		cin >> a[i] >> b[i];
		a[i]=max(a[i]-b[i],0ll);
		pos[i]=f[i]=i,fa[i]=-1;
	}
	for (int i=1;i<=m;++i){
		int u,v;
		cin >> u >> v;
		add(u,v);
	}
	sort(pos+1,pos+n+1,cmp);
	for (int j=1;j<=n;++j){
		int u=pos[j];
		for (int i=last[u];i;i=edge[i].next){
			int v=edge[i].v;
			if (fa[find(v)]==0) fa[find(v)]=f[find(v)]=u;
		}
		fa[u]=0;
	}
	for (int i=1;i<=n;++i){
		if (!fa[i]) rt=i;
		else G[fa[i]].push_back(i);
	}
	dfs(rt);
	cout << dp[rt] << endl;
	return 0;
}