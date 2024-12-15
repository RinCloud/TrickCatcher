#include <bits/stdc++.h>
using namespace std;
int p[100010];
int n,l,t,pos,to;
int main()
{
	scanf("%d%d%d",&n,&l,&t);
	int delta;
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&pos,&to);
		if(to==1)
		{
			p[i]=pos+t;
			p[i]%=l;
			delta+=(pos+t)/l;
		}
		else
		{
			p[i]=pos-t;
			p[i]%=l;
			delta+=(pos-t)/l;
			if(p[i]<0)
			{
				p[i]+=l;
				delta--;
			}
		}
	}
	sort(p+1,p+n+1);
	((delta%=n)+=n)%=n;

	for(int i=delta+1;i<=n;i++) printf("%d\n",p[i]);
    for(int i=1;i<=delta;i++) printf("%d\n",p[i]);
}