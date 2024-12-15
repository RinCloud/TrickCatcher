#include<bits/stdc++.h>
#define to edge[i].v
#define mp make_pair
#define rint register int
#define debug(x) cerr<<#x<<"="<<x<<endl
#define fgx cerr<<"-------------"<<endl
#define inf 1000000000
#define add(x,y,z) addedge(x,y,z),addedge(y,x,0)
#define T n+m+1
#define N 500
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
int n,m,vis[N],cur[N],head[N],dis[N],tot=1;
struct Edge{int v,w,f,next;Edge(int _v=0,int _w=0,int _n=0):v(_v),w(_w),next(_n){}}edge[1000000];
inline void addedge(int x,int y,int z){edge[++tot]=Edge(y,z,head[x]);head[x]=tot;}
queue<int> q;
inline int bfs()
{   q.push(0); memset(vis,0,sizeof(vis)); memcpy(cur,head,sizeof(cur)); vis[0]=1;
    while(!q.empty())
    {   int x=q.front(); q.pop();
        for(rint i=head[x];i;i=edge[i].next)
        if(!vis[to]&&edge[i].w>edge[i].f)
        {   dis[to]=dis[x]+1,vis[to]=1,q.push(to);
        }
    }
    return vis[T];
}
int dfs(int x,int res)
{   if(x==T||!res) return res;
    int flow=0,f;
    for(rint &i=cur[x];i;i=edge[i].next)
    if(dis[to]==dis[x]+1&&(f=dfs(to,min(res,edge[i].w-edge[i].f))))
    {   edge[i].f+=f; edge[i^1].f-=f; flow+=f; res-=f;
        if(!res) break;
    }
    return flow;
}
int dinic(){int ans=0;while(bfs())ans+=dfs(0,inf);return ans;}
char c[N][N];
int main()
{   cin>>n>>m;
    for(rint i=1;i<=n;i++) scanf("%s",c[i]+1);
    for(rint i=1;i<=n;i++)
    for(rint j=1;j<=m;j++)
    if(c[i][j]=='S') add(0,i,inf),add(0,n+j,inf);
    else if(c[i][j]=='T') add(i,T,inf),add(n+j,T,inf);
    else if(c[i][j]=='o') add(i,n+j,1),add(n+j,i,1);
    int ans=dinic();
    if(ans>=inf) printf("-1"); else printf("%d",ans);
    return 0;
}
