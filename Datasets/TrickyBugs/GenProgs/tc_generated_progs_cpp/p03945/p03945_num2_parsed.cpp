#include<bits/stdc++.h>
using namespace std;
char a[100005];
int main()
{
	cin>>a;
	int len=strlen(a), ans = 0; // Initialize ans with 0
	for(int i=1;i<len;i++)
		if(a[i]!=a[i-1])
			ans++;
	cout<< ans + 1 <<endl; // Increment ans by 1 before printing
	return 0;
}
