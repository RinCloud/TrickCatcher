#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	long long a,b,s,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld",&a,&b); // Changed %d to %lld for long long integers
		s=a*b;
		t=(long long)sqrt(s); // Changed (int) to (long long) for long long integers
		if(t*t==s)
		{
			if(a==b)
			{
				printf("%lld",(t-1)*2);
			}
			else
			{
				printf("%lld",(t-1)*2-1);
			}
		}
		else
		{
			if(s<=t*(t+1))
			{
				printf("%lld",t*2-1-1);
			}
			else
			{
				printf("%lld",t*2-1);
			}
		}
		printf("\n");
	}
	return 0;
}