#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <queue>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
const int N = 2005;
int a[N],d[N];
ll f[N][N];
bool cmp(int x,int y)
{
    return a[x] > a[y];
}
int main()
{
    int n;scanf("%d",&n);
    for(int i = 1;i <= n;++i)    scanf("%d",&a[i]),d[i] = i;
    sort(d+1,d+n+1,cmp);
    
    for(int l = 0;l <= n;++l)
    {
        for(int r = 0;l + r <= n;++r)
        {
            int k = l + r - 1;
            if(l)    f[l][r] = max(f[l][r],f[l - 1][r] + a[d[k]] * abs(d[k] - l));
            if(r)    f[l][r] = max(f[l][r],f[l][r - 1] + a[d[k]] * abs(d[k] - n + r));
        }
    }
    ll res = 0;
    for(int i = 0;i <= n;++i)
        res = max(res,f[i][n - i]);
    printf("%lld",res);
    return 0;
}

