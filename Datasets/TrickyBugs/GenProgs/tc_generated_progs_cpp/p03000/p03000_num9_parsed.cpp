#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,a[104],t=0;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<=n;i++)
	{
		t+=a[i];
		if(t>x)
		{
			cout<<i;
			return 0;
		}
	}
}