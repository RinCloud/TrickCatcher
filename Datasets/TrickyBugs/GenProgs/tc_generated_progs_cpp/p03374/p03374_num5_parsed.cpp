#include <bits/stdc++.h>
using namespace std;
long long n, c, x[100001], v[100001], s[100001], u[100001];

int main()
{
    long long maxx = 0;
    scanf("%lld %lld", &n, &c);
    for(int i=1; i <= n; i++)
    {
        scanf("%lld %lld", &x[i], &v[i]);
        s[i] = s[i-1] + v[i] - (x[i] - x[i-1]);
    }
    for(int i=n; i>=1; i--)
    {
        u[i] = u[i+1] + v[i] - (c - x[i]);
    }
    for(int i=n; i>=1; i--)
    {
        maxx = max(maxx, u[i]);
        maxx = max(maxx, s[i]);
        maxx = max(maxx, s[i] - u[i+1]);
    }
    printf("%lld", maxx);
    return 0;
}
