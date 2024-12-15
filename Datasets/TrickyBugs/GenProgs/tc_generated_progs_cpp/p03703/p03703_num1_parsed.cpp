#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <set>
#include <queue>
#include <map>
using namespace std;

long long in[200005];

void p(int pos)
{
    while (pos <= 200003)
    {
        in[pos] += 1;
        pos += pos & (-pos);
    }
}

long long sum(int n)
{
    long long s = 0;
    while (n > 0)
    {
        s += in[n];
        n -= n & (-n);
    }
    return s;
}

int main()
{
    int n, k, x;
    long long ans = 0;
    memset(in, 0, sizeof(in));
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        ans += sum(x - k + 1);
        if (x >= k)
        {
            ans++;
            p(x - k + 1);
        }
    }
    printf("%lld\n", ans);
    return 0;
}