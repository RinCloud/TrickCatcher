#include<bits/stdc++.h>

#define fo(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)

using namespace std;

typedef long long LL;
typedef double db;

int get(){
    char ch;
    while(ch=getchar(),(ch<'0'||ch>'9')&&ch!='-');
    if (ch=='-'){
        int s=0;
        while(ch=getchar(),ch>='0'&&ch<='9')s=s*10+ch-'0';
        return -s;
    }
    int s=ch-'0';
    while(ch=getchar(),ch>='0'&&ch<='9')s=s*10+ch-'0';
    return s;
}

const int N = 5005;
const int M = 4e4+5;

int n,m,q,Mod;
struct edge{
    int x,c,nxt;
}e[N*2];
int h[N],tot;
void inse(int x,int y,int c){
    e[++tot].x=y;e[tot].c=c;e[tot].nxt=h[x];h[x]=tot;
}
vector<int>t[20];
vector<int> x[M],y[M];
int dis[N],que[N];
int val[N];
LL ny[M],mi[M];
void bfs(){
    int he=0,ta=1;
    que[1]=1;
    fo(i,1,n) val[i]=dis[i]=-1;
    val[1]=dis[1]=0;
    for(;he<ta;){
        int x=que[++he];
        for(int p=h[x];p;p=e[p].nxt)
            if (dis[e[p].x]==-1){
                dis[e[p].x]=dis[x]+1;
                val[e[p].x]=(val[x]*2+e[p].c)%Mod;
                que[++ta]=e[p].x;
            }
    }
}
void add(int k1,int b1,int k2,int b2,int c){
    if (k1<k2)swap(k1,k2),swap(b1,b2);
    int d=k1-k2,v=ny[k2]*(b1*2-b2+c+2*Mod)%Mod;
    t[d].push_back(v);
}
int fa[M];
int find(int x){return fa[x]==x?x:fa[x]=find(fa[x]);}
int d[M],u;
int d1[M],d2[M];
int divi[M],k;
int lst[M],pri[M];
bool bz[M],used[M];

void solve(){
    ny[0]=1;
    ny[1]=(Mod+1)/2;
    fo(i,2,Mod*2) ny[i]=ny[i-1]*ny[1]%Mod;
    mi[0]=1,mi[1]=2;
    fo(i,2,Mod*2) mi[i]=mi[i-1]*2%Mod;
	int x=dis[q],y=val[q];
	int cnt=0;
	for(int i=0;i<=(x-2)/4;i++)
		for(int j=0;j<=1;j++){
			int k=x-i*4-j-1;
			k=(k+4)%4;
			d1[++cnt]=i;d2[cnt]=k;
		}
	fo(u,0,mod-1)fa[u]=u;
	fd(i,cnt,1){
		int x=d1[i]*4+d2[i];
		used[x]=1;
		rep(j,0,3)
			rep(k,0,3)
				if(((!used[j*4+k])&&find(j)!=find(k))||
				         (used[j*4+k]&&find(j)==find(k)))
				fa[find(j)]=find(k);
	}
}
int main(){
    n=get();m=get();q=get();Mod=get();
    /*
    5 7 6 7
	2 4 3
	2 1 2
	1 3 6
	3 4 1
	1 4 2
	1 4 6
	2 3 6
	2 4 1
	4 2 0
	1 5 4
    */
    fo(i,1,m){
        /*

        */
        int x=get(),y=get(),c=get();
        inse(x,y,c);
        inse(y,x,c);
    }
    bfs();
    solve();
    fo(cas,1,q){
        int r=get(),x=dis[r],y=val[r];
        int u=ny[dis[x]]*(y+Mod-val[x])%Mod;
        int v=ny[dis[y]]*(Mod-val[y])%Mod;
        int fu=find(u),fv=find(v);
        printf("%s\n",fu==fv?"YES":"NO");
    }
    return 0;
}