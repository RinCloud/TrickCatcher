#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a,ss=0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		if(i<10 || (i>99 && i<1000) || (i>9999 && i<100000))ss++;
	}
	cout<<ss;
	return 0;
}