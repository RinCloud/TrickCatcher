#include<cstdio>
using namespace std;
typedef long long LL;
const int N=5e5+5,mo=998244353;
int n,k,ans;
int f[N],g[N];
inline int ksm(int x,int y)
{
	int s=1;
	while(y)
	{
		if(y&1) s=(LL)s*x%mo;
		x=(LL)x*x%mo;
		y>>=1;
	}
	return s;
}
inline int C(int x,int y)
{
	if(y<0) return 0;
	return (LL)f[x]*g[y]%mo*g[x-y]%mo;
}
int main()
{
	scanf("%d%d",&n,&k);
	f[0]=g[0]=1;
	for(int i=1;i<N;i++) f[i]=(LL)f[i-1]*i%mo;
	g[N-1]=ksm(f[N-1],mo-2);
	for(int i=N-2;i;i--) g[i]=(LL)g[i+1]*(i+1)%mo;
	for(int R=n,B=0;R<=k;R++,B++)
	{
		int T=R-n;
		if(T<0) break;
		ans=((LL)ans+C(k-1,R-1)-C(k-1,B-T))%mo;
	}
	if(k%2==0)
	{
		int x=k>>1,T=x-n;
		if(T>=0) ans=((LL)ans+C(k-1,x))%mo;
	}
	printf("%d",ans);
	return 0;
}
