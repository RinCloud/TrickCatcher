#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	long long a,b,s,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		s=a*b;
		t=(int)sqrt(s);
		if(t*t==s)
		{
			if(a==b)
			{
				cout<<(t-1)*2;
			}
			else
			{
				cout<<(t-1)*2-1;
			}
		}
		else
		{
			if(s<=t*(t+1))
			{
				cout<<t*2-1-1;
			}
			else
			{
				cout<<t*2-1;
			}
		}
		cout<<endl;
	}
	return 0;
}
