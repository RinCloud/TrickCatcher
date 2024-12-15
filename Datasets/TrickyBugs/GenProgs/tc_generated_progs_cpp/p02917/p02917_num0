#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[110],b[110],n,ans;
	cin>>n;
	for(int i=1;i<=n-1;i++)
		cin>>b[i];
	ans = 0; // Initialize ans to 0
	for(int j=1;j<=n-1;j++)
	{
		a[j]=min(b[j],b[j+1]); // Fix index from j-1 to j+1
		ans+=a[j];
	}
	ans += b[1] + b[n-1]; // Update calculation to include first and last elements of b
	cout<<ans;
	return 0;
}