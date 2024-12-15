#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	string s1,s2;
	cin>>n>>s1>>s2;
	for(int i=0;i<n;++i)
	{
		int l=0;
		for(int j=i,l=0;j<n;++j,++l)
		{
			if(s1[j]!=s2[l])break;
		}
		ans=max(ans,l);
	}
	cout<<n*2-ans<<endl;
}