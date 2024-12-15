#include <cstdio>
#define maxn 105
int n, a[maxn], cnt[maxn], ans[maxn];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++)
        cnt[a[i]]++;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] > i)
        {
            printf("-1\n");
            return 0;
        }
    }
    int pos = n;
    for (int i = n; i >= 1; i--)
    {
        if (cnt[a[i]] == 1)
        {
            ans[i] = a[i];
        }
        else
        {
            while (cnt[pos] != 0)
                pos--;
            ans[i] = pos;
            cnt[a[i]]--;
            cnt[pos]--;
        }
    }
    for (int i = 1; i <= n; i++)
        printf("%d\n", ans[i]);
    return 0;
}
