#include<stdio.h>
int main()
{
    int N;
    while(scanf("%d",&N)!=EOF)
    {
        int max=0;
        int min=0;
        int n;
        int i;
        int a[8] = {0}; // Fix size of array and initialize to 0
        for (i=0;i<N;i++)
        {
            scanf("%d",&n);
            int color = n/400;
            if(color < 8)
                a[color]++;
            else
                max++;
        }
        for(i=0;i<8;i++) // Iterate over 8 colors
        {
            if(a[i]!=0)
                min++;
        }
        max = min + max;
        if(min==0)
            min++;
        printf("%d %d\n", min, max);  
    }
}