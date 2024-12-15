#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,z,s=1;
	cin>>a;
	int q[a];
	for(int i=0;i<a;i++) cin>>q[i];
	for(int i=0;i<a;i++)
	{
		if(q[i]==s){
			z++;
			s++;
		}
	}
	if(z==0) cout<<"-1";
	else cout<<a-z;
}