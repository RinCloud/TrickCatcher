#include<cstdio>
#define maxn 105
int n,a[maxn],cnt[maxn],ans[maxn];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++) cnt[a[i]]++;
	for(int i=1;i<=n;i++)
		if(cnt[i]>i) { printf("-1\n"); return 0; }
	for(int i=n;i;i--)
	{
		int pos=0;
		for(int j=1;j<=i;j++)
			if(a[j]==j&&a[j]>a[pos]) pos=j;
		ans[i]=pos;
		for(int j=pos;j<i;j++) a[j]=a[j+1];
		for(int j=1;j<i;j++)
			if(a[j]>=i) { printf("-1\n"); return 0; }
	}
	for(int i=1;i<=n;i++) printf("%d\n",ans[i]);
}
