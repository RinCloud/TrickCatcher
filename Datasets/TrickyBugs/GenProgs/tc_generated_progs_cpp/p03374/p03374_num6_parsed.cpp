#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100001;

int n;
long long m;
long long x[MAXN], w[MAXN], v[MAXN], rv[MAXN], s[MAXN], u[MAXN];

int main()
{
    long long maxx = 0;
    scanf("%d%lld", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld%lld", &x[i], &w[i]);
        v[i] = v[i - 1] + w[i];
        s[i] = max(s[i - 1], v[i] - x[i]);
    }
    for(int i = n; i >= 1; i--)
    {
        rv[i] = rv[i + 1] + w[i];
        u[i] = max(u[i + 1], rv[i] - m + x[i]);
    }
    for(int i = n; i >= 1; i--)
    {
        maxx = max(maxx, rv[i] - 2 * (m - x[i]) + s[i - 1]);
        maxx = max(maxx, u[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        maxx = max(maxx, v[i] - 2 * x[i] + u[i + 1]);
        maxx = max(maxx, s[i]);
    }
    printf("%lld", maxx);
    return 0;
}
