#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110],b[110],n,ans = 0;
	cin>>n;
	for(int i=1;i<=n-1;i++)
		cin>>b[i];
	a[1] = b[1];
	ans = b[1];
	for(int j=2;j<=n-1;j++)
	{
		a[j]=min(b[j], b[j-1]);
		ans+=a[j];
	}
	ans += b[n-1];
	cout<<ans;
	return 0;
}
