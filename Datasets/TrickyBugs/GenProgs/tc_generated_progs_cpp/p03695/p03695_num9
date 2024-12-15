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
        int a[9] = {0}; // Initialize the array with zeros
        for (i=0;i<N;i++)
        {
            scanf("%d",&n);
            if(n/400<8)
                a[n/400]++;
            else
                max++;
        }
        for(i=0;i<8;i++) // Update the loop condition to 8 to match the range of colors
        {
            if(a[i]!=0)
                min++;
        }
        if(min==0 && max>0) min = 1; // Update the condition to set 'min' to 1 if it is 0 and 'max' is greater than 0
        printf("%d %d\n",min,max+min); // Update the calculation of 'max'
    }
}