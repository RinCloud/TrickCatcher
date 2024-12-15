#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<set>
#include<queue>
#include<map>
using namespace std;

long long s[200005],ts[200005],in[200005];

void p(int pos)
{
	while(pos<=200003)
	{
		in[pos]+=1;
		pos+=pos&(-pos);
	}
	
}

long long sum(int n)
{
	long long sum=0;
	while(n>0)
	{
		sum+=in[n];
		n-=n&(-n);
	}
	return sum;
}

int main()
{
	int n,k,x;
	long long ans=0;
	memset(s,0,sizeof(s));
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)  	
	{
		scanf("%d",&x);
		s[i]=x-k+s[i-1];
		ts[i]=s[i];
		if(s[i]>=0)
			ans++;
	}
	sort(ts+1,ts+1+n);
	int size=unique(ts+1,ts+1+n)-ts+1;
	for(int i=1;i<=n;i++)
	{
		s[i]=lower_bound(ts+1,ts+1+size,s[i])-ts;
	}
	memset(in,0,sizeof(in));
	for(int i=1;i<=n;i++)
	{
		ans+=sum(s[i]);
		p(s[i]);
	}
	
	printf("%lld\n",ans);
	return 0;
}
