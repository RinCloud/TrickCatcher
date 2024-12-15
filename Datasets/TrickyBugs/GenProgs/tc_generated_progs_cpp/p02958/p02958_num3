#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> p(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i];
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (p[i] != i) cnt++;
	}
	if (cnt == 0 || cnt == 2)
	{
		puts("YES");
	}
	else
	{
		puts("NO");
	}
	return 0;
}