#include <stdio.h>

int main()
{
    int N;
    while(scanf("%d", &N) != EOF)
    {
        int max = 0;
        int min = 0;
        int n;
        int i;
        int a[8] = {0}; // Fixed the size of the array and initialized to zero
        for (i = 0; i < N; i++)
        {
            scanf("%d", &n);
            if (n < 3200)
            {
                a[n / 400]++;
            }
            else
            {
                max++;
            }
        }
        for (i = 0; i < 8; i++) // Changed range to 8
        {
            if (a[i] != 0)
            {
                min++;
            }
        }
        max = min + max;
        if (min == 0)
        {
            min = 1;
        }
        printf("%d %d\n", min, max);
    }
    return 0;
}