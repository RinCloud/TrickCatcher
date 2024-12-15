#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
using namespace std;
long long int a[300001]={0};
long long int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long int k;
		cin>>k;
		int j=0;
		while(k!=0)
		{
			a[j]=a[j]+k%2;
			j++;
			k/=2;
		}
	}
	long long int max=0;
	long long int u=1;
	for(int i=0;i<=61;i++)
	{
		if(i!=0)	u*=2;
		u=u%1000000007;
		max+=(n-a[i])*a[i]%1000000007*u;
	}
	cout<<max%1000000007;
}