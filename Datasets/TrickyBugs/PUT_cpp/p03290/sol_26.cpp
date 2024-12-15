#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,ans,u[20];
int c[20],p[20];
void dfs(int x) {
	if (x>n) {
		ll s=0; int a=0;
		for (int i=1;i<=n;i++)
			if (u[i]) s+=p[i]+c[i]*i*100,a+=c[i];
		for (int i=n;i>=1;i--)
			if (!u[i]&&s<m) {
				if (s+(c[i]-1)*i*100<=m) s+=(c[i]-1)*i*100,a+=c[i]-1;
				else {
					int tmp=(m-s)/(i*100);
					a+=tmp; s+=tmp*i*100;
				}
			}
		if (s>=m) ans=min(ans,a);
		return;
	}
	u[x]=1; dfs(x+1); u[x]=0; dfs(x+1);
}
int main() {
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++) scanf("%d %d",&c[i],&p[i]);
	ans=1e9;
	dfs(1);
	printf("%d\n",ans);
	return 0;
}