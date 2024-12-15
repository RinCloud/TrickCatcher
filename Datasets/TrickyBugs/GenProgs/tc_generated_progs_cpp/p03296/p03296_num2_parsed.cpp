#include <stdio.h>

int main(void)
{
    int n, a[101], i, c = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    i = 0;

    while (i < n - 1)
    {
        if (a[i] == a[i + 1])
        {
            c = c + 1;
            a[i + 1] = (a[i + 1] % n) + 1;
        }
        i++;
    }
    printf("%d\n", c);
    return 0;
}
