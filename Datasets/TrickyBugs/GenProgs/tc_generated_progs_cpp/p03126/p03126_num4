#include<iostream>
using namespace std;
int c[30],n,k,m,a;
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		for(int j=0;j<k;j++)
		{
			cin>>a;
			c[a]++;
		}
	}
	a=0;
	for(int i=1;i<=m;i++)
	{
		if(c[i]==n)
		{
			a++;
		}
	}
	cout<<a;
}