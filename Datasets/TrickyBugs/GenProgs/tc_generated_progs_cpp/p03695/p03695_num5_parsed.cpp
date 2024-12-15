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
        int a[9] = {0}; // Initialize the array to store colors count
        for (i=0;i<N;i++)
        {
            scanf("%d",&n);
            if(n/400<8)
                a[n/400]++;
            else
                max++;
        }
        for(i=0;i<8;i++) // Update the loop limit to match the colors range
        {
            if(a[i]!=0)
                min++;
        }
        max = min + max;
        if(min==0 && max>0) // Check if there are no colors selected and at least one user
            min=1;
        printf("%d %d\n",min,max);    
    }
}