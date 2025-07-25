#include <cstdio>
#include <set>

const int P = 998244353;
inline int mul(const int &a,const int &b){return 1ll*a*b%P;}
inline int add(int a,const int &b){a+=b;return(a>=P)?a-P:a;}
inline int sub(int a,const int &b){a-=b;return (a<0)?a+P:a;}
int qsm(int a,int b){
	int ans=1;
	while(b){
		if(b&1)ans=mul(ans,a);
		a=mul(a,a);
		b>>=1;
	}
	return ans;
}
int Pow[100001],f[131072],lim,n,head[100001],nxt[100001],b[100001],k,m,v[100001],g[131072];
void push(int s,int t){
	nxt[++k]=head[s];
	head[s]=k;
	b[k]=t;
}
std::set<int>set;
void FWT(int *a){
	for(int i=1;i<lim;i<<=1)
		for(int j=0;j<lim;j+=(i<<1))
			for(int k=0;k<i;k++){
				const int Ny=a[i+j+k];
				a[i+j+k]=sub(a[j+k],Ny);
				a[j+k]=add(a[j+k],Ny);
			}
}
int main(){
	scanf("%d",&n);
	lim=1;
	while(lim<=n)lim<<=1;
	for(int i=0;i<lim;i++)g[i]=1;
	Pow[0]=1;
	for(int i=1;i<=n;i++)Pow[i]=mul(Pow[i-1],(1000000000000000000ll)%P);
	for(int fd=0;fd<3;fd++){
		for(int j=1;j<=n;j++)head[j]=v[j]=0;
		k=0;
		scanf("%d",&m);
		for(int j=1,u,v;j<=m;j++){
			scanf("%d%d",&u,&v);
			if(u>v)push(v,u);
			else push(u,v);
		}
		for(int i=n;i;i--){
			set.clear();
			for(int j=head[i];j;j=nxt[j])
				set.insert(v[b[j]]);
			for(v[i]=0;set.count(v[i]);v[i]++);
		}
		for(int j=0;j<lim;j++)f[j]=0;
		for(int j=1;j<=n;j++)f[v[j]]=add(f[v[j]],Pow[j]); 
		FWT(f);
		for(int j=0;j<lim;j++)g[j]=mul(g[j],f[j]);
	}
	int inv=qsm(lim,P-2),ans=0;
	for(int i=0;i<lim;i++)ans=add(ans,g[i]);
	printf("%d\n",mul(ans,inv));
}
