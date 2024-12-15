#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,i,s=0,ans,c=0;
	cin>>n>>m;
	long long int a[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	sort(a+1,a+n+1);
	if(a[n-m+1]<double(s)/(4*m))
		cout<<"No"<<endl;
	else 
		cout<<"Yes"<<endl;
	return 0;
}
