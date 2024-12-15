#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a,ss = 0;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		int digits = floor(log10(i)) + 1;
		if(digits % 2 != 0) ss++;
	}
	cout<<ss;
	return 0;
}
