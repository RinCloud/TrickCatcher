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

const int N = 50005;
const int M = 2e6+5;

int n,m,q,Mod;
struct edge{
	int x,c,nxt;
}e[N*2];
int h[N],tot;

void inse(int x,int y,int c){e[++tot].x=y;e[tot].c=c;e[tot].nxt=h[x];h[x]=tot;}

vector<int>t0,t1,t2;
int dis[N],que[N];
int val[N];
LL ny[M],mi[M];

void bfs(){
	int he=0,ta=1;
	que[1]=1;
	fo(i,1,n)val[i]=dis[i]=-1;
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
	//if (k1<k2)swap(k1,k2),swap(b1,b2);
	int d=k1+1-k2;
	LL v=ny[k2]*(b1*2+c+Mod-b2)%Mod;
	if (d==0)t0.push_back(v);
	if (d==1)t1.push_back(v);
	if (d==2)t2.push_back(v);
}

int fa[M];

int getfather(int x){return fa[x]==x?x:fa[x]=getfather(fa[x]);}

int gcd(int x,int y){return !y?x:gcd(y,x%y);}

void merge(int x,int y){
	int fx=getfather(x),fy=getfather(y);
	fa[fx]=fy;
}

int d[M],u;
int d1[M],d2[M];
int divi[M],k;
int lst[M],pri[M];
bool bz[M],used[M];

void solve(){
	ny[0]=1;
	ny[1]=(Mod+1)/2;
	fo(i,2,Mod*2)ny[i]=ny[i-1]*ny[1]%Mod;
	mi[0]=1,mi[1]=2;
	fo(i,2,Mod*2)mi[i]=mi[i-1]*2%Mod;
	fo(x,1,n)
		for(int p=h[x];p;p=e[p].nxt){
			int y=e[p].x;
			add(dis[x],val[x],dis[y],val[y],e[p].c);
		}
	fo(i,0,Mod-1)fa[i]=i;
	/*
	printf("t0\n");
	for(auto u:t0)printf("%d ",u);putchar('\n');
	printf("t1\n");
	for(auto u:t1)printf("%d ",u);putchar('\n');
	printf("t2\n");
	for(auto u:t2)printf("%d ",u);putchar('\n');
	*/
	//0
	int g=Mod;
	for(auto u:t0)g=gcd(g,u);
	fo(i,0,Mod-1)merge(i,(i+g)%Mod);
	//1
	if (t1.begin()!=t1.end()){
		int v=t1.back();
		int g=Mod;
		for(auto u:t1)g=gcd(g,abs(u-v));
		fo(x,0,Mod-1)used[x]=0;
		fo(x,0,Mod-1)
		if(!used[x]){
			int g0=g;
			for(int st=x;!used[st];st=(st*2+v)%Mod)
				for(int y=st;!used[y];y=(y+g)%Mod){
					used[y]=1;
					merge(x,y);
				}
		}
	}
	//2
	if (t2.begin()!=t2.end()){
		int v=t2.back();
		int g=Mod;
		for(auto u:t2)g=gcd(g,abs(u-v));
		fo(x,0,Mod-1)used[x]=0;
		fo(x,0,Mod-1)
		if(!used[x]){
			int g0=g;
			for(int st=x;!used[st];st=(st*4+v)%Mod)
				for(int y=st;!used[y];y=(y+g)%Mod){
					used[y]=1;
					merge(x,y);
				}
		}
	}
}

int main(){
	n=get();m=get();q=get();Mod=get();
	fo(i,1,m){
		int x=get(),y=get(),c=get();
		inse(x,y,c);
		inse(y,x,c);
	}
	bfs();
	solve();
	//fo(i,0,Mod-1)if (getfather(i)==getfather(0))printf("%d ",i);putchar('\n');
	fo(cas,1,q){
		int x=get(),y=get(),r=get();
		int u=ny[dis[x]]*(r+Mod-val[x])%Mod;
		int v=ny[dis[y]]*(Mod-val[y])%Mod;
		int fu=getfather(u),fv=getfather(v);
		printf("%s\n",fu==fv?"YES":"NO");
	}
	return 0;
}