#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long m;
	scanf("%d%lld", &n, &m);
	
	vector<long long> x(n+1), w(n+1), v(n+1), rv(n+1), s(n+1), u(n+1);
	
	for(int i = 1; i <= n; i++)
	{
		scanf("%lld%lld", &x[i], &w[i]);
		v[i] = v[i-1] + w[i];
		s[i] = max(s[i-1], v[i] - x[i]);
	}
	
	for(int i = n; i >= 1; i--)
	{
		rv[i] = rv[i+1] + w[i];
		u[i] = max(u[i+1], rv[i] - m + x[i]);
	}
	
	long long maxx = 0;
	
	for(int i = n; i >= 1; i--)
	{
		maxx = max(maxx, rv[i] - 2 * (m - x[i]) + s[i-1]);
		maxx = max(maxx, u[i]);
	}
	
	for(int i = 1; i <= n; i++)
	{
		maxx = max(maxx, v[i] - 2 * x[i] + u[i+1]);
		maxx = max(maxx, s[i]);
	}
	
	printf("%lld", maxx);
	
	return 0;
}
