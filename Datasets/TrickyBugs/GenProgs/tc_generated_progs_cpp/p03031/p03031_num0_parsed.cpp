#include<bits/stdc++.h>
using namespace std;
int n,m,k[20],s[20][20],p[20],sum=0;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>k[i];
		for(int j=1;j<=k[i];j++)
		{
			cin>>s[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<(1<<n);i++)
	{
		int t=0;
		for(int j=1;j<=m;j++)
		{
			int count=0;
			for(int k=1;k<=k[j];k++)
			{
				if(i&(1<<(s[j][k]-1)))count++;
			}
			if(count%2==p[j])t++;
			else break;
		}
		if(t==m)sum++;
	}
	cout<<sum;
	return 0;
}
