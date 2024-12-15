#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s;
	int a;
	for(int i=0;i<4;i++)
	{
		cin>>s;
		if(s=='+')
		    a+=1;
		if(s=='-')
		    a-=1;
	}
	cout<<a;
}