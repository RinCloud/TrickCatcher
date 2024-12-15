#include <bits/stdc++.h>
using namespace std;
int p[100010];
int n,l,t,pos,to,delta=0;
int main()
{
	scanf("%d%d%d",&n,&l,&t);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&pos,&to);
		if(to==1)
		{
			p[i]=(pos+t)%l;
			delta+=(pos+t)/l;
		}
		else
		{
			p[i]=(pos-t)%l;
			delta+=(pos-t)/l;
			if(p[i]<0)
			{
				p[i]+=l;
				delta--;
			}
		}
		p[i]=(p[i]+l)%l;
	}
	sort(p+1,p+n+1);
	delta%=n;
	if(delta<0) delta+=n;

	for(int i=delta+1;i<=n;i++) printf("%d\n",p[i]);
    for(int i=1;i<=delta;i++) printf("%d\n",p[i]);
}
