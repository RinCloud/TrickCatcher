#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define SF scanf
#define PF printf
#define MAXN 200010
using namespace std;
typedef long long ll;
ll a[MAXN],x,pre[MAXN],ans;
int n;
int main(){
	SF("%d%lld",&n,&x);
	for(int i=1;i<=n;i++){
		SF("%lld",&a[i]);
		pre[i]=pre[i-1]+a[i];
		ans+=a[i]*5ll+2ll*x;
	}
	for(int k=1;k<n;k++){
		ll res=k*x;
		for(int j=n,cnt=1;j>0;cnt++){
			int j1=max(0,j-k);
			ll sum=pre[j]-pre[j1];
			res+=max(5ll,cnt*2ll+1ll)*sum;
			if(res>ans)
				break;
			j=j1;
		}
		ans=min(ans,res);
	}
	PF("%lld",ans+1ll*n*x);
		
}