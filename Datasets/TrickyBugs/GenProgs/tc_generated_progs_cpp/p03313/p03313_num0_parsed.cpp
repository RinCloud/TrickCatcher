#include <bits/stdc++.h>
using namespace std;
#define N 19

int a[1<<N],s[1<<N][2],ans[N];
int n;

int main()
{
	scanf("%d",&n);
	for (int i=0;i<(1<<n);i++) scanf("%d",&a[i]),s[i][0]=a[i];
	for (int k=0;k<n;k++) {
		for (int j=0;j<(1<<n);j++)
			if (!(j>>k&1))
			{
				int t=j|(1<<k);
				for (int i=0;i<2;i++)
				{
					if (s[j][i]>s[t][0]) s[t][1]=s[t][0],s[t][0]=s[j][i];
					else if (s[j][i]>s[t][1]) s[t][1]=s[j][i];
				}
			}
	}
	for (int i=1;i<(1<<n);i++)
	{
		ans[i]=max(ans[i-1],s[i][0]+s[i][1]);
		printf("%d\n",ans[i]);
	}
	return 0;
}
