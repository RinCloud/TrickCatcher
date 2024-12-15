#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110],b[110],n,ans = 0;
	cin>>n;
	for(int i=1;i<=n-1;i++)
		cin>>b[i];
	for(int j=2;j<=n-1;j++)
	{
		a[j]=min(b[j],b[j-1]);
		ans+=a[j];
	}
	ans += b[1] + b[n-1]; // fixed calculation of sum including first and last elements
	cout<<ans;
	return 0;
}