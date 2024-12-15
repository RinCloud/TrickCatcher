#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long suma=0;
	bool czy=false;
	int n,a,b,mn=INT_MAX;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		suma+=a;
		if(a!=b)  // repositioned this condition inside the loop
			czy=true;
		mn=min(mn,b);
	}
	if(czy==false)  // changed from if (!czy)
		cout<<0;
	else
		cout<<suma-mn;
	
	return 0;
}
