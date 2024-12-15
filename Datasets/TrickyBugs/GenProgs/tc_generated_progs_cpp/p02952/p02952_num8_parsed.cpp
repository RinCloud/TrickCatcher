#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a,ss = 0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		if((i>=1 && i<=9) || (i>=100 && i<=999) || (i>=10000 && i<=99999)) ss++;
	}
	cout<<ss;
	return 0;
}
