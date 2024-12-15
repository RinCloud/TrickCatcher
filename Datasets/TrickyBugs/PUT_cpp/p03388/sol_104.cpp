#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	long long a,b,s,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		s=a*b;
		t=(int)sqrt(s);
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