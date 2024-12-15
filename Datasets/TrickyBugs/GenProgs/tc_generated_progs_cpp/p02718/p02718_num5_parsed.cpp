#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,i,s=0,ans,c=0;
	cin>>n>>m;
	long long int a[n];
	for(i=0;i<n;i++)    //fixed index so the first index of the array is 0 not 1
	{
		cin>>a[i];
		s=s+a[i];
	}
	sort(a,a+n);    //sort array to get the largest number at the end
	if(a[n-m]<double(s)/(4*m)) cout<<"No"<<endl;    //simplified condition
	else cout<<"Yes"<<endl;
	return 0;
}
