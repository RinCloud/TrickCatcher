#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 100010;
int n, m, a[maxn];
int calc(int l, int r, int x)
{
    return max(l, min(r, x));
}
int main()
{
    int X;
    scanf("%d%d", &X, &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int L = X, R = X;
    int t = 0, k = 1, s = 1, x = 0;
    int time, A;
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d", &time, &A);
        while (k <= n && a[k] <= time)
        {
            int dif = s * (a[k] - t);
            L = calc(0, X, L + dif);
            R = calc(0, X, R + dif);
            s *= -1;
            x += dif;
            t = a[k];
            k++;
        }
        int T = time - t;
        A = calc(L, R, A + x);
        A = calc(0, X, A + s * T);
        printf("%d\n", A);
    }
    return 0;
}