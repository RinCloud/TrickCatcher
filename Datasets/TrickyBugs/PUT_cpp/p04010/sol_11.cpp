#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define MAXN 100000
using namespace std;
typedef long long LL;
struct node
{
	int to;
	node *nxt;
}edges[MAXN*2+5];
node *ncnt,*Adj[MAXN+5];
int N,M,spx,spy;
LL sum[MAXN+5];
LL cirlen,dist[MAXN+5],xs[MAXN+5];
LL stk[MAXN+5],t;
bool vis[MAXN+5];
void Init()
{
	ncnt=&edges[0];
}
void AddEdge(int u,int v)
{
	node *p=++ncnt;
	p->to=v;
	p->nxt=Adj[u];
	Adj[u]=p;
	
	node *q=++ncnt;
	q->to=u;
	q->nxt=Adj[v];
	Adj[v]=q;
}
void DFS(int u,int fa)
{
	vis[u]=true;
	for(node *p=Adj[u];p!=NULL;p=p->nxt)
	{
		int v=p->to;
		if(v==fa)
			continue;
		if(vis[v]==true)
		{
			spx=u,spy=v;
			cirlen=dist[v]-dist[u]+1;
			continue;
		}
		dist[v]=dist[u]+1;
		DFS(v,u);
	}
}
void GetXs(int u,int fa)
{
	vis[u]=true;
	for(node *p=Adj[u];p!=NULL;p=p->nxt)
	{
		int v=p->to;
		if(v==fa||vis[v]==true)
			continue;
		GetXs(v,u);
		xs[u]+=xs[v];
		sum[u]+=sum[v];
	}
}
int main()
{
//	freopen("print.in","r",stdin);
//	freopen("print.out","w",stdout);
	Init();
	scanf("%d %d",&N,&M);
	int u,v;
	for(int i=1;i<=M;i++)
	{
		scanf("%d %d",&u,&v);
		AddEdge(u,v);
	}
	dist[1]=0;
	DFS(1,-1);
	LL ans=0,tot=0;
	for(int i=1;i<=N;i++)
	{
		if(dist[i]%2==0)
			sum[i]=1LL;
		else
			sum[i]=-1LL;
		tot+=sum[i];
	}
	if(N-1==M)
	{
		if(tot!=0)
		{
			printf("-1\n");
			return 0;
		}
	}
	else
	{
		if(cirlen%2==1)
		{
			if(tot%2==1)
			{
				printf("-1\n");
				return 0;
			}
			sum[spx]-=tot/2;
			sum[spy]-=tot/2;
			ans+=abs(tot)/2;
		}
		else
		{
			if(tot!=0)
			{
				printf("-1\n");
				return 0;
			}
			xs[spx]=1LL;
			xs[spy]=-1LL;
		}
	}
	memset(vis,0,sizeof(vis));
	GetXs(1,-1);
	for(int i=1;i<=N;i++)
	{
		if(xs[i]==0)	ans+=abs(sum[i]);
		else
		{
			if(xs[i]==1)
				sum[i]=-sum[i];
			stk[++t]=sum[i];
		}
	}
	stk[++t]=0;
	sort(stk+1,stk+1+t);
	LL k=stk[(t+1)/2];
	for(int i=1;i<=t;i++)
		ans+=1LL*abs(stk[i]-k);
	printf("%lld\n",ans);
	return 0;
}