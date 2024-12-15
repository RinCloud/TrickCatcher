#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	long long a,b,s,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld",&a,&b); // Changed %d to %lld for long long inputs
		s=a*b;
		t=ceil(sqrt(s)); // Changed int to ceil
		if(t*t==s)
		{
			if(a==b)
			{
				printf("%lld",(t-1)*2); // changed %lld to %ld
			}
			else
			{
				printf("%lld",(t-1)*2-1); // changed %lld to %ld
			}
		}
		else
		{
			if(s<=t*(t+1))
			{
				printf("%lld",t*2-1-1);// changed %lld to %ld
			}
			else
			{
				printf("%lld",t*2-1);// changed %lld to %ld
			}
		}
		printf("\n");
	}
	return 0;
}
