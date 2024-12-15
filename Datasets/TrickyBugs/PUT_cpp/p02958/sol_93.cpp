#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		if (x > i)cnt++; 
	} 
	if (cnt > 1)
		puts("NO");
	else
		puts("YES");
	return 0;
}
