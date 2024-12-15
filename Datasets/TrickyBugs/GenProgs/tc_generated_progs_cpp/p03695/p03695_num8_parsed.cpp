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
		int a[8] = {0}; // Fix: Initialize array a with size 8 and all elements to 0
		for (i=0;i<N;i++)
		{
			scanf("%d",&n);
			if(n/400<8)
				a[n/400]++;
			else
				max++;
		}
		for(i=0;i<8;i++) // Fix: Change loop condition from 9 to 8 to access correct array indices
		{
			if(a[i]!=0)
				min++;
		}
		max = min + max;
		if(min==0 && max > 0) // Fix: Update condition to handle 0 minimum colors with other users having colors
			min = 1;
		printf("%d %d\n",min,max);	
	}
}