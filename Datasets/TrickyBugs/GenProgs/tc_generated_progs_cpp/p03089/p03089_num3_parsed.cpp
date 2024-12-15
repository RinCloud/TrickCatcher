#include <cstdio>
#define maxn 105
int n, a[maxn], cnt[maxn], ans[maxn];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
        cnt[i] = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt[a[i]]++;
        if (cnt[a[i]] > i)
        {
            printf("-1\n");
            return 0;
        }
    }
    for(int i = n; i >= 1; i--)
    {
        ans[i] = a[i];
        for (int j = 1; j < i; j++)
            if (a[j] >= a[i])
                a[j]++;
    }
    for (int i = 1; i <= n; i++)
        printf("%d\n", ans[i]);
    return 0;
}