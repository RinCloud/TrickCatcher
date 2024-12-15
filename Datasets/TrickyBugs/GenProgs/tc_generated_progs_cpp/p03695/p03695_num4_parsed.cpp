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
		int a[9] = {0}; // fixing the size of array to 9 and initializing to 0
		for (i=0;i<N;i++)
		{
			scanf("%d",&n);
			if(n<3200) // checking the condition correctly
				a[n/400]++;
			else
				max++;
		}
		for(i=0;i<8;i++) // iterating over colors correctly
		{
			if(a[i]!=0)
				min++;
		}
		if(min==0 && max!=0) // fixing the min calculation logic
			min=1;
		else if(min==0 && max==0) // in case all ratings are above 3200
			min = 1;
		max=min+max;
		printf("%d %d\n",min,max);	
	}
}