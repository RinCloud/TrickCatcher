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
		int a[9] = {0};
		for (i=0;i<N;i++)
		{
			scanf("%d",&n);
			if(n/400<8)
				a[n/400]++;
			else
				max++;
		}
		for(i=0;i<8;i++)
		{
			if(a[i]!=0)
				min++;
		}
		if(min==0 && max>0)
			min = 1;
		else
			min = min;
		printf("%d %d\n",min, min+max);	
	}
}
