#include<bits/stdc++.h>
using namespace std;
#define next Next
#define gc getchar
/*char buf[1<<21],*p1=buf,*p2=buf;
inline int gc(){return p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++;}*/
inline int read()
{
    int ret=0,f=0;char c=gc();
    while(!isdigit(c)){if(c=='-')f=1;c=gc();}
    while(isdigit(c)){ret=ret*10+c-48;c=gc();}
    if(f)return -ret;return ret;
}
struct node{
    int x,i;
    node():x(0),i(0){}
    node(int y,int j):x(y),i(j){}
};
bool operator < (node a,node b)
{
  return a.x<b.x;
}
stack<int>s;
int n,x[80001],idx,tot,id[80001],low[80001],dfn[80001],scc,col[80001];
vector<node>vec;
vector<int>point[80001];

void build(int nod,int l,int r)
{
    id[nod]=++tot;
    if(nod>1)point[id[nod>>1]].push_back(tot);
    if(l==r)
  {
    int v=vec[l-1].i;
    point[id[nod]].push_back(v<=n?v+n:v-n);
    return;
  }
    int mid=l+r>>1;
    build(nod<<1,l,mid);
  build(nod<<1|1,mid+1,r);
}
void update(int nod,int l,int r,int a,int b,int x){
    if(a>b)return;
    if(l==a&&r==b)
  {
    point[x].push_back(id[nod]);
    return;
  }
    int mid=l+r>>1;
    if(mid>=b)update(nod<<1,l,mid,a,b,x);
  else if(mid<a)update(nod<<1|1,mid+1,r,a,b,x);
  else update(nod<<1,l,mid,a,mid,x),update(nod<<1|1,mid+1,r,mid+1,b,x);
}
pair<int,int> get(int i,int m){
    pair<int,int> res;int l=1,r=i,mid;
    while(l<=r)if(vec[i-1].x-vec[(mid=l+r>>1)-1].x>=m)l=mid+1;else r=mid-1;
    res.first=r+1,l=i,r=n<<1;
    while(l<=r)if(vec[(mid=l+r>>1)-1].x-vec[i-1].x<m)l=mid+1;else r=mid-1;
    res.second=l-1;
    return res;
}

void tarjan(int u)
{
    low[u]=dfn[u]=++idx;s.push(u);
    for(int i=0;i<point[u].size();i++)
  {
    int v=point[u][i];
    if(!dfn[v]){tarjan(v);low[u]=min(low[u],low[v]);}
    else if(dfn[v]>0)low[u]=min(low[u],dfn[v]);
  }
    if(low[u]==dfn[u]){int x;++scc;while(x!=u)x=s.top(),s.pop(),dfn[x]=-dfn[x],col[x]=scc;}
}
bool pd(int mid)
{
  scc=idx=0;
    memset(low,0,sizeof(low)),
  memset(dfn,0,sizeof(dfn));
  for(int i=1;i<=80000;i++)point[i].clear();
    build(1,1,tot=n<<1);
    for(int i=1;i<=n<<1;i++)
  {
    int r=vec[i-1].i;
    pair<int,int>pr=get(i,mid);
    update(1,1,n<<1,pr.first,i-1,r);
    update(1,1,n<<1,i+1,pr.second,r);
  }
    for(int i=1;i<=n<<1;i++)if(!dfn[i])tarjan(i);
    for(int i=1;i<=n;i++)
    if(col[i]==col[i+n])return false;
    return true;
}
int main()
{
    n=read();
    for(int i=1;i<=n;i++)
  {
    x[i]=read();x[i+n]=read();
    vec.push_back(node(x[i],i));
    vec.push_back(node(x[i+n],i+n));
  }
    sort(vec.begin(),vec.end());
    int l=0,r=1e9;
  while(l<r)
  {
    int mid=(l+r+1)/2;
    if(pd(mid))l=mid;
    else r=mid-1;
  }
    cout<<l;
}